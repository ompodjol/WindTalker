pipeline {
    agent any 
    stages {
        stage('Build') { 
            steps {
                sh 'pwd; ls; make -C src/'
            }
        }
    }
}
