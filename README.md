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
</pre>
------------------------------------------------------------------------


