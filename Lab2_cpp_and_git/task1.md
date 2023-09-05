## Git

Last lab we learned a little bit about [git](https://git-scm.com/), the version control system many folks rely on for software development. To start this lab, we are going to continue learning more git, and I want to motivate it a little more.

## Motivation

In my opinion, one of the powers of a version control system, is it allows you to aggressively make changes, take risks and learn, and then revert the changes if they do not work out. Git allows you to revert back to a previous versions of files (typically text-based source code files) before you made modifications. It is considered wise to [git add](https://git-scm.com/docs/git-add), [git commit](https://git-scm.com/docs/git-commit), and [git push](https://git-scm.com/docs/git-push) your files early and often as you make modifications. This means if you make mistakes or accidently delete a file you can always roll back to a previous version of that file. You can read more about the motivations of version control [here](https://git-scm.com/book/en/v2/Getting-Started-About-Version-Control).

## Previous Commands

We previously learned some specific git commands:

|Command   | Description   |
|---|---|
| [[git clone](https://git-scm.com/docs/git-clone)] your_repository_url  |Copies the entire repository (including the history of commits) to your local machine.   |
| [[git status](https://git-scm.com/docs/git-status)]   | Tells you what branch you are on, as well as which files are untracked and modified files (`git status -s` shows an abbreviated form of this.)   |
| [[git add](https://git-scm.com/docs/git-add)] whatever_file.cpp   | This marks a file as being 'tracked' and thus versions of this file can be kept track of. (`git add -a` stages every tracked file for you so you do not have to do them one at a time.)  |
| [[git-commit](https://git-scm.com/docs/git-commit)] -m "Some informative message"  | Records your changes to a repository. Typically you are doing this locally, and then you will later push the recorded changes upstream with `git push`   |
|[[git push](https://git-scm.com/docs/git-push)]   | Push your code to a repository upstream (i.e. github.com) from your local repository.   |
| [[git log](https://git-scm.com/docs/git-log)]   |Shows a log of your commits.   |


See more commands here: [Cheatsheets directory](./../Cheatsheets/git-cheat-sheet-education.pdf)

Additionally, we learned that `git` is a version control system, and that github is the host for a git repository.

## Git Structures

Git again is a version control system. More specifically however, it is a [distributed version control system](https://en.wikipedia.org/wiki/Distributed_version_control) (DVCS). This means that every time you are cloning (whether that means you and your teammates, or you multiple times), you have the repository with the entire history.

<img align="center" src="https://git-scm.com/book/en/v2/images/distributed.png" width=400px/>

The image above shows how multiple computers have each repository and also have all of the versions of every file. Every time you commit, you save a full snapshot of what your repository looked like at that point (Git will try to be efficient and only save different files [source](https://git-scm.com/book/en/v2/Getting-Started-What-is-Git%3F)). I find it is thus helpful to think of git more like a file system, such that every time you commit, you are creating a backup directory (i.e. a copy of a directory at a certain point in time).

## Git is mostly local

Most of the operations you are performing are done locally in git--that is changes are made on the copy of the repository on your local machine only. Remember the picture above? You have a whole copy of the repository, so it is not necessary to have a network connection to use git and make revisions to your code. This may seem a bit scary, but it is a good thing to be able to work and not worry about having a network connection--most of git will just work, and you can take 'snapshots' (i.e. commits) of your code as you develop. Then eventually when you have an internet connection, you can push to github.com. All of that being said, if you are connected to the internet, go ahead and push often!

## Git terminology on working

A file in a git repository (i.e. somewhere you have cloned a git repository, or otherwise used [git init](https://git-scm.com/docs/git-init)) can be in one of many states. Understanding what state your file in is important to understanding how to work in git.

### Tracked vs Untracked

Files in git can first and foremost be either (1)tracked or (2)untracked. Any file that is tracked will be included in your repository when you perform a commit. By default when you do a fresh [git clone](https://git-scm.com/docs/git-clone), you are getting all of the files that are tracked, and all of the tracked files histories. Any time you modify a tracked file, you can perform a [git status](https://git-scm.com/docs/git-status) and git will notify you if you have made changes since your last commit.

### The four states of a file, and the three stages of a git file.

Any file really has four states it can be in. 

1. untracked
2. unmodified
3. modified
4. staged. 

When you [git add](https://git-scm.com/docs/git-add) a file, it is then being tracked, and it can then be in a stage of (2)unmodified, (3)modified, or (4)staged. Each of these three stages is in respect to how tracked files are monitored within a git repository.

<img align="center" src="https://git-scm.com/book/en/v2/images/lifecycle.png" width=600px/>

The figure above illustrates how files in git change and what state they are in. When you perform a [git status](https://git-scm.com/docs/git-status) you can look to see if files have been unmodified, modified, staged, or untracked.

### Staged files

We say a file is 'staged' in git when that file is ready to be committed. Anytime you run the [git add](https://git-scm.com/docs/git-add) command, a file is 'staged' or otherwise getting ready to be added to the next commit.

Note: If you make changes to a file after doing a [git add](https://git-scm.com/docs/git-add) (and before you [git commit](https://git-scm.com/docs/git-commit)) you will have to do another [git add](https://git-scm.com/docs/git-add) in order for that file to be committed. Generally I recommend always using [git add](https://git-scm.com/docs/git-add) and then [git commit](https://git-scm.com/docs/git-commit) as a pair, though that is only a rule of thumb.

[More information on git add](https://git-scm.com/book/en/v2/Git-Basics-Recording-Changes-to-the-Repository)

## Removing Files

So just as there is a [git add](https://git-scm.com/docs/git-add) command, there is a way to removal files from your staging area using [git rm](https://git-scm.com/docs/git-rm). This will also remove the file from your hard drive after you commit, because you are telling git to no longer track this file, and your latest snapshot will not have it.

Note: If you do want to keep the file on your hard drive, but not have it deleted, use: `git rm --cached whatever_the_file_name_is`. This will keep the file, but not commit it in your repository. An example of when you might do this is if you have a binary file that took a long time to compile, but you do not want to commit it to your repository.

## Moving Files

You may have learned on the terminal that you can move files using the `mv` command. Git needs a little bit more help however when moving files around (if you choose to reorganize your repository), so that the version history will also move with the file. Use the `git mv file_from file_to` command when moving files around in the repository.

[git mv documentation](https://git-scm.com/docs/git-mv)

## More notes on git push

When you `push` in git, that is pushing your entire local repository to the world wide web. You may hear developers say you are pushing things **upstream** and thus contributing back to the main project when this happens. This means you are "pushing" all of your commit history (i.e. snapshots of your files and changes you have made) to a repository that can then be shared with others. Then when other folks clone your repository, they are retrieving all of the changes.

## Ignoring files

Often we will not want to commit certain types of files to our repository. For example, binary files that are generated after compiling our source file can take up a lot of space (remember a commit is essentially a copy of any changed files, and binaries change frequently). We can include a file named [.gitignore](https://git-scm.com/docs/gitignore) (Note: the dot in front of the filename) which specifies which file types to ignore from being included in our repository.

```bash
# Here is a sample .gitignore file which will ignore any .o files that are generated.
# Note that lines that start with a hash mark are comments.
*.[o]

# Note you could also type a specific file to ignore as well (e.g. a binary file)
```

### I don't know how in git?

If you need help in git, you can try the git help system. I like knowing how to use the builtin help system, because then I do not need to rely on an internet connection--sometimes it is also faster to type in as well!

* [git help](https://git-scm.com/docs/git-help) <verb>
* git <verb> --help
* man git-<verb>

```bash
git help add
```

## Some additional handy commands

Try typing out the following commands in the command line.

```bash
git --version			# Retrieve git version
git config --list		# List all of your configuration options
git config user.email		# See a specific configuration option
```

## The case of the command line with Git

You may use whatever GUIs and tools you like in this course. You and your team will have to agree on a subset of them to use when the time comes (or otherwise agree to the tools your client wants you to use). However, the command line I will note is the only place where you can use all of the git commands readily available [[source](https://git-scm.com/book/en/v2/Getting-Started-The-Command-Line)]. I recommend you get comfortable doing things from the command-line for git.

## Your Task (Your action item)

**Action item:** Add a [.gitignore](./.gitignore) file to the root directory of your monorepo so the following files will be ignored:

- .o
- .out
- .app
- .exe
- .so
- .dylib
- .dll

<!--
**With your partner:** Discuss if anything with 'git' at this point you are having trouble understanding, and see if you can help explain or find a solution.
-->
