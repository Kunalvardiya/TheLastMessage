# THE LAST MESSAGE — Development Progress Checkpoint

Checkpoint date: 2026-11-14 (supersedes the 2026-11-13 version)

Legend: ✅ completed / confirmed · 📝 planned / not started · 💡 recommended, not yet confirmed · ❓ undecided or not yet defined

The full creative and narrative design lives in **`GAME_DESIGN_DOCUMENT.md`**. This file tracks project status only.

---

## 1. Game concept (summary; details in the GDD)

| Item | Detail |
|---|---|
| Title | THE LAST MESSAGE |
| Genre | Psychological thriller, mystery, crime investigation |
| Perspective | First-person |
| Platform | PC / Steam, single-player |
| Target playtime | 4–6 hours |
| Chapters / Endings / Major decisions | 7 / 5 / 15–20 |
| Graphics | Realistic / photorealistic |
| Engine | Unreal Engine 5.8.4 |
| Initial development target | 20–30 minute vertical slice (✅ target; ❓ which part of the story it covers) |

Pillars (✅): investigation-driven, cinematic, atmospheric and grounded; no generic horror; no unnecessary combat; supernatural-looking events must have rational explanations.

## 2. Main characters (✅ established; see GDD Section 3)

| Character | Role |
|---|---|
| Alex Morgan, 27 | Freelance digital archivist. Protagonist controlled by the player. His restoration of an important audio recording is central to the mystery. |
| Ethan Cole, 28 | Investigative journalist. Missing for eleven days when the game begins. Partly orchestrated his own disappearance, but something went wrong. |
| Daniel Reeves, 29 | Legal consultant, formerly close to Alex and Ethan. Knows more than he admits. Must never appear an obvious villain. |

No other characters are established.

## 3. Story, chapters and endings (✅ established; see GDD Sections 4 to 6)

**Opening (✅):** at 2:17 AM Alex receives two messages from Ethan, missing for eleven days: "You weren't supposed to find out." then "Whatever Daniel tells you, don't believe him."

**Chapters (✅):** 1 The Message · 2 Missing Days · 3 Contradictions · 4 The Contact · 5 Buried Truth · 6 No Turning Back · 7 The Last Message.

**Endings (✅):** 1 The Truth · 2 The Cover-Up · 3 The Wrong Conclusion · 4 The Unanswered · 5 The Last Conversation.

**Ending 1 vs Ending 5 (✅ confirmed direction, recorded 2026-11-14):**
- **Ending 1 — The Truth:** the strongest and most complete resolution of the central investigation. Reconstructs events, reveals Ethan's location and identifies who falsified the records. It does **not** need to reveal the wider hidden universe. Its conditions are particularly difficult.
- **Ending 5 — The Last Conversation:** Alex finds and confronts Ethan, resolving the personal mystery of his disappearance. The original wording "the full truth emerges" means the **personal truth surrounding Ethan's disappearance**, not necessarily the complete resolution of the central investigation or the wider hidden network. Its defining feature is that confrontation plus **evidence of a much larger, older hidden network or history**, creating possibilities for future games in the same universe. The wider mystery is left **intentionally unresolved**. It **may** reveal who falsified the records (**undecided**; "may" is not "must"), but must **not** automatically provide every detail of the wider conspiracy or network.
- Ending 5 must **not** be presented as the best ending or as a replacement for Ending 1. The first game remains a complete standalone experience, and the wider universe rewards curiosity rather than making the main story feel incomplete.
- **Ending 1 and Ending 5 are mutually exclusive final outcomes (✅, 2026-11-14).** One playthrough must not combine both ending sequences. Shared discoveries or evidence may exist, but the final outcome must be distinct.
- **True ending (❓):** no ending is designated the true ending, and none is labelled as such to the player. This stays undecided until all five endings and their conditions are fully designed.
- The hidden universe is **intentionally undefined**: no name, origins, members, motives, history or structure have been decided.

**Still undecided (❓):** the conditions for every ending (including Ending 1's and Ending 5's), the true ending (see above), whether and in which routes Ending 5 actually reveals who falsified the records, which discoveries Endings 1 and 5 share, whether Endings 2, 3 and 4 are also mutually exclusive with them, who falsified the records, the identity of the "original documents" contact, whether the pre- and post-disappearance archive intruders are the same person, setting, and chapter-level beats.

**Narrative variables (✅ as design, not implemented):** Daniel Trust, Ethan Trust, Suspicion, Evidence Score, Integrity. Ranges, thresholds and visibility are ❓.

## 4. Tool versions

| Tool | Version |
|---|---|
| Unreal Engine | 5.8.4 (`EngineAssociation` is `5.8` in `TheLastMessage.uproject`) |
| Visual Studio | ❓ Not confirmed. The `.vs/v18` folder suggests the Visual Studio 2026 generation; verify in Visual Studio → Help → About |
| Rendering RHI | DirectX 12 (`DefaultEngine.ini`) |
| Git LFS | 3.7.1 |

## 5. Project location and Git

- Local: `E:\Unreal Projects\TheLastMessage 5.8`
- Project file: `TheLastMessage.uproject`
- GitHub: https://github.com/Kunalvardiya/TheLastMessage.git (branch `main`)
- Git identity (repo-local): `kunalvardiya` / `kunalvardiya@gmail.com`. Claude is not listed as a co-author on any commit.

**Commit history on `origin/main` (✅ pushed):**

| Commit | Message |
|---|---|
| `a013174` | Initial commit: project setup, content folder structure, test level and material |
| `b42a203` | Preserve Unreal Content folder structure (`PROJECT_PROGRESS.md` + 46 `.gitkeep` files) |
| `86423c9` | Configure Git LFS for Unreal binary assets (`.gitattributes`) — **latest confirmed commit** |

**Git LFS (✅ completed and pushed):**
- `git lfs install --local` run for this repo (hooks: pre-push, post-checkout, post-commit, post-merge).
- `.gitattributes` tracks: `*.uasset`, `*.umap`, `*.wav`, `*.mp3`, `*.ogg`, `*.flac`, `*.fbx`, `*.abc`, `*.png`, `*.tga`, `*.exr`, `*.psd`, `*.mp4`, `*.mov`.
- Source code, headers, config and Markdown stay in normal Git.
- History was not migrated or rewritten. The two existing assets (`L_Prototype.umap`, `M_TestCube.uasset`) remain ordinary blobs in history; they will be stored through LFS the next time they are saved and committed. No files are tracked by LFS yet.
- Free GitHub LFS quota (about 1 GB storage / 1 GB bandwidth per month) will likely be exceeded as real assets arrive.

**`.gitignore`:** `Binaries/`, `Intermediate/`, `Saved/`, `DerivedDataCache/`, `Backup/`, `.vs/`, `*.sln`/`*.slnx`, `.claude/`, `Content/Developers/`, `Content/Collections/`, plus VS temp files.

**Uncommitted at this checkpoint (📝 awaiting review and approval):**
- `GAME_DESIGN_DOCUMENT.md` (new, untracked)
- `PROJECT_PROGRESS.md` (modified, this file)

## 6. Claude Code and Unreal MCP setup

✅ Working and verified (re-verified after an MCP restart on 2026-11-14).

- Plugins enabled in `TheLastMessage.uproject`: `ModelContextProtocol`, `AllToolsets` (plus `ModelingToolsEditorMode`, editor only).
- Claude Code connects through `.mcp.json` in the project root: server `unreal-mcp`, type `http`, URL `http://127.0.0.1:8000/mcp`.
- The Unreal Editor must be **open with the project loaded** for the MCP server to respond. If the connection is refused, restart the MCP server from the editor and reconnect.
- Tool usage pattern: `list_toolsets` → `describe_toolset` → `call_tool` with `toolset_name` and the **bare** `tool_name` (no toolset prefix).
- Toolsets used so far: `SceneTools`, `ActorTools`, `ObjectTools`, `AssetTools`, `MaterialTools`.
- Property names in `ObjectTools` are camelCase (e.g. `staticMesh`, `overrideMaterials`, `constant`, `r`).

## 7. Completed automation tests ✅

### Test 1 — 3D cube creation
- Spawned one `StaticMeshActor` in `/Game/Maps/L_Prototype`, labelled **SM_TestCube** (internal name `StaticMeshActor_0`).
- Mesh `/Engine/BasicShapes/Cube.Cube`; location (0, 0, 50), rotation (0, 0, 0), scale (1, 1, 1).
- Verified: actor exists, mesh assigned, transform correct, level saved.

### Test 2 — Material creation and assignment
- Created `/Game/Materials/M_TestCube` with constant nodes wired to the outputs: Base Color (0.08, 0.25, 0.55), Metallic 0.0, Roughness 0.35.
- Assigned to `SM_TestCube` through `StaticMeshComponent0.overrideMaterials`.
- Verified: material exists, values read back correctly, assignment confirmed, material and level saved.

## 8. Content architecture (✅ approved and created)

Type-based top-level folders; chapter-specific folders are added only when each chapter enters development.

```
/Game
├── Core/            Input/
├── Characters/      Player/  Ethan/  Daniel/  Shared/
├── Environments/    Shared/
├── Gameplay/        Inventory/  Investigation/  Flow/  AI/
├── Interactions/
├── Materials/       Master/  Instances/  Functions/   (M_TestCube stays at this level)
├── Meshes/          Props/  Architecture/  Characters/
├── Textures/        Surfaces/  Decals/  UI/
├── Audio/           Music/  SFX/  Ambience/  Voice/  Mix/
├── UI/              HUD/  Menus/  Inventory/  Fonts/  Styles/
├── Cinematics/      Shared/
├── Narrative/       Dialogue/  Documents/  Choices/  Localization/
├── Data/            Chapters/  Items/  Evidence/  Endings/  Tables/  Settings/
├── Maps/            Chapters/  MainMenu/              (L_Prototype stays at this level)
└── Dev/             Testing/  Maps/  Templates/
```

Left untouched: `/Game/Collections`, `/Game/Developers`.

**Naming conventions (✅):** `BP_` Blueprint · `SM_` Static Mesh · `M_` Material · `MI_` Material Instance · `T_` Texture · `WBP_` Widget Blueprint · `DA_` Data Asset · `L_` Level · `LS_` Level Sequence.

**Architecture principle (✅):**
- C++ owns the rules (chapter state, save/load, choice and flag tracking, ending resolution, interaction interface, inventory/evidence logic, base framework classes).
- Data Assets (`UPrimaryDataAsset` subclasses) own content: chapters, items, evidence, dialogue, endings.
- Blueprints subclass the C++ classes and own presentation and scene-specific glue.

## 9. Folder architecture status

✅ **Created, verified and committed.**
- 46 leaf folders (plus parents) exist in the editor and on disk, verified with `list_folders`.
- A `.gitkeep` file sits in each of the 46 empty leaf folders so git preserves them (commit `b42a203`, pushed).
- No `.gitkeep` in `Content/Collections` or `Content/Developers` (intentionally ignored).
- Chapter 1–7 folders are intentionally **not** created yet.

## 10. Existing assets

| Asset | Path | Notes |
|---|---|---|
| Level | `/Game/Maps/L_Prototype` | Active level. 7 default system actors plus `SM_TestCube` (8 actors). Saved. |
| Material | `/Game/Materials/M_TestCube` | Test material applied to `SM_TestCube`. |

C++ module (unchanged template): `Source/TheLastMessage/` with `TheLastMessage.Build.cs`, `TheLastMessage.cpp`, `TheLastMessage.h`, plus `TheLastMessage.Target.cs` and `TheLastMessageEditor.Target.cs` in `Source/`. No game classes exist yet. Dependencies: `Core`, `CoreUObject`, `Engine`, `InputCore`, `EnhancedInput`.

`Config/DefaultEngine.ini` still has `GameDefaultMap=/Engine/Maps/Templates/OpenWorld` (not yet pointed at a project map).

## 11. Documentation

| File | Purpose | Status |
|---|---|---|
| `PROJECT_PROGRESS.md` | Project and engineering status | ✅ updated, ⏳ uncommitted |
| `GAME_DESIGN_DOCUMENT.md` | Creative and narrative design (v0.3) | ✅ created, ⏳ uncommitted |

**`GAME_DESIGN_DOCUMENT.md` structure:** tag legend (✅ confirmed, 💡 recommended, ❓ undecided, ⚙️ technical fact) · 1 Identity and vision · 2 Platform and scope · 3 Characters · 4 Story (opening hook, timeline, central revelation, central question, undefined elements) · 5 Chapter structure · 6 Endings (with 6.1 Ending 1 vs Ending 5) · 7 Hidden universe direction · 8 Gameplay · 9 Narrative variables and branching · 10 Visual and audio direction · 11 Technical state and architecture goals · 12 Development progress · 13 Open questions.

**Sections updated in v0.2:** header status; Section 1 (standalone pillar); Section 4.5 (hidden world listed as intentionally undefined); Section 6 (rules and new 6.1); new Section 7; former Sections 7 to 12 renumbered to 8 to 13; Sections 12 and 13 (progress and open questions).

**Sections updated in v0.3 (2026-11-14):** header status; Section 6 rules (true ending undecided, Ending 1 / Ending 5 mutually exclusive); Section 6.1 (Ending 5 resolves Ethan's disappearance and may reveal the falsifier; defining-feature row; mutual-exclusivity block; rewritten open points); Section 7.1 (clarifications); Section 7.2 (purpose bullets reworded around standalone completeness and rewarding curiosity); Sections 12 and 13.

## 12. Current development stage

**Stage: pre-production / foundation.**

- ✅ Project setup, MCP automation pipeline proven, Content folder structure created and committed, Git LFS configured and committed.
- ✅ Story foundation documented in the GDD, including the Ending 1 / Ending 5 distinction and the hidden-universe direction.
- 💡 Technical recommendations awaiting confirmation: Alex throughout all seven chapters; separate maps for major chapters with shared systems; automatic checkpoints plus manual saves; no conventional combat; persistent choices and evidence flags; no multiplayer.
- 📝 Not started: C++ architecture, gameplay systems, characters, environments, narrative content, UI, audio, the vertical slice.

## 13. Next steps when development resumes

1. **Review and approve** `GAME_DESIGN_DOCUMENT.md` (v0.3) and this file, then commit and push them (not done yet).
2. **Start the Unreal Editor** with `TheLastMessage.uproject` open so the MCP server (`http://127.0.0.1:8000/mcp`) is reachable; verify with a read-only call.
3. **Confirm the 💡 recommendations** in GDD Section 8.2.
4. **Decide the vertical-slice scope** (which part of the story the 20–30 minute slice covers).
5. **Decide ending conditions and variable design** (GDD Sections 6 and 9), including what qualifies a player for Ending 5 and Ending 1, which discoveries they share, and whether Endings 2, 3 and 4 are also mutually exclusive with them. Decide the "true ending" only after all five endings and their conditions are designed.
6. **Plan the C++ architecture** as its own step (planned, not started). Proposed layout under `Source/TheLastMessage/`: Core, Gameplay, Interaction, Narrative, Data. It needs steps 3 to 5 first, because the flag, choice and ending systems depend on them.
7. **Confirm the exact Visual Studio version** and update section 4.
8. **Later, not now:** point `GameDefaultMap` at a project map, move `M_TestCube` / `SM_TestCube` into `Dev/Testing` if desired, create `Ch01_...` folders when Chapter 1 begins, and define the hidden-universe material only when the project owner decides to.

---

*Status snapshot. Keep sections 5 (Git), 9 (folder status), 11 (documentation) and 13 (next steps) current at each checkpoint, and keep in sync with `GAME_DESIGN_DOCUMENT.md`.*
