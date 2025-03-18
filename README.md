# Byte_Enable-Memory
# PROJ3999: Major Project

## Title
**Byte-Enable Memory Implementation on FPGA with Verilog and SystemVerilog-Driven Testbenches**

### Project Supervisor
**Dr. ArunKumar Manoharan**

### Cluster Name
**VLSI**

### Project Coordinator
**Dr. Pankaj Kandhway**

---

## Mini Project (PROJ2999) Outcome
### Summary (in 3-6 bullet points):

1. **Objective Fulfillment**: Byte-Enable memory RAM was successfully designed and implemented using Verilog, enabling simultaneous read/write operations and independent port access for enhanced performance.
2. **Hardware Simulation and Testing**: Simulation results verified the functionality of RAM, 4X4 RAM, SRAM, DRAM, and Single-Port RAM with output waveforms and schematic diagrams.
3. **Performance Optimization**: Single-Port RAM's ability to support parallelism improved data throughput, addressing high-performance requirements in FPGA/ASIC designs.
4. **Future Work Identified**: Plans include optimizing clock speeds, scaling memory size, and enhancing power efficiency and verification methodologies.

---

## Extended Project Abstract (up to 300 words)

This project focuses on the design and implementation of Byte-Enable Memory on FPGA to address the increasing need for efficient and flexible memory architectures in modern digital systems. Byte-Enable Memory allows for selective read/write operations at the byte level, enabling fine-grained data manipulation in applications like image processing and machine learning. This granularity enhances memory utilization by reducing write overhead and enabling precise control over data access. Verilog is used for architectural modelling, while SystemVerilog facilitates the development of advanced test benches for comprehensive validation. Xilinx Vivado is employed for synthesis, simulation, and real-time testing, with a strong emphasis on optimizing resource utilization, maximizing performance, and minimizing power consumption.

The design incorporates byte-enable signals for each memory location, enabling precise control over which bytes are accessed during read and write operations. The project aims to deliver a high-performance and flexible Byte-Enable Memory solution tailored for demanding applications that require precise control over data manipulation at the byte level.

---

## Extended Project Objectives (2-4 Bullet Points)

1. **Optimize Resource Utilization**: Efficiently utilize FPGA hardware resources during the design and implementation process, ensuring minimal resource usage without compromising performance.
2. **Facilitate Comprehensive Verification**: Use SystemVerilog-driven test benches to validate the design under various operational conditions, ensuring robustness and functionality in real-world applications.

---

## Gantt Chart for Extended Project (PROJ3999)
# *Project Timeline*

| *Task*                 | *Start Date* | *End Date* | *Duration* |
|--------------------------|----------------|--------------|--------------|
| Consent Form Submission  | 13 Aug         | 21 Aug       | 7 Days       |
| Project Selection        | 2 Aug          | 13 Aug       | 8 Days       |
| Batch Preparation        | 31 Jul         | 2 Aug        | 3 Days       |
| Literature Survey        | 29 Aug         | 29 Aug       | 1 Day        |
| Abstract                 | 21 Aug         | 29 Aug       | 7 Days       |
| Code Development         | 6 Sep          | 25 Sep       | 14 Days      |
| Prepared PPT             | 25 Sep         | 27 Sep       | 2 Days       |
| Prepared Poster          | 27 Sep         | 2 Oct        | 4 Days       |
| Extended Consent Form    | 2 Oct          | 10 Oct       | 7 Days       |
| Continuation of analyzing the problem statement     | 28 Nov         | 4 Dec        | 7 Days       |
| Working on the application of the project.| 7 Dec          | 31 Dec       | 24 Days       |
| Review-1 | 8 Jan 2025      | 10 Jan 2025     | 2 Days       |
| Implementation in the FPGA kit.| 15 Jan          | 30 Jan       | 15 Days       |
| Review  | 5 Feb        | 7 Feb       | 2 Days       |
| Writing of the conference paper| 10  Feb          | 28 Feb       | 18 Days       |
| Review-3 | 15 Mar         | 20 Mar       | 5 Days       |
## Gantt Chart for Extended Project (PROJ3999)

| **Week** | **Phase**                     | **Activities**                                             |
|----------|--------------------------------|-----------------------------------------------------------|
| Week 1   | **Design and Architecture**   | Initial system design and architecture definition          |
| Week 2   | **Design and Architecture**   | Refinement of design specifications                        |
| Week 3   | **Design and Architecture**   | Finalize architecture and prepare for implementation       |
| Week 4   | **Verification and Test**     | Develop SystemVerilog test benches                        |
| Week 5   | **Verification and Test**     | Test edge cases and debug initial issues                  |
| Week 6   | **Verification and Test**     | Validate preliminary results and refine test cases        |
| Week 7   | **Toolchain Utilization**     | Set up Xilinx Vivado for synthesis and simulation          |
| Week 8   | **Toolchain Utilization**     | Perform FPGA testing and resolve toolchain issues         |
| Week 9   | **Toolchain Utilization**     | Verify integration with hardware                          |
| Week 10  | **Optimization and Resources**| Begin resource optimization                                |
| Week 11  | **Optimization and Resources**| Address scalability and ensure low-power design           |
| Week 12  | **Optimization and Resources**| Test and validate optimized design                        |
| Week 13  | **Validation and Refinement** | Transition design to SystemVerilog                        |
| Week 14  | **Validation and Refinement** | Begin UVM-based validation                                |
| Week 15  | **Validation and Refinement** | Finalize validation and prepare results


---

## Suggested IEEE Conference Targets

1. **IEEE CONECCT 2025**
2. **IEEE INDICON 2025**

---

## Group Details

| Reg No.         | Name          |
|------------------|---------------|
| BU21EECE0100164 | Tammali Karthik |
| BU21EECE0100309 | Maria Punya    |


