pipeline {
  agent any
  stages {
    stage('cppcheck') {
      steps {
        sh 'cppcheck --xml --xml-version=2 ./src 2> cppcheck.xml'
      }
    }

    stage('build_linux') {
      steps {
        sh 'docker-compose build'
        sh 'docker-compose run stack sh build.sh -t tst -j 4 -B Release --test-with-server opc.tcp://demo_server:8889'
      }
    }

    stage('test_linux') {
      steps {
        sh 'docker-compose run -w /OpcUaStack/build_tst_Release stack ./OpcUaStackCoreTest'
        sh 'docker-compose run -w /OpcUaStack/build_tst_Release stack ./OpcUaStackServerTest'
        sh 'docker-compose run -w /OpcUaStack/build_tst_Release stack ./OpcUaStackClientTest'
      }
    }
    
    stage('build_windows') {
      steps {
        sh 'vagrant up'
      }
    }
  }

  post {
    always {
      sh 'docker-compose down --volumes'
      sh 'vagrant destroy'
    }
  }
}
