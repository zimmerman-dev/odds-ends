## Git Branch Sync Workflow (Desktop ↔ Laptop)
You keep your main development branch (main) on your desktop, and a laptop branch (e.g. <branch-name>) on your laptop.

- main = the stable, up-to-date branch that lives on GitHub.
- <branch-name> = your working branch used on your laptop to avoid pushing half-done work directly to main.

This note shows how to:

- Pull the latest changes from main to your laptop branch.
- Merge your laptop edits into main when ready.
- Sync those merged changes back down to your desktop.

## 1. Desktop setup (baseline)

Make sure your desktop main is up to date before leaving:
```
git checkout main
git pull origin main
git push origin main   # ensures GitHub has your latest
```
Now your remote main matches what’s on your desktop.

## 2. Laptop — pull latest main into your laptop branch
When you sit down with the laptop:
```
git fetch origin         # update remote refs
git checkout main
git pull origin main     # make sure local main is current
git checkout <branch-name>
git merge main           # bring main’s changes into your laptop branch
```
✅ Result:
Your <branch-name> branch now includes everything from the latest main.
You can safely code here without disturbing main.

## 3. Laptop — push your edits back up
After you make changes and commit them:
```bash
git push origin <branch-name>
```
You’ll now see your new commits on GitHub under the <branch-name> branch.

When ready to merge those edits into main, do it one of two ways:

### Option A — On GitHub (web merge)
1. Open a Pull Request from <branch-name> → main.

2. Merge it using the web UI.

3. Done. *Then skip down to Step 4 (Desktop).*

### Option B — In terminal (local merge)
```bash
git checkout main
git pull origin main       # ensure main is latest
git merge <branch-name>      # bring your laptop changes into main
git push origin main       # publish to GitHub
```
✅ Result:
Your main on GitHub now includes the laptop branch changes.

## 4. Desktop — pull merged main back down
Once you're back on your desktop, sync up:
```bash
git checkout main
git pull origin main
```
✅ Now your desktop’s main matches GitHub’s main (including all laptop edits).

## Optional clean-up
If your <branch-name> branch was just a temporary working branch:
```bash
git branch -d <branch-name>         # delete locally
git push origin --delete <branch-name>   # delete remote branch
```

You can recreate it any time with:
```bash
git checkout -b <branch-name> main
```

## Quick Reference Table


| Task                            | Command                                      | Description                      |
| ------------------------------- | -------------------------------------------- | -------------------------------- |
| Fetch remote changes            | `git fetch origin`                           | Updates remote tracking branches |
| Sync local main                 | `git checkout main && git pull origin main`  | Ensures main matches GitHub      |
| Merge main into laptop branch   | `git checkout <branch-name> && git merge main` | Keeps laptop branch up to date   |
| Merge laptop edits back to main | `git checkout main && git merge <branch-name>` | Integrates laptop work           |
| Push updated main               | `git push origin main`                       | Uploads latest main to GitHub    |
| Pull updated main on desktop    | `git pull origin main`                       | Updates desktop copy             |
