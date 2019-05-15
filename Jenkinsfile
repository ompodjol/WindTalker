pipeline {
    agent any 
    stages {
        stage('Build') { 
            steps {
		checkout scm
                sh 'pwd; ls; cd src; make'
            }
        }
    }
}
