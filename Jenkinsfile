pipeline {
    agent any 

    stages {
        stage('Build') { 
            steps {
		echo '{Building...Started}'
                sh 'pwd; cd src; make; cd ..'
		echo '{Building...Done}'
            }
        }
    }
}
