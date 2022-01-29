<div id="top"></div>

<!-- PROJECT SHIELDS -->
<div align="center">

[![Contributors][contributors-shield]][contributors-url]
[![Forks][forks-shield]][forks-url]
[![Stargazers][stars-shield]][stars-url]
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
    <li><a href="#contributing">Contributing</a></li>
    <li><a href="#license">License</a></li>
    <li><a href="#contact">Contact</a></li>
    <li><a href="#resources-and-references">Resources And References</a></li>
  </ol>
</details>


<!-- ABOUT THE PROJECT -->
## About The Project

[![Product Name Screen Shot][product-cover]](https://github.com/3dperceptionlab/unrealhome)

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

List of major tools and technologies used in the development of this project.

* [Unreal Engine 4](https://www.unrealengine.com)
* [Axis Neuron](https://neuronmocap.com)
* [C++](https://www.cplusplus.com)

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- USAGE -->
## Usage

1. Download the [Unreal Engine 4.24 branch repository](https://github.com/EpicGames/UnrealEngine/tree/4.24) as a ZIP file

2. Extend Unreal Engine 4.24 source code as per [Documentation Appendix 1](https://github.com/3dperceptionlab/unrealhome/blob/main/Documentation%20(Spanish%20Only).pdf) (Page 61 to 64) and recompile

3. Run extended Unreal Engine 4.24 source code

4. Clone Unreal Home repository
   ```sh
   git clone https://github.com/3dperceptionlab/unrealhome
   ```
5. Open Unreal Home project from the extended Unreal Engine 4.24 editor window

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- CONTRIBUTING -->
## Contributing

If you have a suggestion that would make Unreal Home better, please fork the repo and create a pull request. You can also simply open an issue with the tag "enhancement". Don't forget to give the project a star! Thanks again!

1. Fork the Project
2. Create your Feature Branch (`git checkout -b feature/AmazingFeature`)
3. Commit your Changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the Branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- LICENSE -->
## License

Distributed under the MIT License. See [LICENSE](https://github.com/3dperceptionlab/unrealhome/blob/main/LICENSE.txt) for more information.

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- CONTACT -->
## Contact

César Moltó Morilla - [https://cesarmolto.github.io](https://cesarmolto.github.io) - [@CeMolto](https://twitter.com/CeMolto) - cmoltomorilla@gmail.com

Project Link: [https://github.com/3dperceptionlab/unrealhome](https://github.com/3dperceptionlab/unrealhome)

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- RESOURCES AND REFERENCES -->
## Resources And References

Please refer to the [Documentation Bibliography](https://github.com/3dperceptionlab/unrealhome/blob/main/Documentation%20(Spanish%20Only).pdf) (Pages 59 and 60).

<p align="right">(<a href="#top">back to top</a>)</p>


<!-- MARKDOWN LINKS & IMAGES -->
<!-- https://www.markdownguide.org/basic-syntax/#reference-style-links -->
[contributors-shield]: https://img.shields.io/github/contributors/3dperceptionlab/unrealhome.svg?style=for-the-badge
[contributors-url]: https://github.com/3dperceptionlab/unrealhome/graphs/contributors
[forks-shield]: https://img.shields.io/github/forks/3dperceptionlab/unrealhome.svg?style=for-the-badge
[forks-url]: https://github.com/3dperceptionlab/unrealhome/network/members
[stars-shield]: https://img.shields.io/github/stars/3dperceptionlab/unrealhome.svg?style=for-the-badge
[stars-url]: https://github.com/3dperceptionlab/unrealhome/stargazers
[issues-shield]: https://img.shields.io/github/issues/3dperceptionlab/unrealhome.svg?style=for-the-badge
[issues-url]: https://github.com/3dperceptionlab/unrealhome/issues
[license-shield]: https://img.shields.io/github/license/3dperceptionlab/unrealhome.svg?style=for-the-badge
[license-url]: https://github.com/3dperceptionlab/unrealhome/blob/main/LICENSE.txt
[linkedin-shield]: https://img.shields.io/badge/-LinkedIn-black.svg?style=for-the-badge&logo=linkedin&colorB=555
[linkedin-url]: https://www.linkedin.com/in/cesar-molto-morilla
[product-cover]: images/cover.png
