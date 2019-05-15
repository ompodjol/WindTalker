pipeline {
    agent any 
    stages {
        stage('Build') { 
            steps {
                sh 'pwd; cd src; make; cd ..'
            }
        }
    }
}
