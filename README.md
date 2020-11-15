EU1KY Antenna Analyzer Firmware VE7IT Version
------------------------------------------------------------------------
<pre>
hardware project site: https://bitbucket.org/kuchura/eu1ky_aa_v3/wiki/Home
software derived from: https://github.com/ted051/Analyzer_EU1KY_CEC_AKF
my build notes: http://ve7it.cowlug.org/eu1ky-ve7it.html

Slight tweaks to a great piece of software.
- main.c holds splash screen until the screen is tapped
    while(!TOUCH_IsPressed());      // lpg hang until screen tapped

- main.c 1000ms delay reduced to 100ms after tapping on splash screen
    Sleep(100);

- tdr.c  display cable length in m and ft in a different screen location
    FONT_Print(FONT_FRANBIG, TextColor, BackGrColor, 220, 200, "%.2fm %.1fft", lenm,lenm * 3.2808);

- gen_timestamp.bat use build time and date as the version number if 
  unable to get git version data

------------------------------------------------------------------------

MY NOTES on using git:

#to keep up to date with upstream changes
#grab existing code from this repository
cd ~/git
git clone https://github.com/ve7it/Analyzer_EU1KY_CEC_AKF.git
cd Analyzer_EU1KY_CEC_AKF
git remote add upstream https://github.com/ted051/Analyzer_EU1KY_CEC_AKF.git




# Whenever there are changes in the upstream code you can fetch them and 
# apply to your tree, just do the following
cd ~/git/Analyzer_EU1KY_CEC_AKF
git pull
git fetch upstream
git checkout master
git merge upstream/master
git status
git add Src/analyzer/window/mainwnd.c .... for files you want updated
#git commit -a
git push

# after making local edits.... add all changed files
# or just use git commit -a
git add README.md
git add Src/analyzer/window/mainwnd.c
...

# commit changes with a notation
git commit -m "Add some-feature"
#quick check to see if it will run as expected
git push --dry-run
# get stuff back up to github
git push


# You can keep your work stashed away, without commiting it, with 
# git stash. You would than use git stash pop to get it back. 
# Or you can git commit it to a separate branch.

# git checkout by date
git checkout `git rev-list -n 1 --before="2009-07-27 13:37" master`

# return to an old version
# This will rewind your HEAD branch to the specified version. 
# All commits that came after this version are effectively undone; 
# your project is exactly as it was at that point in time.
git reset --hard 0ad5a7a6

# or use the "--soft" flag. 
# Git will keep all the changes in those "undone" commits as local modifications:
# You'll be left with a couple of changes in your working copy and 
# can then decide what to do with them.
$ git reset --soft 0ad5a7a6

</pre>
------------------------------------------------------------------------


