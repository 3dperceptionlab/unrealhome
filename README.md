<div id="top"></div>

<!-- PROJECT SHIELDS -->
<!--
*** I'm using markdown "reference style" links for readability.
*** Reference links are enclosed in brackets [ ] instead of parentheses ( ).
*** See the bottom of this document for the declaration of the reference variables
*** for contributors-url, forks-url, etc. This is an optional, concise syntax you may use.
*** https://www.markdownguide.org/basic-syntax/#reference-style-links
-->
<div align="center">

[![Issues][issues-shield]][issues-url]
[![MIT License][license-shield]][license-url]
[![LinkedIn][linkedin-shield]][linkedin-url]

</div>


<!-- PROJECT LOGO -->
<div align="center">
  <!-- <a href="https://github.com/3dperceptionlab/unrealhome">
    <img src="images/logo.png" alt="Logo" width="80" height="80">
  </a> -->

  <h1 align="center">Unreal Home</h1>

  <p align="center">
    Playback of human daily basis interactions in virtual environments for generation of synthetic datasets
    <br />
    <a href="https://github.com/3dperceptionlab/unrealhome/issues">Report Bug</a>
    ·
    <a href="https://github.com/3dperceptionlab/unrealhome/issues">Request Feature</a>
  </p>
</div>


<!-- TABLE OF CONTENTS -->
<details>
  <summary>Table of Contents</summary>
  <ol>
    <li><a href="#about-the-project">About The Project</a></li>
    <li><a href="#made-with">Made With</a></li>
    <li><a href="#usage">Usage</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#acknowledgments">Acknowledgments</a></li>
  </ol>
</details>


<!-- ABOUT THE PROJECT -->
## About The Project

[![Product Name Screen Shot][product-cover]](https://cesarmolto.github.io/unreal-home.html)

Unreal Home is a simulation platform designed to carry out the generation 
of photorealistic synthetic datasets of human daily basis interactions 
in virtual environments.

It was developed in collaboration with the 3D Perception Lab (3DPL) 
group from the Department of Information Technology and Computing (DTIC) 
of the University of Alicante.

This software is composed of two types of actors (Avatars and Objects), which 
are directly involved in the execution of the simulations, and a total of three 
components or subsystems responsible for carrying out all the necessary threads 
that ensure the correct behavior of UnrealHome’s internal logic.

These threads include the playback and interpolation of animations managed by the 
animation subsystem, the movement of the avatars through the scene carried out by 
the navigation and pathfinding subsystem, and the grabs of objects made by the avatars 
which are managed by the grip subsystem.

Finally, this project has also sought to ensure that the generation of visual synthetic 
datasets becomes more interactive and intuitive. Therefore, UnrealHome makes it possible 
to use Point and Click mechanics in real time during the simulations with the aim of sending 
instructions to the avatars of the scene so that they carry out new interactions defined by 
said instructions.

<p align="right">(<a href="#top">back to top</a>)</p>

<!-- MADE WITH -->
## Made With

List of major tools used in the development of this project:

* [Unreal Engine 4](https://www.unrealengine.com)
* [Axis Neuron](https://neuronmocap.com)
* [C++](https://www.cplusplus.com)

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- USAGE -->
## Usage

1. Download the Unreal Engine 4.24 repository as a ZIP file from [https://github.com/EpicGames/UnrealEngine/tree/4.24](https://github.com/EpicGames/UnrealEngine/tree/4.24)

2. Extend Unreal Engine 4.24 source code as per [Documentation](/"Documentation (Spanish Only)") anexus (Page 61 to 64) and recompile

3. Run extended Unreal Engine 4.24 source code

4. Clone Unreal Home repository
   ```sh
   git clone https://github.com/3dperceptionlab/unrealhome
   ```
5. Open Unreal Home project from the extended Unreal Engine 4.24 editor window

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- LICENSE -->
## License

Distributed under the MIT License. See `LICENSE.txt` for more information.

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- CONTACT -->
## Contact

César Moltó Morilla - [https://cesarmolto.github.io](https://cesarmolto.github.io) - [@CeMolto](https://twitter.com/CeMolto) - cmoltomorilla@gmail.com

Project Link: [https://github.com/3dperceptionlab/unrealhome](https://github.com/3dperceptionlab/unrealhome)

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- ACKNOWLEDGMENTS -->
## Acknowledgments

<!-- Use this space to list resources you find helpful and would like to give credit to. I've included a few of my favorites to kick things off!

* [Choose an Open Source License](https://choosealicense.com)
* [GitHub Emoji Cheat Sheet](https://www.webpagefx.com/tools/emoji-cheat-sheet)
* [Malven's Flexbox Cheatsheet](https://flexbox.malven.co/)
* [Malven's Grid Cheatsheet](https://grid.malven.co/)
* [Img Shields](https://shields.io)
* [GitHub Pages](https://pages.github.com)
* [Font Awesome](https://fontawesome.com)
* [React Icons](https://react-icons.github.io/react-icons/search) -->

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[issues-shield]: https://img.shields.io/github/issues/othneildrew/Best-README-Template.svg?style=for-the-badge
[issues-url]: https://github.com/3dperceptionlab/unrealhome/issues
[license-shield]: https://img.shields.io/github/license/othneildrew/Best-README-Template.svg?style=for-the-badge
[license-url]: https://github.com/3dperceptionlab/unrealhome/blob/main/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/cesar-molto-morilla
[product-cover]: images/cover.png
