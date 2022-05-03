<div id="top"></div>

<!-- PROJECT SHIELDS -->



<!-- PROJECT LOGO -->
<br />
<div align="center">
  <a href="https://github.com/saba8814/SweBosShell/">
    <img src="https://www.guninetwork.org/files/logo_22.png" alt="Logo" width="240" height="80">
  </a>

  <h3 align="center">SweBosShell</h3>
  <p align="center">
    Project in CEN232 Operating Systems @ International Burch University.
    <br />
    <a href="https://github.com/saba8814/SweBosShell"><strong>Explore the docs »</strong></a>
    <br />
    <br />
  </p>
</div>



<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li>
      <a href="#about-the-project">About The Project</a>
      <ul>
        <li><a href="#built-with">Built With</a></li>
      </ul>
    </li>
    <li>
      <a href="#getting-started">Getting Started</a>
      <ul>
        <li><a href="#
          isites">Prerequisites</a></li>
        <li><a href="#installation">Installation</a></li>
      </ul>
    </li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#contact">Contact</a></li>
  </ol>
</details>



<!-- ABOUT THE PROJECT -->
## About The Project

SweBosShell is a project submission in course CEN232 Operating Systems at International Burch University. SweBosShell is a project done by Ejub Šabić(currently living in Sweden) & Saliha Mustafić(currently living in Bosnia & Herzegovina), thus the name Swe(den)Bos(nia)Shell. Project is consisted out of three parts: shell.c is a solution to 1.1, 1.2. and 1.4 tasks, task3.c is a solution to task 1.3 and also imploments 1.4, while answers.pdf has answers to questions given in 1.5.

shell.c has implementations for the following commands:
* uptime
* mkdir
* help
* sl
* ls

task3.c has implementations for the following system calls:
* fork()
* vfork()
* exec()
* execl()
* forkbomb - crashing PC using fork()

answers.pdf has answers for the following questions:
*The following actions, do they require the OS to use kernel mode or user mode is sufficient? Explain. Starting a new process. Multiplying two floating numbers stored in an application’s memory.Writing the results of the multiplication to a temporary log file on disk.
*Explain the purpose of a system call. Describe how control passes to the kernel when executing a system call.

 
<p align="right">(<a href="#top">back to top</a>)</p>



### Built With

Project was made using C programming language in Linux Operating System that runs VS code.

* [Linux](https://www.linux.org/)
* [C](https://www.cprogramming.com/)
* [VSCode](https://code.visualstudio.com/)


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- GETTING STARTED -->
## Getting Started

This is an example of how you may give instructions on setting up your project locally.
To get a local copy up and running follow these simple example steps.

### Prerequisites

Prerequisite to run this projects is to be running Linux Operating System as it follows and uses UNIX sys calls, but running on other UNIX based OS' might have some errors.


### Installation

1. Clone the repo
   ```sh
   git clone https://github.com/saba8814/SweBosShell.git
   ```
2. Compile shell.c using gcc compiler
   ```
   gcc shell.c -o shell
   ```
3. Compile task3.c using gcc compiler
   ```
   gcc task3.c -o task3
   ```
4. Run using ./shell for shell or ./task3 for task3


<p align="right">(<a href="#top">back to top</a>)</p>



<!-- USAGE EXAMPLES -->
## Usage

Use this space to show useful examples of how a project can be used. Additional screenshots, code examples and demos work well in this space. You may also link to more resources.

_For more examples, please refer to the [Documentation](https://example.com)_

<p align="right">(<a href="#top">back to top</a>)</p>



<!-- CONTACT -->
## Contact

Ejub Šabić - [@ejub.sabic](https://instagram.com/ejub.sabic) - ejub.sabic@stu.ibu.edu.ba
Saliha Mustafić - [@iamsaliha](https://instagram.com/iamsaliha) - saliha.mustafic@stu.ibu.edu.ba


<p align="right">(<a href="#top">back to top</a>)</p>




<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/othneildrew/Best-README-Template.svg?style=for-the-badge
[contributors-url]: https://github.com/othneildrew/Best-README-Template/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/othneildrew/Best-README-Template.svg?style=for-the-badge
[forks-url]: https://github.com/othneildrew/Best-README-Template/network/members
[stars-shield]: https://img.shields.io/github/stars/othneildrew/Best-README-Template.svg?style=for-the-badge
[stars-url]: https://github.com/othneildrew/Best-README-Template/stargazers
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/othneildrew/Best-README-Template/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/othneildrew/Best-README-Template/blob/master/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://linkedin.com/in/othneildrew
[product-screenshot]: images/screenshot.png
