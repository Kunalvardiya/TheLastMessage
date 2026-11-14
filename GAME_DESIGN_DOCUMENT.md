# THE LAST MESSAGE — Game Design Document

Document status: v0.3, updated 2026-11-14. Created from design decisions recovered by the project owner from earlier planning conversations. v0.2 added the confirmed direction for Ending 5 and the hidden-universe direction (Sections 6.1 and 7). v0.3 clarifies four points: Ending 5 and the falsified records, the true ending (undecided), Ending 1 and Ending 5 being mutually exclusive, and the purpose wording in Section 7.2.

## How to read this document

Every item is tagged so that established design is never confused with suggestions or open questions.

| Tag | Meaning |
|---|---|
| ✅ **CONFIRMED** | Established design decision. Treat as a requirement. |
| 💡 **RECOMMENDED** | A proposal made by the project owner or the assistant, **not yet confirmed**. |
| ❓ **UNDECIDED** | Not yet decided or not yet written. Do not assume an answer. |
| ⚙️ **TECHNICAL FACT** | Observed in the current project files. |

Rule for contributors and tools: **do not invent** characters, crimes, plot twists, ending conditions or numeric values. Anything tagged ❓ must be decided by the project owner first.

---

## 1. Game identity and vision

| Item | Decision | Status |
|---|---|---|
| Title | THE LAST MESSAGE | ✅ |
| Genre | Psychological thriller, mystery, crime investigation | ✅ |
| Tone | Cinematic, atmospheric, grounded | ✅ |
| Graphics | Realistic / photorealistic | ✅ |

**Design pillars (✅ confirmed):**
- The experience is **investigation-driven**, not action-driven.
- It is deliberately **not generic horror**.
- There is **no unnecessary combat**.
- **Supernatural-looking events may occur, but each must have a rational explanation.**
- **The first game is a complete, satisfying standalone story.** It may also hint at a larger shared universe through Ending 5 (see Section 7), without becoming incomplete.

❓ Not yet written: a one-line pitch, themes statement, reference works, and the visual and audio style guides.

## 2. Platform and scope

| Item | Decision | Status |
|---|---|---|
| Perspective | First-person | ✅ |
| Platform | PC / Steam | ✅ |
| Players | Single-player | ✅ |
| Target playtime | 4–6 hours | ✅ |
| Chapters | 7 | ✅ |
| Major decisions | 15–20 over the whole game | ✅ |
| Endings | 5 | ✅ |
| Engine | Unreal Engine 5.8.4 | ✅ |
| Initial development target | **Vertical slice of 20–30 minutes** | ✅ |
| Multiplayer | Not required | 💡 |
| Minimum PC specification, target framerate, controller support | — | ❓ |
| Which part of the story the vertical slice covers | — | ❓ |
| Steam features (achievements, cloud saves, etc.) | — | ❓ |

## 3. Characters

### 3.1 Alex Morgan, age 27 (player character)
✅ CONFIRMED
- Freelance **digital archivist**.
- Main protagonist, **controlled by the player**.
- Intelligent, observant and reserved.
- His involvement in **restoring an important audio recording** is central to the mystery.
- **Player decisions influence his relationships and how his personality is expressed.**

Player character across all chapters: Alex throughout all seven chapters — 💡 RECOMMENDED (not yet confirmed).

### 3.2 Ethan Cole, age 28
✅ CONFIRMED
- **Investigative journalist.**
- **Missing for eleven days** when the game begins.
- Investigated **falsified records connected to a suspicious property fire**.
- Secretive, intelligent and sometimes manipulative.
- **Partly orchestrated his own disappearance, but something went wrong.**

### 3.3 Daniel Reeves, age 29
✅ CONFIRMED
- **Legal consultant.**
- Previously close to both Alex and Ethan.
- Calm, persuasive and knowledgeable.
- **Knows more than he admits.**
- **Must never appear to be an obviously evil villain.**

### 3.4 Relationships
- ✅ Alex, Ethan and Daniel were previously close.
- ✅ Alex restored audio for Ethan (see timeline).
- ✅ Daniel warned Ethan about publishing the investigation (see timeline).
- ❓ The full emotional history between the three, and any other characters, are not yet defined.

> No other characters have been established. The "someone claiming to possess original documents" (Section 4) and "someone else" who accessed Ethan's archive (Section 4) are **unnamed and undefined**. Do not assign them identities.

## 4. Story

### 4.1 Opening hook (✅ CONFIRMED)
At **2:17 AM**, Alex receives a message from Ethan, who has been missing for eleven days.

> **"You weren't supposed to find out."**

Then another message arrives:

> **"Whatever Daniel tells you, don't believe him."**

Ethan's phone was **reportedly destroyed** on the night he disappeared. This is where the investigation begins.

### 4.2 Preliminary timeline (✅ CONFIRMED, described as "preliminary")

| When | Event |
|---|---|
| Six months earlier | Ethan investigates a suspicious death connected to a property development company. |
| Three months earlier | Ethan asks Alex to recover audio from a damaged storage device. |
| Three months earlier | Alex inadvertently removes a crucial background conversation from the restored version. |
| One month earlier | Daniel warns Ethan that publishing the investigation could expose people and cause another tragedy. |
| Eleven days earlier | Ethan meets someone claiming to possess original documents. The meeting goes wrong. |
| Present | Alex receives Ethan's mysterious message. |

### 4.3 Central revelation (✅ CONFIRMED)
- Ethan **partly orchestrated his disappearance** after discovering that **someone had accessed his private archive**.
- He wanted to **identify who was monitoring him**.
- He **arranged a meeting with Daniel**. A **confrontation occurred, but Daniel did not kill him.**
- **Someone else accessed Ethan's archive after his disappearance.**
- **The person responsible for falsifying the records remains part of the larger mystery.**

### 4.4 Central question (✅ CONFIRMED)
The central question is **not simply where Ethan went, but who manipulated the investigation.**

### 4.5 Story elements still undefined (❓)
Do not fill these in without the project owner:
- Who falsified the records, and how this person is revealed.
- Who "someone claiming to possess original documents" is.
- Who accessed Ethan's archive, both before and after his disappearance.
- What happened to Ethan after the confrontation, and where he is.
- The specific suspicious death and fire, and the property development company's details.
- What exactly is on the damaged storage device and in the removed background conversation.
- Setting: city, era, location of Ethan's apartment and other places.
- What the "rational explanations" for the supernatural-looking events actually are.
- Everything about the wider hidden world introduced by Ending 5. This is **intentionally undefined** (see Section 7.4).

> **Clarification needed (❓):** the central revelation mentions someone accessing Ethan's archive **before** his disappearance (the trigger for his plan) and **someone else** accessing it **after** (Chapter 6). It is not stated whether these are the same person. This document does not assume an answer.

## 5. Chapter structure (✅ CONFIRMED titles and focus)

| # | Title | Main focus |
|---|---|---|
| 1 | The Message | Alex receives Ethan's message and begins investigating. |
| 2 | Missing Days | Explore Ethan's apartment and discover evidence. |
| 3 | Contradictions | Investigate recordings, edited messages and unreliable memories. |
| 4 | The Contact | Meet Daniel and decide whether to trust him. |
| 5 | Buried Truth | Discover Alex's involvement in the recovered audio. |
| 6 | No Turning Back | Discover that someone accessed Ethan's archive after his disappearance. |
| 7 | The Last Message | Find Ethan's final location and reconstruct events. |

❓ Not yet defined for any chapter: locations/maps, detailed beats, the specific decisions, the individual clues, per-chapter playtime, and how the 15–20 major decisions are distributed.

## 6. Endings

There are **5 endings** (✅ CONFIRMED).

| # | Ending | Description (✅ CONFIRMED) |
|---|---|---|
| 1 | The Truth | Complete reconstruction of events, Ethan's location and the culprit behind the falsified records. |
| 2 | The Cover-Up | The truth is discovered, but Daniel is protected and evidence disappears. |
| 3 | The Wrong Conclusion | Daniel is wrongly accused because the player has incomplete evidence. |
| 4 | The Unanswered | The player understands parts of the mystery, but Ethan's fate remains unresolved. |
| 5 | The Last Conversation | The player finds Ethan and confronts him. The full **personal** truth surrounding Ethan's disappearance emerges, but the moral conflict remains unresolved. (See the clarification below.) |

**Confirmed rules:**
- Ending 1 (The Truth) requires **particularly difficult conditions**.
- **No ending is explicitly labelled the "true ending" to the player.**
- **No ending is designated the "true ending" internally either (❓ UNDECIDED).** Earlier project notes mentioned "5, including one true ending", but the project owner has decided that this is **not to be designated yet**. It stays undecided until all five endings and their conditions have been fully designed. Do not treat any ending, including Ending 1, as the true ending.
- **Clarification of "the full truth emerges" in Ending 5 (✅ CONFIRMED):** this refers to the **personal truth surrounding Ethan's disappearance**. It does **not** necessarily mean the complete resolution of the central investigation, nor the wider hidden network. Complete resolution of the central investigation is the defining feature of **Ending 1**.
- **Ending 5 (The Last Conversation) introduces a hidden universe** beyond the events of this game. It must **not** be presented as the best ending or as a replacement for Ending 1. See Sections 6.1 and 7.
- **Ending 1 and Ending 5 are mutually exclusive final outcomes.** A single playthrough must not combine both ending sequences (see Section 6.1).

**❓ Unresolved:** the exact **conditions** that lead to each of the five endings, including the specific requirements for Ending 1 and for Ending 5. No thresholds, required clues or required decisions have been defined. Do not invent them.

### 6.1 Ending 1 versus Ending 5 (✅ CONFIRMED direction)

Both endings resolve major parts of the story, but they serve different purposes and neither replaces the other.

| | **Ending 1 — The Truth** | **Ending 5 — The Last Conversation** |
|---|---|---|
| Purpose | The strongest and most complete **resolution of the central investigation**. | Addresses the **personal mystery surrounding Ethan** and **opens a door** to a larger world. |
| What it resolves | Reconstructs what happened, reveals Ethan's location, and identifies the person responsible for falsifying the records, as established in the story. | Resolves the **personal mystery surrounding Ethan's disappearance**. The player finds Ethan and confronts him. The full **personal** truth surrounding Ethan's disappearance emerges, but the moral conflict remains unresolved. This is **not necessarily** the complete resolution of the central investigation or of the wider hidden network. |
| Falsified records | Identifies the person responsible. | **May** reveal who was responsible for falsifying the records, but does **not** automatically provide every detail of the wider conspiracy or network. |
| Defining feature | Completeness of the investigation. | Alex **finding and confronting Ethan**, and discovering **evidence of a much larger hidden world**. |
| Hidden universe | **Does not need** to reveal the wider hidden universe. | **Introduces evidence** of a much larger, older network or history. |
| Wider mystery | Not required to touch it. | **Intentionally left unresolved.** |
| Future stories | Not its purpose. | Creates possibilities for future stories in the same universe. |
| Standing among endings | The most complete resolution of the investigation. Its conditions are particularly difficult. | **Must not automatically be presented as the best ending** or as a replacement for Ending 1. |

Consistency rules for this document and for all later content:
- Ending 1 is defined by **completeness of the central investigation**, not by the hidden universe.
- Ending 5 is defined by **Ethan's confrontation plus the opening to a larger world**, not by being a "better" or "final" ending.
- The standalone story must remain **complete and satisfying** whichever ending the player reaches.
- Resolving the central investigation and introducing the wider universe are **distinct things**. Ending 5 may do the first (for Ethan's disappearance, and possibly the falsified records) while only **opening** the second.

**Ending 1 and Ending 5 are mutually exclusive (✅ CONFIRMED):**
- They are distinct final outcomes. A single playthrough must **not** combine both ending sequences.
- **Shared discoveries or evidence may exist** between the two routes, but the final narrative outcome must be distinct.

❓ **Open points** (not decided, do not assume):
- **"May" is not "must":** whether Ending 5 identifies the person responsible for falsifying the records at all is **undecided**, as is how much of that it shows. "May reveal" must not be read as "must reveal". It must never automatically give every detail of the wider conspiracy or network.
- Which discoveries or evidence are shared between the Ending 1 and Ending 5 routes, and where the routes diverge, is not decided. How the two endings relate in the branching graph, and the conditions for each, are not decided.
- The relationship of Ending 5 to Endings 2, 3 and 4 (for example, mutual exclusivity with them) has not been stated.

## 7. Hidden universe direction (Ending 5)

### 7.1 Confirmed direction (✅ CONFIRMED)
**Ending 5 — The Last Conversation** introduces a **hidden universe / larger connected world** beyond the events of this first game. The ending must:
- Address the personal mystery surrounding Ethan's disappearance.
- Introduce **evidence suggesting that the events investigated in this game are connected to a much larger, older network or history**.
- Establish **possibilities for future games** within the same universe.
- **Keep the larger mystery unresolved, intentionally.**
- **Preserve the first game as a complete, satisfying standalone story.**
- **Reward curious players** without making the main story feel incomplete.

Clarifications (✅ CONFIRMED):
- Ending 5 **may** reveal who was responsible for falsifying the records, but it must **not automatically provide every detail of the wider conspiracy or network**.
- Its defining feature remains Alex **finding and confronting Ethan** and **discovering evidence of a much larger hidden world**.
- Resolving the central investigation and introducing the wider universe stay **distinct**.
- Ending 1 and Ending 5 are mutually exclusive final outcomes (Section 6.1).

### 7.2 Narrative purpose (✅ CONFIRMED)
- **The first game remains a complete standalone experience.** A player who never sees the hidden-universe material must not feel the game is unfinished.
- **The wider universe rewards curiosity** rather than making the main story feel incomplete. It is an addition for players who look further, not a missing piece.
- Give players who reach Ending 5 a sense that the story reaches further than one case.
- Seed possibilities for future stories in the same universe without obligating the first game to answer them.
- Maintain the **grounded psychological thriller tone** established for the game (Section 1).

### 7.3 Design restrictions (✅ CONFIRMED)
- Do **not** name or define the organisation or network.
- Do **not** invent its origins, members, motives, history or structure.
- Do **not** introduce new characters, crimes, twists or ending conditions on the strength of this direction.
- Do **not** change the established characters, the seven chapter titles, the timeline, the opening messages, the narrative variables or the central crime investigation.
- Ending 1 does not need to reveal the hidden universe.

### 7.4 Intentionally undefined (❓)
The following are deliberately left open. They must be decided by the project owner before any content is written, and must not be invented:
- The name, nature, structure and scope of the larger network or history.
- Its origins, members, motives and timeline.
- What form the "evidence" takes in Ending 5, and where in the game it is found.
- How the hidden-universe material connects to the falsified records, the property development company, or the people already established.
- Whether, how, or how much earlier chapters foreshadow it.
- How a player qualifies for Ending 5 (the conditions for all endings remain undecided, see Section 6).
- Whether and how future games are planned. The ending only needs to make such stories **possible**.

## 8. Gameplay

### 8.1 Direction (✅ CONFIRMED)
Investigation-driven. The player should be able to:
- Explore environments and discover clues.
- Examine documents, photographs and recordings.
- Recover information from damaged digital devices.
- Investigate locations connected to Ethan.
- Interact with phones, computers and other objects.
- Make meaningful dialogue and investigation decisions.
- Experience **consequences that carry across chapters**.

### 8.2 Technical gameplay decisions

| Question | Recommendation | Status |
|---|---|---|
| Player character | Alex throughout all seven chapters | 💡 |
| Chapter structure | Separate maps for major chapters, with shared systems | 💡 |
| Saving | Automatic checkpoints plus manual saves | 💡 |
| Combat | No conventional combat | 💡 (consistent with the confirmed "no unnecessary combat" pillar) |
| Core gameplay | Exploration, investigation, interaction and dialogue | 💡 (consistent with the confirmed investigation-driven direction) |
| Narrative architecture | Persistent choices and evidence flags | 💡 |
| Multiplayer | Not required | 💡 |

### 8.3 Mechanics still undefined (❓)
- How "recovering information from damaged digital devices" actually plays (the interaction model, minigame or not).
- How audio recordings are examined and presented (Alex is an audio archivist).
- Whether there is an inventory, a clue board or a notes/journal system.
- Movement abilities, health or fail states (none are assumed).
- Whether puzzles exist, and what kinds.
- How the 2:17 AM messages and phone interactions are presented in the UI.

## 9. Narrative variables and branching

### 9.1 Tracked variables (✅ CONFIRMED as design, not yet implemented)

| Variable | Purpose |
|---|---|
| Daniel Trust | Tracks the player's relationship with Daniel. |
| Ethan Trust | Tracks the player's relationship with Ethan through discoveries. |
| Suspicion | Tracks suspicion surrounding people and events. |
| Evidence Score | Measures the strength of collected evidence. |
| Integrity | Tracks the player's investigative honesty and decisions. |

These are **narrative design, not implemented systems**. No code, assets or data for them exist yet.

### 9.2 Branching principles (✅ CONFIRMED)
- 15–20 major decisions across the game.
- Decisions have **consequences that carry across chapters**.
- Decisions influence **Alex's relationships and how his personality is expressed**.
- Evidence completeness affects outcomes (see Ending 3, "incomplete evidence").

### 9.3 Branching details still undefined (❓)
- Numeric ranges, starting values, increments and thresholds for all five variables.
- Whether **Suspicion** is one value or tracked per person/event.
- Whether the variables are visible to the player or hidden.
- Which decisions modify which variables, and by how much.
- The persistent boolean "evidence flags" (list of clues) and which flags the endings read.
- Whether decisions can be revisited or replayed, and whether chapters can be replayed.
- How Alex's "personality expression" changes dialogue, tone or options.

## 10. Visual and audio direction

- ✅ Realistic / photorealistic graphics.
- ✅ Cinematic, atmospheric, grounded mood.
- ✅ Avoid generic horror tropes.
- ❓ Everything else: lighting and colour style, camera behaviour and cutscene style, music and sound direction, voice acting, subtitles, and supported languages.

## 11. Technical state and architecture goals

### 11.1 Current state (⚙️ TECHNICAL FACT)
- Unreal Engine 5.8.4, one C++ module `TheLastMessage` (template files plus the M1 framework classes `ATLMGameMode`, `ATLMPlayerController`, `ATLMPlayerCharacter` under `Source/TheLastMessage/Core/`, and one automation test under `Tests/`). Dependencies: `Core`, `CoreUObject`, `Engine`, `InputCore`, `EnhancedInput`.
- M1 first-person framework and walk/look movement prototype is complete and manually tested (see `PROJECT_PROGRESS.md` Section 14). Movement abilities beyond walking (sprint, crouch, jump) and gamepad support remain ❓ undecided.
- Plugins enabled: `ModelContextProtocol`, `AllToolsets`, `ModelingToolsEditorMode` (editor only).
- Content assets: `/Game/Maps/L_Prototype` (contains test actor `SM_TestCube`) and `/Game/Materials/M_TestCube`.
- The approved Content folder structure exists (46 leaf folders), preserved in Git with `.gitkeep` files.
- Git repository on GitHub with Git LFS configured for binary assets.
- `GameDefaultMap` still points at an engine template map.

### 11.2 Approved architecture principle (✅ CONFIRMED)
- **C++** owns the rules (chapter state, save/load, choice and flag tracking, ending resolution, interaction interface, evidence logic, base framework classes).
- **Data Assets** own content (chapters, items, evidence, dialogue, endings).
- **Blueprints** subclass C++ classes and own presentation and scene-specific glue.
- Naming: `BP_`, `SM_`, `M_`, `MI_`, `T_`, `WBP_`, `DA_`, `L_`, `LS_`, `IA_` (Input Action), `IMC_` (Input Mapping Context). `IA_` and `IMC_` were added with the M1 approval.

### 11.3 C++ architecture
Not yet designed. It is planned as a separate step and depends on the decisions in Section 13.

## 12. Development progress

- ✅ Project setup, MCP automation (cube and material tests), Content folder architecture, Git and Git LFS.
- ✅ Story foundation recovered and documented in this file.
- ✅ Direction for Ending 5 and the hidden universe recorded (Sections 6.1 and 7). The hidden world itself is intentionally undefined.
- ✅ Ending 1 and Ending 5 confirmed as mutually exclusive final outcomes; Ending 5 may (not must) reveal who falsified the records.
- ❓ True ending intentionally left undesignated until all five endings and their conditions are designed.
- ✅ M1 (first-person framework and movement prototype) complete: game mode, player controller, first-person character, Enhanced Input walk and look, and the `L_Dev_Movement` test map.
- 📝 Not started: narrative state, save/load, interaction, investigation, chapters, dialogue, endings, UI, characters, environments, narrative content, audio.
- 📝 Vertical slice (20–30 minutes) is the initial target but has not been scoped.

## 13. Open questions for the project owner

Priority order for unblocking C++ architecture design:

1. **Confirm the recommendations** in Section 8.2 (Alex throughout, separate maps per major chapter, auto-checkpoints plus manual saves, persistent choices and evidence flags).
2. **Vertical slice scope:** which chapter(s) or portion of the story does it cover?
3. **Ending conditions:** what determines each of the five endings, what are Ending 1's difficult conditions, and what qualifies a player for Ending 5?
   - The "true ending" is **not designated** and stays undecided until all five endings and their conditions are fully designed (Section 6).
   - Ending 5 **may** reveal who falsified the records. Decide whether, and in which routes it does (Section 6.1).
   - Ending 1 and Ending 5 are mutually exclusive. Decide which discoveries they share and whether Endings 2, 3 and 4 are also mutually exclusive with them.
4. **Variable design:** ranges, thresholds, visibility to the player, and whether Suspicion is per-person.
5. **Core mechanics:** how device recovery, audio examination and clue collection actually play.
6. **Archive access:** are the pre-disappearance and post-disappearance archive intruders the same person?
7. **Unnamed figures:** the original-documents contact and the person who falsified the records.
8. **Hidden universe:** when and how much of it to define, and how foreshadowing (if any) fits the chapters. It is intentionally undefined for now (Section 7.4).
9. **Audio/visual direction, voice acting, localization and minimum hardware.**

---

*Source of truth: all ✅ items come from the design decisions recovered by the project owner on 2026-11-14, plus the Ending 5 / hidden-universe direction confirmed by the project owner on the same date. Update this file whenever a ❓ or 💡 item is resolved, and keep `PROJECT_PROGRESS.md` in sync.*
