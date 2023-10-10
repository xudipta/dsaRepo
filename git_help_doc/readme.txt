Initializing a Repository:
	git init --bare: Bare repo for server
	git init: Initializes a new Git repository in the current directory.
	git clone <repository_url>: Clones a remote Git repository to your local machine.

Basic Git Workflow:
	git status: Shows the status of your working directory, including changes to be committed.
	git add <file>: Stages changes for commit.
	git commit -m "Commit message": Commits staged changes with a descriptive message.
	git diff: Shows the differences between the working directory and the last commit.
	git diff HEAD HEAD~<index>: Shows the differences between HEAD and HEAD - index commit
	git log: Displays a commit history.
	git branch: Lists all branches in your repository.
	git checkout <branch_name>: Switches to a different branch.
	git merge <branch_name>: Merges changes from one branch into the current branch.
	
Remote Repositories:
	git remote add <remote_name> <repository_url>: Adds a remote repository.
	git remote -v: Lists remote repositories.
	git pull <remote_name> <branch_name>: Fetches and merges changes from a remote repository.
	git push <remote_name> <branch_name>: Pushes your local changes to a remote repository.
	
Branching:
	git branch <branch_name>: Creates a new branch.
	git branch -d <branch_name>: Deletes a branch.
	git checkout -b <new_branch_name>: Creates and switches to a new branch.
	git merge <branch_name>: Merges changes from one branch into the current branch.
	git rebase <branch_name>: Applies your local changes on top of another branch.
	
Undoing Changes:
	git reset <file>: Unstages changes for a specific file.
	git reset --hard HEAD: Discards all changes in the working directory.
	git revert <commit_id>: Reverts a specific commit, creating a new commit.
	
Git Remote Operations:
	git remote show <remote_name>: Displays information about a remote repository.
	git remote rename <old_name> <new_name>: Renames a remote repository.
	
Stashing:
	git stash: Temporarily saves uncommitted changes for later use.
	git stash apply: Applies the most recent stash.
	git stash pop: Applies and removes the most recent stash.
	
Tagging:
	git tag: Lists tags in the repository.
	git tag <tag_name>: Creates a new tag for the current commit.
	git push --tags: Pushes tags to a remote repository.
	
Configuring Git:
	git config --global user.name "Your Name": Sets your Git username.
	git config --global user.email "youremail@example.com": Sets your Git email.
	git config --list: Lists Git configuration settings.

====================================
Remote  
    To change the URL for the origin remote, for example:
        git remote set-url origin NEW_REMOTE_URL
    Verify that the remote URL has been updated by running:
        git remote -v
    # Remove the remotes you want to delete
        git remote remove main
        git remote remove newgitrepo
    If you want to delete any of these remote-tracking branches, you can use the following command:
        git branch -dr origin/branch_name_to_delete
====================================
