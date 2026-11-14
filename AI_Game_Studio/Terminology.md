# Terminology

创建时间: 2026年11月8日 22:34

# AI Game Studio 术语与缩写词典

**文件名称：** Terminology.md

**工作室名称：** AI Game Studio

**当前版本：** 1.0

**文件性质：** 工作室公共术语规范

**适用范围：** 所有 Agent、所有项目、所有 Markdown 文件

**维护角色：** 总控 Agent、游戏策划 Agent、主程 Agent

---

## 1. 文件目的

本文件用于统一 AI Game Studio 内部使用的专业术语、英文缩写、任务编号、开发阶段名称和文件命名方式。

由于不同 AI 模型和 Agent 可能具有不同的表达习惯，经常会在 Markdown 文档中使用大量英文缩写和专业术语。

如果没有统一标准，容易出现以下问题：

1. 同一个概念被不同 Agent 使用不同名称表达。
2. 同一个缩写在不同文档中具有不同含义。
3. Agent 自行创造缩写，导致其他 Agent 无法理解。
4. 用户无法准确理解开发文档中的专业术语。
5. 更换 Agent 或 AI 平台后，出现术语理解偏差。

因此，本文件是整个 AI Game Studio 的统一术语来源。

所有 Agent 在编写、阅读、修改和交接 Markdown 文件时，都必须遵守本文件。

---

## 2. 基本使用原则

### 2.1 统一术语

所有 Agent 必须优先使用本文件已经收录的术语。

如果一个概念已经有正式名称，不得随意创造另一个名称替代。

### 2.2 首次出现时解释

在 Markdown 文档中首次使用一个英文缩写时，应采用以下格式：

**Milestone（里程碑，简称 M）**

或者：

**Stage（阶段，简称 S）**

如果某个缩写在当前文档中反复出现，首次解释后可以使用缩写。

### 2.3 优先使用中文

文档应优先使用清晰、准确的中文。

只有在以下情况下，才建议使用英文术语：

- 英文术语是行业通用名称。
- 英文缩写可以显著简化表达。
- 某个技术名称在 UE5 或编程领域有明确的英文标准。
- 项目文件、类名、函数名等必须遵循代码命名规范。

即使使用英文术语，也应保证用户能够理解。

### 2.4 不得滥用缩写

不得为了让文档看起来专业而大量创造缩写。

如果一个术语没有必要缩写，就直接使用中文或完整英文名称。

### 2.5 自创术语管理

当总控 Agent、游戏策划 Agent 或主程 Agent 发现现有词典没有合适的术语时，可以创建新术语。

但必须遵守以下流程：

1. 检查词典中是否已经存在相同或相近术语。
2. 确认确实需要一个新术语。
3. 为新术语编写中文名称、英文名称和缩写。
4. 写明准确含义、适用范围和使用示例。
5. 更新本文件。
6. 检查是否与现有术语产生冲突。
7. 在更新完成后，才能将其作为正式术语在其他文档中使用。

模块开发 Agent 如果需要自创术语，应先向主程 Agent 提交术语建议，由主程或总控负责更新词典。

### 2.6 术语修改与废弃

已经正式收录的术语不能随意更改含义。

如果需要修改已有术语：

1. 说明修改原因。
2. 说明可能影响的现有文档。
3. 由总控 Agent 审核。
4. 如果涉及核心概念或全工作室统一标准，必须取得人类用户确认。
5. 修改词典并记录变更。

废弃的术语不得直接删除，应标记为已废弃，并说明替代术语。

---

## 3. 项目阶段与任务层级术语

本章节定义整个工作室统一使用的项目进度层级。

### 3.1 Milestone（里程碑，简称 M）

Milestone 是项目开发过程中的一个较大的阶段性目标。

一个完整游戏项目可以按照开发进度划分为多个里程碑。

统一编号：

- M1
- M2
- M3
- M4
- M5
- M6
- M7
- M8
- M9

其中：

- M 代表 Milestone（里程碑）。
- 后面的数字代表里程碑编号。
- M1 代表第一个里程碑。
- M2 代表第二个里程碑。
- 以此类推。

每个里程碑都应具有明确的目标、交付成果和验收标准。

注意：M1 至 M9 是工作室采用的默认编号体系，并不意味着每个游戏必须具有九个里程碑。具体数量应根据项目规模确定。

### 3.2 Stage（阶段，简称 S）

Stage 是一个里程碑内部更细分的工作阶段。

一个 Milestone 可以包含多个 Stage。

例如：

- M1-S1：第一个里程碑的第一个阶段。
- M1-S2：第一个里程碑的第二个阶段。
- M1-S3：第一个里程碑的第三个阶段。
- M2-S1：第二个里程碑的第一个阶段。

Stage 用于进一步细分里程碑的具体工作内容。

每个 Stage 都应有明确的工作目标和完成条件。

### 3.3 统一层级关系

工作室默认采用以下结构：

```
游戏项目
│
├── M1（里程碑 1）
│   ├── S1（阶段 1）
│   ├── S2（阶段 2）
│   └── S3（阶段 3）
│
├── M2（里程碑 2）
│   ├── S1（阶段 1）
│   └── S2（阶段 2）
│
└── M3（里程碑 3）
    ├── S1（阶段 1）
    └── S2（阶段 2）
```

### 3.4 Task（任务）

Task 是可以被分配给某个 Agent 或开发线程执行的具体工作单元。

例如：

- M1-S1-T001：完成角色基础移动。
- M1-S1-T002：完成角色跳跃功能。
- M1-S2-T001：完成角色动画状态切换。

其中：

- T 代表 Task（任务）。
- 后面的数字代表任务编号。

任务必须有独立的任务单，具体格式遵循工作室任务模板。

### 3.5 Subtask（子任务）

Subtask 是某个 Task 内部进一步拆分的工作内容。

只有当一个任务过于复杂，需要进一步拆分时才使用。

例如：

- T001-ST01：创建移动输入。
- T001-ST02：实现移动逻辑。
- T001-ST03：完成移动测试。

并非所有任务都需要拆分成子任务。

---

## 4. 工作室核心角色术语

- **Agent**（AI Agent）：智能体，承担特定工作的 AI 角色
- **Control Agent**（Control Agent）：总控 Agent，负责项目管理
- **Game Designer**（Game Designer Agent）：游戏策划 Agent
- **Lead Programmer**（Lead Programmer Agent）：主程 Agent，负责技术规划和开发调度
- **Module Developer**（Module Developer Agent）：模块开发 Agent
- **Code Reviewer**（Code Reviewer Agent）：代码审核 Agent，独立审核模式
- **Human Manager**（Human Manager）：人类管理者，工作室最高决策者

---

## 5. 项目管理术语

- **GDD**（Game Design Document）：游戏设计文档
- **TDD**（Technical Design Document）：技术设计文档
- **PRD**（Product Requirements Document）：产品需求文档
- **Backlog**（Task Backlog）：待处理任务清单
- **Milestone**（Milestone）：里程碑
- **Stage**（Stage）：阶段
- **Task**（Task）：任务
- **Subtask**（Subtask）：子任务
- **Workflow**（Workflow）：工作流程
- **Handoff**（Handoff）：工作交接
- **Review**（Review）：审核
- **Code Review**（Code Review）：代码审核，独立代码质量检查
- **Review Conclusion**（Review Conclusion）：审核结论（Approved / Approved with Warnings / Changes Requested / Rejected）
- **Issue Severity**（Issue Severity）：问题严重程度（Critical / High / Medium / Low / Info）
- **Independent Review Mode**（Independent Review Mode）：独立审核模式，代码审核 Agent 的工作模式
- **Final Technical Acceptance**（Final Technical Acceptance）：最终技术验收，主程 Agent 执行
- **Rework**（Rework）：返工，审核不通过后的修改
- **Re-review**（Re-review）：重新审核，返工完成后的再次审核
- **Acceptance Criteria**（Acceptance Criteria）：验收标准
- **Deliverable**（Deliverable）：交付成果
- **Dependency**（Dependency）：依赖关系
- **Status**（Status）：当前状态

---

## 6. 开发与技术术语

- **UE5**（Unreal Engine 5）：虚幻引擎 5
- **C++**（C++）：编程语言
- **Blueprint**（Blueprint）：UE 蓝图系统
- **API**（Application Programming Interface）：应用程序编程接口
- **SDK**（Software Development Kit）：软件开发工具包
- **IDE**（Integrated Development Environment）：集成开发环境
- **Debug**（Debugging）：调试，排查程序问题
- **Compile**（Compilation）：编译
- **Build**（Build）：构建
- **Runtime**（Runtime）：运行时
- **Module**（Module）：模块
- **Interface**（Interface）：接口
- **Architecture**（Architecture）：架构
- **Refactor**（Refactoring）：重构，在不改变外部功能的前提下调整内部实现
- **Dependency**（Dependency）：依赖
- **Source Code**（Source Code）：源代码

---

## 7. 文件与版本管理术语

- **Markdown**（Markdown）：轻量级文本标记格式
- **MD**（Markdown Document）：Markdown 文档
- **Git**（Git）：版本控制系统
- **GitHub**（GitHub）：基于 Git 的代码托管平台
- **Commit**（Commit）：提交一次版本变更
- **Push**（Push）：将本地提交推送到远程仓库
- **Pull**（Pull）：从远程仓库获取并整合更新
- **Branch**（Branch）：分支
- **Merge**（Merge）：合并分支或代码变更
- **Diff**（Difference）：文件差异
- **Repository**（Repository）：仓库
- **Version**（Version）：版本
- **Revision**（Revision）：修订版本
- **File Lock**（File Lock）：文件锁定，限制其他任务同时修改文件

---

## 8. 任务状态术语

工作室任务应尽量使用统一状态名称。

- **Planned**（计划中）：已规划，但尚未开始
- **Ready**（待开始）：已满足开发前置条件，可以开始
- **In Progress**（进行中）：正在执行
- **Blocked**（受阻）：因依赖、权限或其他问题无法继续
- **Pending Review**（待审核）：开发已提交，等待审核
- **Changes Requested**（需要修改）：审核发现问题，需要返工
- **Completed**（已完成）：已通过规定的验收
- **Cancelled**（已取消）：任务不再执行

任务状态必须如实反映实际情况，不得将未经审核的任务标记为 Completed。

---

## 9. 文件命名与编号规范

### 9.1 里程碑与阶段

统一使用：

- M1、M2、M3……
- S1、S2、S3……

在完整项目上下文中，建议写为：

- M1-S1
- M1-S2
- M2-S1

### 9.2 任务编号

统一使用：

`M1-S1-T001`

### 9.3 交接报告编号

统一使用：

`HANDOFF_001`

### 9.4 审核报告编号

统一使用：

`REVIEW_001`

代码审核报告文件名建议使用任务编号：`{Task_001}_Code_Review.md`

如果是返工后重新审核：`{Task_001}_Code_Review_Retake_1.md`

### 9.5 文件命名原则

1. 文件名应当简洁、明确。
2. 优先使用有实际意义的英文名称或拼音无关的英文单词。
3. 不得随意使用未经定义的缩写。
4. 文件名应能反映内容，而不是只使用模糊编号。
5. 同一类型文件应采用统一命名方式。

---

## 10. 新术语登记模板

当 Agent 需要创建新术语时，必须按照以下格式登记：

### 术语名称

- **中文名称：**
- **英文全称：**
- **英文缩写：**
- **术语类别：**
- **准确含义：**
- **适用范围：**
- **使用示例：**
- **创建者：**
- **创建日期：**

### 使用要求

新术语必须能够准确表达一个明确概念。

如果现有中文词语已经足够清晰，则不应为了缩写而创造新词。

---

## 11. 术语更新记录

- **版本：** 1.0 — **修改日期：** 初始创建 — **修改者：** AI Game Studio — **修改内容：** 建立初始术语规范
- **版本：** 1.1 — **修改日期：** 2026-11-09 — **修改者：** AI Game Studio — **修改内容：** 新增 Code Reviewer、Code Review、Review Conclusion、Issue Severity、Independent Review Mode、Final Technical Acceptance、Rework、Re-review 等术语；补充审核报告命名建议

---

## 12. 强制执行要求

所有 Agent 必须遵守以下要求：

1. 在开始工作前，阅读本文件。
2. 编写任何 Markdown 文档时，优先使用本文件中的正式术语。
3. 英文缩写首次出现时必须附带中文解释。
4. 不得随意创造与现有术语重复或冲突的缩写。
5. 允许总控 Agent、游戏策划 Agent 和主程 Agent 根据实际工作需要新增术语。
6. 新术语必须及时登记到本文件。
7. 修改已有术语定义时，必须经过规定的审核和授权。
8. 如果发现不同 Agent 对同一术语存在不同理解，应暂停相关工作并统一定义。
9. 无法确定某个术语含义时，应使用中文描述，不得自行猜测。
10. 所有正式 Markdown 文件都必须遵循本词典的术语和缩写规范。

---

**文件结束**

**AI Game Studio 2.0 — Terminology**