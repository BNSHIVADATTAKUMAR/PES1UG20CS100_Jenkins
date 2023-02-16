pipeline {
  agent any
  stages {
    stage('Build') {
      steps {
        sh 'g++ xxx.cpp'
        build job: 'PES1UG20CS'
        echo 'Built Successfully '
      }
    }
    stage('Test') {
      steps {
        sh './a.out'
        echo 'Tested Passed '
      }
    }
    stage('Deploy') {
      steps {
        echo 'Deployed  '
      }
    }
  }
  post{
    failure{
        echo "Pipeline failed "
    }
  }
}