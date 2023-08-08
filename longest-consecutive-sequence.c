<!DOCTYPE html>
<!-- saved from url=(0071)https://leetcode.com/problems/longest-consecutive-sequence/submissions/ -->
<html lang="en" data-theme="dark" class="js-focus-visible dark" data-js-focus-visible="" style="color-scheme: dark;"><head><meta http-equiv="Content-Type" content="text/html; charset=UTF-8"><meta name="viewport" content="width=device-width"><title>LeetCode - The World's Leading Online Programming Learning Platform</title><meta name="twitter:card" content="summary_large_image"><meta name="twitter:site" content="@LeetCode"><meta property="og:image" content="https://leetcode.com/static/images/LeetCode_Sharing.png"><meta property="og:locale" content="en_US"><meta property="og:site_name" content="LeetCode"><meta name="description" content="Level up your coding skills and quickly land a job. This is the best place to expand your knowledge and get prepared for your next interview."><meta property="og:title" content="LeetCode - The World&#39;s Leading Online Programming Learning Platform"><meta property="og:description" content="Level up your coding skills and quickly land a job. This is the best place to expand your knowledge and get prepared for your next interview."><meta name="robots" content="noindex,follow"><meta name="next-head-count" content="12"><link rel="preload" href="./longest-consecutive-sequence_files/1eb8af20342378ad.css" as="style"><link rel="stylesheet" href="./longest-consecutive-sequence_files/1eb8af20342378ad.css" data-n-g=""><link rel="preload" href="https://leetcode.com/_next/static/css/252f0105d6c99cc5.css" as="style"><link rel="preload" href="https://leetcode.com/_next/static/css/cbb137c583621905.css" as="style"><noscript data-n-css=""></noscript><style data-n-href="/_next/static/css/252f0105d6c99cc5.css">@font-face{font-family:KaTeX_AMS;font-style:normal;font-weight:400;src:url(/_next/static/media/KaTeX_AMS-Regular.a79f1c31.woff2) format("woff2"),url(/_next/static/media/KaTeX_AMS-Regular.1608a09b.woff) format("woff"),url(/_next/static/media/KaTeX_AMS-Regular.4aafdb68.ttf) format("truetype")}@font-face{font-family:KaTeX_Caligraphic;font-style:normal;font-weight:700;src:url(/_next/static/media/KaTeX_Caligraphic-Bold.ec17d132.woff2) format("woff2"),url(/_next/static/media/KaTeX_Caligraphic-Bold.b6770918.woff) format("woff"),url(/_next/static/media/KaTeX_Caligraphic-Bold.cce5b8ec.ttf) format("truetype")}@font-face{font-family:KaTeX_Caligraphic;font-style:normal;font-weight:400;src:url(/_next/static/media/KaTeX_Caligraphic-Regular.55fac258.woff2) format("woff2"),url(/_next/static/media/KaTeX_Caligraphic-Regular.dad44a7f.woff) format("woff"),url(/_next/static/media/KaTeX_Caligraphic-Regular.07ef19e7.ttf) format("truetype")}@font-face{font-family:KaTeX_Fraktur;font-style:normal;font-weight:700;src:url(/_next/static/media/KaTeX_Fraktur-Bold.d42a5579.woff2) format("woff2"),url(/_next/static/media/KaTeX_Fraktur-Bold.9f256b85.woff) format("woff"),url(/_next/static/media/KaTeX_Fraktur-Bold.b18f59e1.ttf) format("truetype")}@font-face{font-family:KaTeX_Fraktur;font-style:normal;font-weight:400;src:url(/_next/static/media/KaTeX_Fraktur-Regular.d3c882a6.woff2) format("woff2"),url(/_next/static/media/KaTeX_Fraktur-Regular.7c187121.woff) format("woff"),url(/_next/static/media/KaTeX_Fraktur-Regular.ed38e79f.ttf) format("truetype")}@font-face{font-family:KaTeX_Main;font-style:normal;font-weight:700;src:url(/_next/static/media/KaTeX_Main-Bold.c3fb5ac2.woff2) format("woff2"),url(/_next/static/media/KaTeX_Main-Bold.d181c465.woff) format("woff"),url(/_next/static/media/KaTeX_Main-Bold.b74a1a8b.ttf) format("truetype")}@font-face{font-family:KaTeX_Main;font-style:italic;font-weight:700;src:url(/_next/static/media/KaTeX_Main-BoldItalic.6f2bb1df.woff2) format("woff2"),url(/_next/static/media/KaTeX_Main-BoldItalic.e3f82f9d.woff) format("woff"),url(/_next/static/media/KaTeX_Main-BoldItalic.70d8b0a5.ttf) format("truetype")}@font-face{font-family:KaTeX_Main;font-style:italic;font-weight:400;src:url(/_next/static/media/KaTeX_Main-Italic.8916142b.woff2) format("woff2"),url(/_next/static/media/KaTeX_Main-Italic.9024d815.woff) format("woff"),url(/_next/static/media/KaTeX_Main-Italic.47373d1e.ttf) format("truetype")}@font-face{font-family:KaTeX_Main;font-style:normal;font-weight:400;src:url(/_next/static/media/KaTeX_Main-Regular.0462f03b.woff2) format("woff2"),url(/_next/static/media/KaTeX_Main-Regular.7f51fe03.woff) format("woff"),url(/_next/static/media/KaTeX_Main-Regular.b7f8fe9b.ttf) format("truetype")}@font-face{font-family:KaTeX_Math;font-style:italic;font-weight:700;src:url(/_next/static/media/KaTeX_Math-BoldItalic.572d331f.woff2) format("woff2"),url(/_next/static/media/KaTeX_Math-BoldItalic.f1035d8d.woff) format("woff"),url(/_next/static/media/KaTeX_Math-BoldItalic.a879cf83.ttf) format("truetype")}@font-face{font-family:KaTeX_Math;font-style:italic;font-weight:400;src:url(/_next/static/media/KaTeX_Math-Italic.f28c23ac.woff2) format("woff2"),url(/_next/static/media/KaTeX_Math-Italic.5295ba48.woff) format("woff"),url(/_next/static/media/KaTeX_Math-Italic.939bc644.ttf) format("truetype")}@font-face{font-family:"KaTeX_SansSerif";font-style:normal;font-weight:700;src:url(/_next/static/media/KaTeX_SansSerif-Bold.8c5b5494.woff2) format("woff2"),url(/_next/static/media/KaTeX_SansSerif-Bold.bf59d231.woff) format("woff"),url(/_next/static/media/KaTeX_SansSerif-Bold.94e1e8dc.ttf) format("truetype")}@font-face{font-family:"KaTeX_SansSerif";font-style:italic;font-weight:400;src:url(/_next/static/media/KaTeX_SansSerif-Italic.3b1e59b3.woff2) format("woff2"),url(/_next/static/media/KaTeX_SansSerif-Italic.7c9bc82b.woff) format("woff"),url(/_next/static/media/KaTeX_SansSerif-Italic.b4c20c84.ttf) format("truetype")}@font-face{font-family:"KaTeX_SansSerif";font-style:normal;font-weight:400;src:url(/_next/static/media/KaTeX_SansSerif-Regular.ba21ed5f.woff2) format("woff2"),url(/_next/static/media/KaTeX_SansSerif-Regular.74048478.woff) format("woff"),url(/_next/static/media/KaTeX_SansSerif-Regular.d4d7ba48.ttf) format("truetype")}@font-face{font-family:KaTeX_Script;font-style:normal;font-weight:400;src:url(/_next/static/media/KaTeX_Script-Regular.03e9641d.woff2) format("woff2"),url(/_next/static/media/KaTeX_Script-Regular.07505710.woff) format("woff"),url(/_next/static/media/KaTeX_Script-Regular.fe9cbbe1.ttf) format("truetype")}@font-face{font-family:KaTeX_Size1;font-style:normal;font-weight:400;src:url(/_next/static/media/KaTeX_Size1-Regular.eae34984.woff2) format("woff2"),url(/_next/static/media/KaTeX_Size1-Regular.e1e279cb.woff) format("woff"),url(/_next/static/media/KaTeX_Size1-Regular.fabc004a.ttf) format("truetype")}@font-face{font-family:KaTeX_Size2;font-style:normal;font-weight:400;src:url(/_next/static/media/KaTeX_Size2-Regular.5916a24f.woff2) format("woff2"),url(/_next/static/media/KaTeX_Size2-Regular.57727022.woff) format("woff"),url(/_next/static/media/KaTeX_Size2-Regular.d6b476ec.ttf) format("truetype")}@font-face{font-family:KaTeX_Size3;font-style:normal;font-weight:400;src:url(/_next/static/media/KaTeX_Size3-Regular.b4230e7e.woff2) format("woff2"),url(/_next/static/media/KaTeX_Size3-Regular.9acaf01c.woff) format("woff"),url(/_next/static/media/KaTeX_Size3-Regular.a144ef58.ttf) format("truetype")}@font-face{font-family:KaTeX_Size4;font-style:normal;font-weight:400;src:url(/_next/static/media/KaTeX_Size4-Regular.10d95fd3.woff2) format("woff2"),url(/_next/static/media/KaTeX_Size4-Regular.7a996c9d.woff) format("woff"),url(/_next/static/media/KaTeX_Size4-Regular.fbccdabe.ttf) format("truetype")}@font-face{font-family:KaTeX_Typewriter;font-style:normal;font-weight:400;src:url(/_next/static/media/KaTeX_Typewriter-Regular.a8709e36.woff2) format("woff2"),url(/_next/static/media/KaTeX_Typewriter-Regular.6258592b.woff) format("woff"),url(/_next/static/media/KaTeX_Typewriter-Regular.d97aaf4a.ttf) format("truetype")}.katex{font:normal 1.21em KaTeX_Main,Times New Roman,serif;line-height:1.2;text-indent:0;text-rendering:auto}.katex *{-ms-high-contrast-adjust:none!important;border-color:currentColor}.katex .katex-version:after{content:"0.16.4"}.katex .katex-mathml{clip:rect(1px,1px,1px,1px);border:0;height:1px;overflow:hidden;padding:0;position:absolute;width:1px}.katex .katex-html>.newline{display:block}.katex .base{position:relative;white-space:nowrap;width:min-content}.katex .base,.katex .strut{display:inline-block}.katex .textbf{font-weight:700}.katex .textit{font-style:italic}.katex .textrm{font-family:KaTeX_Main}.katex .textsf{font-family:KaTeX_SansSerif}.katex .texttt{font-family:KaTeX_Typewriter}.katex .mathnormal{font-family:KaTeX_Math;font-style:italic}.katex .mathit{font-family:KaTeX_Main;font-style:italic}.katex .mathrm{font-style:normal}.katex .mathbf{font-family:KaTeX_Main;font-weight:700}.katex .boldsymbol{font-family:KaTeX_Math;font-style:italic;font-weight:700}.katex .amsrm,.katex .mathbb,.katex .textbb{font-family:KaTeX_AMS}.katex .mathcal{font-family:KaTeX_Caligraphic}.katex .mathfrak,.katex .textfrak{font-family:KaTeX_Fraktur}.katex .mathtt{font-family:KaTeX_Typewriter}.katex .mathscr,.katex .textscr{font-family:KaTeX_Script}.katex .mathsf,.katex .textsf{font-family:KaTeX_SansSerif}.katex .mathboldsf,.katex .textboldsf{font-family:KaTeX_SansSerif;font-weight:700}.katex .mathitsf,.katex .textitsf{font-family:KaTeX_SansSerif;font-style:italic}.katex .mainrm{font-family:KaTeX_Main;font-style:normal}.katex .vlist-t{border-collapse:collapse;display:inline-table;table-layout:fixed}.katex .vlist-r{display:table-row}.katex .vlist{display:table-cell;position:relative;vertical-align:bottom}.katex .vlist>span{display:block;height:0;position:relative}.katex .vlist>span>span{display:inline-block}.katex .vlist>span>.pstrut{overflow:hidden;width:0}.katex .vlist-t2{margin-right:-2px}.katex .vlist-s{display:table-cell;font-size:1px;min-width:2px;vertical-align:bottom;width:2px}.katex .vbox{align-items:baseline;display:inline-flex;flex-direction:column}.katex .hbox{width:100%}.katex .hbox,.katex .thinbox{display:inline-flex;flex-direction:row}.katex .thinbox{max-width:0;width:0}.katex .msupsub{text-align:left}.katex .mfrac>span>span{text-align:center}.katex .mfrac .frac-line{border-bottom-style:solid;display:inline-block;width:100%}.katex .hdashline,.katex .hline,.katex .mfrac .frac-line,.katex .overline .overline-line,.katex .rule,.katex .underline .underline-line{min-height:1px}.katex .mspace{display:inline-block}.katex .clap,.katex .llap,.katex .rlap{position:relative;width:0}.katex .clap>.inner,.katex .llap>.inner,.katex .rlap>.inner{position:absolute}.katex .clap>.fix,.katex .llap>.fix,.katex .rlap>.fix{display:inline-block}.katex .llap>.inner{right:0}.katex .clap>.inner,.katex .rlap>.inner{left:0}.katex .clap>.inner>span{margin-left:-50%;margin-right:50%}.katex .rule{border:0 solid;display:inline-block;position:relative}.katex .hline,.katex .overline .overline-line,.katex .underline .underline-line{border-bottom-style:solid;display:inline-block;width:100%}.katex .hdashline{border-bottom-style:dashed;display:inline-block;width:100%}.katex .sqrt>.root{margin-left:.27777778em;margin-right:-.55555556em}.katex .fontsize-ensurer.reset-size1.size1,.katex .sizing.reset-size1.size1{font-size:1em}.katex .fontsize-ensurer.reset-size1.size2,.katex .sizing.reset-size1.size2{font-size:1.2em}.katex .fontsize-ensurer.reset-size1.size3,.katex .sizing.reset-size1.size3{font-size:1.4em}.katex .fontsize-ensurer.reset-size1.size4,.katex .sizing.reset-size1.size4{font-size:1.6em}.katex .fontsize-ensurer.reset-size1.size5,.katex .sizing.reset-size1.size5{font-size:1.8em}.katex .fontsize-ensurer.reset-size1.size6,.katex .sizing.reset-size1.size6{font-size:2em}.katex .fontsize-ensurer.reset-size1.size7,.katex .sizing.reset-size1.size7{font-size:2.4em}.katex .fontsize-ensurer.reset-size1.size8,.katex .sizing.reset-size1.size8{font-size:2.88em}.katex .fontsize-ensurer.reset-size1.size9,.katex .sizing.reset-size1.size9{font-size:3.456em}.katex .fontsize-ensurer.reset-size1.size10,.katex .sizing.reset-size1.size10{font-size:4.148em}.katex .fontsize-ensurer.reset-size1.size11,.katex .sizing.reset-size1.size11{font-size:4.976em}.katex .fontsize-ensurer.reset-size2.size1,.katex .sizing.reset-size2.size1{font-size:.83333333em}.katex .fontsize-ensurer.reset-size2.size2,.katex .sizing.reset-size2.size2{font-size:1em}.katex .fontsize-ensurer.reset-size2.size3,.katex .sizing.reset-size2.size3{font-size:1.16666667em}.katex .fontsize-ensurer.reset-size2.size4,.katex .sizing.reset-size2.size4{font-size:1.33333333em}.katex .fontsize-ensurer.reset-size2.size5,.katex .sizing.reset-size2.size5{font-size:1.5em}.katex .fontsize-ensurer.reset-size2.size6,.katex .sizing.reset-size2.size6{font-size:1.66666667em}.katex .fontsize-ensurer.reset-size2.size7,.katex .sizing.reset-size2.size7{font-size:2em}.katex .fontsize-ensurer.reset-size2.size8,.katex .sizing.reset-size2.size8{font-size:2.4em}.katex .fontsize-ensurer.reset-size2.size9,.katex .sizing.reset-size2.size9{font-size:2.88em}.katex .fontsize-ensurer.reset-size2.size10,.katex .sizing.reset-size2.size10{font-size:3.45666667em}.katex .fontsize-ensurer.reset-size2.size11,.katex .sizing.reset-size2.size11{font-size:4.14666667em}.katex .fontsize-ensurer.reset-size3.size1,.katex .sizing.reset-size3.size1{font-size:.71428571em}.katex .fontsize-ensurer.reset-size3.size2,.katex .sizing.reset-size3.size2{font-size:.85714286em}.katex .fontsize-ensurer.reset-size3.size3,.katex .sizing.reset-size3.size3{font-size:1em}.katex .fontsize-ensurer.reset-size3.size4,.katex .sizing.reset-size3.size4{font-size:1.14285714em}.katex .fontsize-ensurer.reset-size3.size5,.katex .sizing.reset-size3.size5{font-size:1.28571429em}.katex .fontsize-ensurer.reset-size3.size6,.katex .sizing.reset-size3.size6{font-size:1.42857143em}.katex .fontsize-ensurer.reset-size3.size7,.katex .sizing.reset-size3.size7{font-size:1.71428571em}.katex .fontsize-ensurer.reset-size3.size8,.katex .sizing.reset-size3.size8{font-size:2.05714286em}.katex .fontsize-ensurer.reset-size3.size9,.katex .sizing.reset-size3.size9{font-size:2.46857143em}.katex .fontsize-ensurer.reset-size3.size10,.katex .sizing.reset-size3.size10{font-size:2.96285714em}.katex .fontsize-ensurer.reset-size3.size11,.katex .sizing.reset-size3.size11{font-size:3.55428571em}.katex .fontsize-ensurer.reset-size4.size1,.katex .sizing.reset-size4.size1{font-size:.625em}.katex .fontsize-ensurer.reset-size4.size2,.katex .sizing.reset-size4.size2{font-size:.75em}.katex .fontsize-ensurer.reset-size4.size3,.katex .sizing.reset-size4.size3{font-size:.875em}.katex .fontsize-ensurer.reset-size4.size4,.katex .sizing.reset-size4.size4{font-size:1em}.katex .fontsize-ensurer.reset-size4.size5,.katex .sizing.reset-size4.size5{font-size:1.125em}.katex .fontsize-ensurer.reset-size4.size6,.katex .sizing.reset-size4.size6{font-size:1.25em}.katex .fontsize-ensurer.reset-size4.size7,.katex .sizing.reset-size4.size7{font-size:1.5em}.katex .fontsize-ensurer.reset-size4.size8,.katex .sizing.reset-size4.size8{font-size:1.8em}.katex .fontsize-ensurer.reset-size4.size9,.katex .sizing.reset-size4.size9{font-size:2.16em}.katex .fontsize-ensurer.reset-size4.size10,.katex .sizing.reset-size4.size10{font-size:2.5925em}.katex .fontsize-ensurer.reset-size4.size11,.katex .sizing.reset-size4.size11{font-size:3.11em}.katex .fontsize-ensurer.reset-size5.size1,.katex .sizing.reset-size5.size1{font-size:.55555556em}.katex .fontsize-ensurer.reset-size5.size2,.katex .sizing.reset-size5.size2{font-size:.66666667em}.katex .fontsize-ensurer.reset-size5.size3,.katex .sizing.reset-size5.size3{font-size:.77777778em}.katex .fontsize-ensurer.reset-size5.size4,.katex .sizing.reset-size5.size4{font-size:.88888889em}.katex .fontsize-ensurer.reset-size5.size5,.katex .sizing.reset-size5.size5{font-size:1em}.katex .fontsize-ensurer.reset-size5.size6,.katex .sizing.reset-size5.size6{font-size:1.11111111em}.katex .fontsize-ensurer.reset-size5.size7,.katex .sizing.reset-size5.size7{font-size:1.33333333em}.katex .fontsize-ensurer.reset-size5.size8,.katex .sizing.reset-size5.size8{font-size:1.6em}.katex .fontsize-ensurer.reset-size5.size9,.katex .sizing.reset-size5.size9{font-size:1.92em}.katex .fontsize-ensurer.reset-size5.size10,.katex .sizing.reset-size5.size10{font-size:2.30444444em}.katex .fontsize-ensurer.reset-size5.size11,.katex .sizing.reset-size5.size11{font-size:2.76444444em}.katex .fontsize-ensurer.reset-size6.size1,.katex .sizing.reset-size6.size1{font-size:.5em}.katex .fontsize-ensurer.reset-size6.size2,.katex .sizing.reset-size6.size2{font-size:.6em}.katex .fontsize-ensurer.reset-size6.size3,.katex .sizing.reset-size6.size3{font-size:.7em}.katex .fontsize-ensurer.reset-size6.size4,.katex .sizing.reset-size6.size4{font-size:.8em}.katex .fontsize-ensurer.reset-size6.size5,.katex .sizing.reset-size6.size5{font-size:.9em}.katex .fontsize-ensurer.reset-size6.size6,.katex .sizing.reset-size6.size6{font-size:1em}.katex .fontsize-ensurer.reset-size6.size7,.katex .sizing.reset-size6.size7{font-size:1.2em}.katex .fontsize-ensurer.reset-size6.size8,.katex .sizing.reset-size6.size8{font-size:1.44em}.katex .fontsize-ensurer.reset-size6.size9,.katex .sizing.reset-size6.size9{font-size:1.728em}.katex .fontsize-ensurer.reset-size6.size10,.katex .sizing.reset-size6.size10{font-size:2.074em}.katex .fontsize-ensurer.reset-size6.size11,.katex .sizing.reset-size6.size11{font-size:2.488em}.katex .fontsize-ensurer.reset-size7.size1,.katex .sizing.reset-size7.size1{font-size:.41666667em}.katex .fontsize-ensurer.reset-size7.size2,.katex .sizing.reset-size7.size2{font-size:.5em}.katex .fontsize-ensurer.reset-size7.size3,.katex .sizing.reset-size7.size3{font-size:.58333333em}.katex .fontsize-ensurer.reset-size7.size4,.katex .sizing.reset-size7.size4{font-size:.66666667em}.katex .fontsize-ensurer.reset-size7.size5,.katex .sizing.reset-size7.size5{font-size:.75em}.katex .fontsize-ensurer.reset-size7.size6,.katex .sizing.reset-size7.size6{font-size:.83333333em}.katex .fontsize-ensurer.reset-size7.size7,.katex .sizing.reset-size7.size7{font-size:1em}.katex .fontsize-ensurer.reset-size7.size8,.katex .sizing.reset-size7.size8{font-size:1.2em}.katex .fontsize-ensurer.reset-size7.size9,.katex .sizing.reset-size7.size9{font-size:1.44em}.katex .fontsize-ensurer.reset-size7.size10,.katex .sizing.reset-size7.size10{font-size:1.72833333em}.katex .fontsize-ensurer.reset-size7.size11,.katex .sizing.reset-size7.size11{font-size:2.07333333em}.katex .fontsize-ensurer.reset-size8.size1,.katex .sizing.reset-size8.size1{font-size:.34722222em}.katex .fontsize-ensurer.reset-size8.size2,.katex .sizing.reset-size8.size2{font-size:.41666667em}.katex .fontsize-ensurer.reset-size8.size3,.katex .sizing.reset-size8.size3{font-size:.48611111em}.katex .fontsize-ensurer.reset-size8.size4,.katex .sizing.reset-size8.size4{font-size:.55555556em}.katex .fontsize-ensurer.reset-size8.size5,.katex .sizing.reset-size8.size5{font-size:.625em}.katex .fontsize-ensurer.reset-size8.size6,.katex .sizing.reset-size8.size6{font-size:.69444444em}.katex .fontsize-ensurer.reset-size8.size7,.katex .sizing.reset-size8.size7{font-size:.83333333em}.katex .fontsize-ensurer.reset-size8.size8,.katex .sizing.reset-size8.size8{font-size:1em}.katex .fontsize-ensurer.reset-size8.size9,.katex .sizing.reset-size8.size9{font-size:1.2em}.katex .fontsize-ensurer.reset-size8.size10,.katex .sizing.reset-size8.size10{font-size:1.44027778em}.katex .fontsize-ensurer.reset-size8.size11,.katex .sizing.reset-size8.size11{font-size:1.72777778em}.katex .fontsize-ensurer.reset-size9.size1,.katex .sizing.reset-size9.size1{font-size:.28935185em}.katex .fontsize-ensurer.reset-size9.size2,.katex .sizing.reset-size9.size2{font-size:.34722222em}.katex .fontsize-ensurer.reset-size9.size3,.katex .sizing.reset-size9.size3{font-size:.40509259em}.katex .fontsize-ensurer.reset-size9.size4,.katex .sizing.reset-size9.size4{font-size:.46296296em}.katex .fontsize-ensurer.reset-size9.size5,.katex .sizing.reset-size9.size5{font-size:.52083333em}.katex .fontsize-ensurer.reset-size9.size6,.katex .sizing.reset-size9.size6{font-size:.5787037em}.katex .fontsize-ensurer.reset-size9.size7,.katex .sizing.reset-size9.size7{font-size:.69444444em}.katex .fontsize-ensurer.reset-size9.size8,.katex .sizing.reset-size9.size8{font-size:.83333333em}.katex .fontsize-ensurer.reset-size9.size9,.katex .sizing.reset-size9.size9{font-size:1em}.katex .fontsize-ensurer.reset-size9.size10,.katex .sizing.reset-size9.size10{font-size:1.20023148em}.katex .fontsize-ensurer.reset-size9.size11,.katex .sizing.reset-size9.size11{font-size:1.43981481em}.katex .fontsize-ensurer.reset-size10.size1,.katex .sizing.reset-size10.size1{font-size:.24108004em}.katex .fontsize-ensurer.reset-size10.size2,.katex .sizing.reset-size10.size2{font-size:.28929605em}.katex .fontsize-ensurer.reset-size10.size3,.katex .sizing.reset-size10.size3{font-size:.33751205em}.katex .fontsize-ensurer.reset-size10.size4,.katex .sizing.reset-size10.size4{font-size:.38572806em}.katex .fontsize-ensurer.reset-size10.size5,.katex .sizing.reset-size10.size5{font-size:.43394407em}.katex .fontsize-ensurer.reset-size10.size6,.katex .sizing.reset-size10.size6{font-size:.48216008em}.katex .fontsize-ensurer.reset-size10.size7,.katex .sizing.reset-size10.size7{font-size:.57859209em}.katex .fontsize-ensurer.reset-size10.size8,.katex .sizing.reset-size10.size8{font-size:.69431051em}.katex .fontsize-ensurer.reset-size10.size9,.katex .sizing.reset-size10.size9{font-size:.83317261em}.katex .fontsize-ensurer.reset-size10.size10,.katex .sizing.reset-size10.size10{font-size:1em}.katex .fontsize-ensurer.reset-size10.size11,.katex .sizing.reset-size10.size11{font-size:1.19961427em}.katex .fontsize-ensurer.reset-size11.size1,.katex .sizing.reset-size11.size1{font-size:.20096463em}.katex .fontsize-ensurer.reset-size11.size2,.katex .sizing.reset-size11.size2{font-size:.24115756em}.katex .fontsize-ensurer.reset-size11.size3,.katex .sizing.reset-size11.size3{font-size:.28135048em}.katex .fontsize-ensurer.reset-size11.size4,.katex .sizing.reset-size11.size4{font-size:.32154341em}.katex .fontsize-ensurer.reset-size11.size5,.katex .sizing.reset-size11.size5{font-size:.36173633em}.katex .fontsize-ensurer.reset-size11.size6,.katex .sizing.reset-size11.size6{font-size:.40192926em}.katex .fontsize-ensurer.reset-size11.size7,.katex .sizing.reset-size11.size7{font-size:.48231511em}.katex .fontsize-ensurer.reset-size11.size8,.katex .sizing.reset-size11.size8{font-size:.57877814em}.katex .fontsize-ensurer.reset-size11.size9,.katex .sizing.reset-size11.size9{font-size:.69453376em}.katex .fontsize-ensurer.reset-size11.size10,.katex .sizing.reset-size11.size10{font-size:.83360129em}.katex .fontsize-ensurer.reset-size11.size11,.katex .sizing.reset-size11.size11{font-size:1em}.katex .delimsizing.size1{font-family:KaTeX_Size1}.katex .delimsizing.size2{font-family:KaTeX_Size2}.katex .delimsizing.size3{font-family:KaTeX_Size3}.katex .delimsizing.size4{font-family:KaTeX_Size4}.katex .delimsizing.mult .delim-size1>span{font-family:KaTeX_Size1}.katex .delimsizing.mult .delim-size4>span{font-family:KaTeX_Size4}.katex .nulldelimiter{display:inline-block;width:.12em}.katex .delimcenter,.katex .op-symbol{position:relative}.katex .op-symbol.small-op{font-family:KaTeX_Size1}.katex .op-symbol.large-op{font-family:KaTeX_Size2}.katex .accent>.vlist-t,.katex .op-limits>.vlist-t{text-align:center}.katex .accent .accent-body{position:relative}.katex .accent .accent-body:not(.accent-full){width:0}.katex .overlay{display:block}.katex .mtable .vertical-separator{display:inline-block;min-width:1px}.katex .mtable .arraycolsep{display:inline-block}.katex .mtable .col-align-c>.vlist-t{text-align:center}.katex .mtable .col-align-l>.vlist-t{text-align:left}.katex .mtable .col-align-r>.vlist-t{text-align:right}.katex .svg-align{text-align:left}.katex svg{fill:currentColor;stroke:currentColor;fill-rule:nonzero;fill-opacity:1;stroke-width:1;stroke-linecap:butt;stroke-linejoin:miter;stroke-miterlimit:4;stroke-dasharray:none;stroke-dashoffset:0;stroke-opacity:1;display:block;height:inherit;position:absolute;width:100%}.katex svg path{stroke:none}.katex img{border-style:none;max-height:none;max-width:none;min-height:0;min-width:0}.katex .stretchy{display:block;overflow:hidden;position:relative;width:100%}.katex .stretchy:after,.katex .stretchy:before{content:""}.katex .hide-tail{overflow:hidden;position:relative;width:100%}.katex .halfarrow-left{left:0;overflow:hidden;position:absolute;width:50.2%}.katex .halfarrow-right{overflow:hidden;position:absolute;right:0;width:50.2%}.katex .brace-left{left:0;overflow:hidden;position:absolute;width:25.1%}.katex .brace-center{left:25%;overflow:hidden;position:absolute;width:50%}.katex .brace-right{overflow:hidden;position:absolute;right:0;width:25.1%}.katex .x-arrow-pad{padding:0 .5em}.katex .cd-arrow-pad{padding:0 .55556em 0 .27778em}.katex .mover,.katex .munder,.katex .x-arrow{text-align:center}.katex .boxpad{padding:0 .3em}.katex .fbox,.katex .fcolorbox{border:.04em solid;box-sizing:border-box}.katex .cancel-pad{padding:0 .2em}.katex .cancel-lap{margin-left:-.2em;margin-right:-.2em}.katex .sout{border-bottom-style:solid;border-bottom-width:.08em}.katex .angl{border-right:.049em solid;border-top:.049em solid;box-sizing:border-box;margin-right:.03889em}.katex .anglpad{padding:0 .03889em}.katex .eqn-num:before{content:"(" counter(katexEqnNo) ")";counter-increment:katexEqnNo}.katex .mml-eqn-num:before{content:"(" counter(mmlEqnNo) ")";counter-increment:mmlEqnNo}.katex .mtr-glue{width:50%}.katex .cd-vert-arrow{display:inline-block;position:relative}.katex .cd-label-left{display:inline-block;position:absolute;right:calc(50% + .3em);text-align:left}.katex .cd-label-right{display:inline-block;left:calc(50% + .3em);position:absolute;text-align:right}.katex-display{display:block;margin:1em 0;text-align:center}.katex-display>.katex{display:block;text-align:center;white-space:nowrap}.katex-display>.katex>.katex-html{display:block;position:relative}.katex-display>.katex>.katex-html>.tag{position:absolute;right:0}.katex-display.leqno>.katex>.katex-html>.tag{left:0;right:auto}.katex-display.fleqn>.katex{padding-left:2em;text-align:left}body{counter-reset:katexEqnNo mmlEqnNo}</style><style data-n-href="/_next/static/css/cbb137c583621905.css">.debugger_monacoDebuggerBreakpoint__43nXZ:after{background-color:#d47d78}.debugger_monacoDebuggerBreakpointHovered__gfp_3:after,.debugger_monacoDebuggerBreakpoint__43nXZ:after{border-radius:100%;content:"";cursor:pointer;display:block;height:10px;width:10px}.debugger_monacoDebuggerBreakpointHovered__gfp_3:after{background-color:#eabebc}.debugger_monacoDebuggerBreakpointHoveredDisabled__g383c:after{background-color:#efd0cf;border-radius:100%;content:"";cursor:not-allowed;display:block;height:10px;width:10px}.debugger_monacoHighlightLine__FO1Et{background-color:#d47d7833;border:1px solid #d47d78;border-right:none;border-left:none}.input_input-container__SZzNg:hover .input_clear-icon__WR5Cb{display:inline}.input_input-container__SZzNg:hover .input_right-icon__DWVxd{display:none}.input_input-container__SZzNg input::-webkit-contacts-auto-fill-button{display:none!important;pointer-events:none;position:absolute;right:0;visibility:hidden}.Box_box__0mKsf{background:#f7f8fa;border-radius:21px;box-shadow:0 1px 3px #0000000a,0 10px 28px -4px #00000029;font-family:PingFang SC,sans-serif;left:50%;overflow:hidden;position:fixed;top:50%;transform:translateX(-50%) translateY(-50%);width:629px;z-index:1000}.dark .Box_box__0mKsf{background:#1a1a1a}.Box_mask__07luv{background:#0000004d;height:100%;left:0;position:fixed;top:0;width:100%;z-index:1000}.Header_header__CtwcI{background:linear-gradient(87.91deg,#eeca94 23.26%,#f5e0c2 75.35%);height:100px;overflow:hidden}.Header_logo__frF2X{right:32px;top:0}.Header_logo__frF2X,.Header_user__4fzjf{position:absolute}.Header_user__4fzjf{align-items:center;display:flex;flex-direction:row;gap:16px;height:52px;left:32px;padding:0;top:24px}.Header_avatar__Ga5nV{background-position:50% 50%;background-repeat:no-repeat;background-size:cover;border-radius:50%;flex-grow:0;height:50px;order:0;width:50px}.Header_userInner__PEbt0{align-items:flex-start;flex:none;flex-direction:column;flex-grow:0;height:52px;order:1}.Header_nick__O_C6d,.Header_userInner__PEbt0{display:flex;padding:0}.Header_nick__O_C6d{align-items:flex-end;color:#262626bf;flex:none;flex-direction:row;flex-grow:0;font-size:20px;gap:4px;height:28px;order:0}.Header_tag__BCh02{align-items:center;background:#0000000d;border-radius:12px;color:#3c3c4399;display:flex;font-size:12px;font-weight:400;height:24px;padding:4px 0 4px 8px;width:72px}.Header_icon__H_hJI{background-position:50% 50%;background-repeat:no-repeat;background-size:contain;height:16px;margin-right:4px;width:16px}.Header_premium__PVj15{background-image:url(https://static.leetcode-cn.com/cn-frontendx-assets/development/_next/static/images/premium-plus-b81e87ee9afdf123c5f0b97ab8abdd0c.png)}.Header_free__0h4bR{background-image:url("data:image/svg+xml;charset=utf-8,%3Csvg width='16' height='16' fill='none' xmlns='http://www.w3.org/2000/svg'%3E%3Cpath d='M6.475 1.054a3.05 3.05 0 0 1 3.05 0l3.728 2.152a3.05 3.05 0 0 1 1.525 2.642v4.305a3.05 3.05 0 0 1-1.525 2.64l-3.728 2.153a3.05 3.05 0 0 1-3.05 0l-3.728-2.152a3.05 3.05 0 0 1-1.525-2.641V5.848a3.05 3.05 0 0 1 1.525-2.642l3.728-2.152Z' fill='url(%23a)' stroke='url(%23b)' stroke-width='.3'/%3E%3Cpath d='M7.918 8.325 8 8.378l.082-.053 3.284-2.134a.25.25 0 0 1 .384.239l-.482 4.046a.65.65 0 0 1-.645.574H5.377a.65.65 0 0 1-.645-.574L4.25 6.43a.25.25 0 0 1 .385-.24l3.283 2.135Z' fill='url(%23c)' stroke='url(%23d)' stroke-width='.3'/%3E%3Cpath d='M7.783 4.882a.25.25 0 0 1 .434 0l2.969 5.195a.65.65 0 0 1-.565.973H5.378a.65.65 0 0 1-.564-.973l2.969-5.195Z' fill='url(%23e)' stroke='url(%23f)' stroke-width='.3'/%3E%3Cdefs%3E%3ClinearGradient id='a' x1='-1.675' y1='7.906' x2='7.445' y2='17.483' gradientUnits='userSpaceOnUse'%3E%3Cstop stop-color='silver'/%3E%3Cstop offset='1' stop-color='%23A09F9F'/%3E%3C/linearGradient%3E%3ClinearGradient id='b' x1='-.219' y1='5.129' x2='6.835' y2='16.285' gradientUnits='userSpaceOnUse'%3E%3Cstop stop-color='%23E0DCDC'/%3E%3Cstop offset='1' stop-color='%23A19F9F'/%3E%3C/linearGradient%3E%3ClinearGradient id='c' x1='1.166' y1='8.547' x2='5.276' y2='14.919' gradientUnits='userSpaceOnUse'%3E%3Cstop stop-color='%23EDEDED'/%3E%3Cstop offset='1' stop-color='%23D4D4D4'/%3E%3C/linearGradient%3E%3ClinearGradient id='d' x1='2.698' y1='7.657' x2='5.11' y2='13.288' gradientUnits='userSpaceOnUse'%3E%3Cstop stop-color='%23F3F3F3'/%3E%3Cstop offset='1' stop-color='%23CFCFCF'/%3E%3C/linearGradient%3E%3ClinearGradient id='e' x1='4.457' y1='7.126' x2='7.335' y2='13.035' gradientUnits='userSpaceOnUse'%3E%3Cstop stop-color='%23F5F5F5'/%3E%3Cstop offset='1' stop-color='%23DCDCDC'/%3E%3C/linearGradient%3E%3ClinearGradient id='f' x1='3.46' y1='6.608' x2='6.228' y2='12.677' gradientUnits='userSpaceOnUse'%3E%3Cstop stop-color='%23fff'/%3E%3Cstop offset='1' stop-color='%23DEDEDE'/%3E%3C/linearGradient%3E%3C/defs%3E%3C/svg%3E")}.Header_close__JeVCt{cursor:pointer;height:24px;position:absolute;right:24px;top:24px;width:24px}.Sku_box__3c1Sb{align-items:stretch;display:flex;flex-direction:row;gap:16px;height:130px;margin:16px;padding:0}.Sku_item__Obmax{border:2px solid #0000;border-radius:13px;overflow:hidden;position:relative;-webkit-user-select:none;user-select:none}.Sku_active__qHxVv{border-color:#ffa116;box-shadow:0 2px 12px #ff9d1633}.Sku_content__61ob8{background:#fff;cursor:pointer;font-weight:400;padding:24px 0;position:relative;text-align:center}.dark .Sku_content__61ob8{background:#282828}.Sku_active__qHxVv .Sku_content__61ob8{background:#ffa1161a}.dark .Sku_active__qHxVv .Sku_content__61ob8{background:#ff9d0a1a}.Sku_sku365__atT2G,.Sku_sku90__qXtX3{width:150px}.Sku_sku30__BFLPT{width:265px}.Sku_days__JAhuu{color:#262626;font-size:14px;line-height:22px}.dark .Sku_days__JAhuu{color:#fff}.Sku_average__vICFW{color:#3c3c4399;font-size:12px;line-height:16px;margin-top:4px}.dark .Sku_average__vICFW{color:#eff2f699}.Item365_best__koJug{background:linear-gradient(90deg,#ffa116,#ffba49 95%);border-radius:0 0 0 13px;color:#fff;font-size:12px;font-weight:500;height:24px;line-height:24px;position:absolute;right:0;text-align:center;top:0;width:60px}.dark .Item365_best__koJug{background:linear-gradient(90deg,#ff9d0a,#ffba49 95%)}.Price_price__jeYkN{font-family:DIN Alternate,sans-serif;font-style:normal;font-weight:700;height:40px;position:relative;text-align:center}.Price_on__3_cKW{color:#ffa116}.dark .Price_on__3_cKW{color:#ff9d0a}.Price_off__zum0b{color:#262626}.dark .Price_off__zum0b{color:#fff}.Price_unit__VNpaj{color:#262626bf;display:inline-block;font-size:16px;height:20px;margin-right:4px;vertical-align:initial;width:12px}.dark .Price_unit__VNpaj{color:#eff1f6bf}.Price_on__3_cKW .Price_unit__VNpaj{color:#ffa116}.dark .Price_on__3_cKW .Price_unit__VNpaj{color:#ff9d0a}.Price_value__WagVa{font-size:32px;vertical-align:initial}.Item30_multi__WSeb0{align-items:center;display:flex}.Item30_child__jjMpp{flex:1 1}.Item30_line__kSs3B{border-left:1px solid #000a200d;height:66px}.Consecutive_box__iT8S2{align-items:center;border-radius:0 13px;display:flex;font-size:11px;font-weight:400;height:24px;justify-content:center;line-height:13px;position:absolute;right:0;top:0;width:108px}.Consecutive_off__pcOMj{background:#007aff14;color:#3c3c434d}.dark .Consecutive_off__pcOMj{background:#ffffff12;color:#ebebf54d}.Consecutive_on__VAaEE{background:#007aff14;color:#007aff}.dark .Consecutive_on__VAaEE{background:#0a84ff2e;color:#0a84ff}.Consecutive_title__K__B_{margin-right:8px}.Toggle_box__DHiW_{background:#bfbfbf;border-radius:16px;height:16px;overflow:hidden;padding:2px;transition-duration:.15s;transition-property:all;transition-timing-function:cubic-bezier(.4,0,.2,1);width:32px}.Toggle_disabled__GnESS{cursor:not-allowed}.Toggle_inner__49M_c{background:#fff;border-radius:6px;height:12px;transition-duration:.15s;transition-property:all;transition-timing-function:cubic-bezier(.4,0,.2,1);width:12px}.Toggle_on__yH5Iq{background:#007aff}.Toggle_on__yH5Iq .Toggle_inner__49M_c{transform:translateX(16px)}.Student_box__sOiKU{background:#007aff14;border-radius:8px;height:40px;margin:16px;overflow:hidden;position:relative}.dark .Student_box__sOiKU{background:#0a84ff1f}.Student_icon__fBh3X{bottom:0;left:0;position:absolute}.Student_icon__fBh3X path{fill:#007aff;fill-opacity:.08}.dark .Student_icon__fBh3X path{fill:#0a84ff;fill-opacity:.12}.Student_content__NSamf{align-items:center;display:flex;height:100%;left:0;padding:9px 16px;position:absolute;top:0;width:100%}.Student_title__nFxlg{color:#262626;font-size:14px;line-height:22px;margin-right:16px}.dark .Student_title__nFxlg{color:#fff}.Student_desc__ZT2LL{color:#262626bf;flex:auto;font-size:12px;font-weight:400}.dark .Student_desc__ZT2LL{color:#eff1f6bf}.Student_link__4_dOF{color:#262626bf;font-size:12px;font-weight:500}.dark .Student_link__4_dOF{color:#eff1f6bf}.Pay_box__tHAzH{align-items:stretch;background:#fff;border-radius:13px;display:flex;gap:16px;margin:16px;padding:16px}.dark .Pay_box__tHAzH{background:#282828}.Pay_right__fVimP{flex:auto}.Gift_box__UjbI8{background:#00000008;border-radius:8px;padding:12px 0 0 12px;position:relative;width:115px}.dark .Gift_box__UjbI8{background:#ffffff0d}.Gift_title__oEDmn{color:#000;font-size:12px;font-weight:500;line-height:16px;margin-bottom:12px}.dark .Gift_title__oEDmn{color:#ebebf5b3}.Gift_list__7W_wS{height:153px;overflow-x:hidden;overflow-y:scroll}.Gift_item__MFW75{background-position:50% 50%;background-repeat:no-repeat;background-size:cover;border-radius:5px;height:52px;margin-bottom:8px;overflow:hidden;position:relative;width:91px}.Gift_item__MFW75:before{background:linear-gradient(0deg,#0003,#0003);content:" ";display:block;height:100%;left:0;position:absolute;top:0;width:100%}.Gift_name__Ym8WC{bottom:6px;color:#fff;font-size:12px;font-weight:500;left:4px;position:absolute}.Coupon_box__EkqgP{height:24px;position:relative}.Coupon_icon___H7ys{display:inline-block;margin-left:4px;margin-right:8px}.Coupon_icon___H7ys,.Coupon_title__S0nZJ{vertical-align:middle}.Coupon_title__S0nZJ{color:#000;font-size:14px;font-weight:500;line-height:22px}.dark .Coupon_title__S0nZJ{color:#fff}.Coupon_count__TI1b5{color:#3c3c4399;font-size:12px;font-weight:500;line-height:18px;position:absolute;right:0;top:0}.dark .Coupon_count__TI1b5{color:#eff2f699}.CouponDialogue_box__TwQeY{align-items:flex-start;background:#fff;border-radius:8px;box-shadow:0 1px 3px #0000000a,0 6px 16px #0000001f;display:flex;flex-direction:column;gap:8px;left:0;padding:13px 20px;position:absolute;top:28px;width:100%;z-index:1}.dark .CouponDialogue_box__TwQeY{background:#2e2e2f}.CouponDialogue_item__hxL8m{color:#262626bf;cursor:pointer;font-size:14px;font-weight:400;line-height:22px}.dark .CouponDialogue_item__hxL8m{color:#eff2f699}.Line_line__9GBBH{border-top:1px dashed #000a201c;margin:12px 0}.dark .Line_line__9GBBH{border-top:1px dashed #f7faff2e}.OrderDetail_box__Np5_x{align-items:stretch;display:flex}.OrderDetail_left__Bu6iw{background:#fff;height:120px;margin-right:16px;width:120px}.OrderDetail_right__AeVLd{flex:auto}.MoneyDetail_box___68s5{color:#3c3c4399;font-size:14px;font-weight:400;line-height:22px;margin-bottom:32px}.dark .MoneyDetail_box___68s5{color:#eff2f699}.MoneyDetail_unit__gRJO3{color:#ffa116;font-family:DIN Alternate,sans-serif;font-size:14px;font-weight:700;line-height:22px;margin-right:4px}.dark .MoneyDetail_unit__gRJO3{color:#ff9d0a}.MoneyDetail_money__2Gtj7{color:#ffa116;font-family:DIN Alternate,sans-serif;font-size:32px;font-weight:700;line-height:40px;margin-right:4px}.MoneyDetail_originalPrice__xpeVb{margin-right:8px;text-decoration-line:line-through}.dark .MoneyDetail_money__2Gtj7{color:#ff9d0a}.MoneyDetail_detail__gtQkI{align-items:center;display:inline-flex}.MoneyDetail_locator__Hqj46{position:relative}.DetailTip_box__1jAeX{bottom:0;height:130px;left:-140px;position:absolute;width:240px;z-index:1000}.DetailTip_content__9gZ4H{position:relative}.DetailTip_arrow__V3iZE{background:0 0;bottom:0;height:22px;left:50%;overflow:hidden;transform:translateY(100%) translate(-50%);width:22px}.DetailTip_arrowContent__h_iuo,.DetailTip_arrow__V3iZE{display:block;pointer-events:none;position:absolute}.DetailTip_arrowContent__h_iuo{background-color:#fff;border-radius:0 0 2px;box-shadow:3px 3px 7px #00000012;content:"";height:11px;inset:0;margin:auto;transform:translateY(-12px) rotate(45deg);width:11px}.dark .DetailTip_arrowContent__h_iuo{background-color:#2e2e2f}.DetailTip_arrowContent__h_iuo:before{background:#fff;background-position:-10px -10px;background-repeat:no-repeat;-webkit-clip-path:path("M 9.849242404917499 24.091883092036785 A 5 5 0 0 1 13.384776310850237 22.627416997969522 L 20.627416997969522 22.627416997969522 A 2 2 0 0 0 22.627416997969522 20.627416997969522 L 22.627416997969522 13.384776310850237 A 5 5 0 0 1 24.091883092036785 9.849242404917499 L 23.091883092036785 9.849242404917499 L 9.849242404917499 23.091883092036785 Z");clip-path:path("M 9.849242404917499 24.091883092036785 A 5 5 0 0 1 13.384776310850237 22.627416997969522 L 20.627416997969522 22.627416997969522 A 2 2 0 0 0 22.627416997969522 20.627416997969522 L 22.627416997969522 13.384776310850237 A 5 5 0 0 1 24.091883092036785 9.849242404917499 L 23.091883092036785 9.849242404917499 L 9.849242404917499 23.091883092036785 Z");content:"";height:34px;left:-11px;position:absolute;top:-11px;width:34px}.dark .DetailTip_arrowContent__h_iuo:before{background-color:#2e2e2f}.DetailTip_cursor__xJ7aE{bottom:0;cursor:pointer;height:20px;left:95px;position:absolute;width:50px}.DetailTip_inner__vwkim{background-clip:padding-box;background-color:#fff;border-radius:8px;box-shadow:0 3px 6px -4px #0000001f,0 6px 16px #00000014,0 9px 28px 8px #0000000d;padding:8px 12px 12px}.dark .DetailTip_inner__vwkim{background-color:#2e2e2f}.DetailTip_title__ck8nu{color:#262626;font-size:14px;font-weight:500;line-height:22px;margin-bottom:4px}.dark .DetailTip_title__ck8nu{color:#fff}.DetailTip_main__D4rsT{background:#00000008;border-radius:8px;padding:4px 12px}.dark .DetailTip_main__D4rsT{background:#ffffff0d}.DetailTip_days___O7Gx{color:#262626;font-size:14px;font-weight:400;line-height:22px}.dark .DetailTip_days___O7Gx{color:#fff}.DetailTip_price__9H0Gl{color:#262626;float:right;font-size:14px;font-weight:500;line-height:22px}.dark .DetailTip_price__9H0Gl{color:#fff}.DetailTip_endTime__lgK_Q{color:#3c3c4399;font-size:12px;font-weight:400;line-height:16px;margin-top:4px}.dark .DetailTip_endTime__lgK_Q{color:#eff2f699}.PayMethod_box__1bSbc{align-items:center;color:#3c3c4399;display:flex;font-size:12px;font-weight:400;line-height:16px;margin-bottom:8px}.dark .PayMethod_box__1bSbc{color:#eff2f699}.PayMethod_text__naSH5{flex:auto}.PayMethod_bold__yGI_n{color:#5c5c5c;font-weight:500}.dark .PayMethod_bold__yGI_n{color:#bdbfc2}.Agreement_box__ZZ5ib{color:#3c3c4399;font-size:12px;font-weight:400;line-height:16px}.dark .Agreement_box__ZZ5ib{color:#eff2f699}.Agreement_link__Crlfj{color:#007aff}.dark .Agreement_link__Crlfj{color:#0a84ff}.TipRefresh_box___BgyH{align-items:center;background:#74748014;border-radius:8px;color:#3c3c4399;display:flex;font-size:12px;font-weight:400;line-height:16px;margin-top:12px;padding:8px 0 8px 12px}.dark .TipRefresh_box___BgyH{color:#eff2f699}.TipRefresh_icon__1y8K_{margin-right:8px}.TipRefresh_icon__1y8K_ path{fill:#bfbfbf}.dark .TipRefresh_icon__1y8K_ path{fill:#5c5c5c}.Intro_box__42UhS{background:#fff;border-radius:13px;margin:16px;padding:16px 16px 24px;position:relative}.dark .Intro_box__42UhS{background:#282828}.Intro_title__XkBzy{color:#ca965e;font-size:16px;font-style:normal;font-weight:500;line-height:24px}.dark .Intro_title__XkBzy{color:#dcbc8c}.Intro_more__pZa3Q{color:#262626bf;font-size:12px;font-style:normal;font-weight:400;line-height:16px;position:absolute;right:16px;top:20px}.dark .Intro_more__pZa3Q{color:#eff1f6bf}.Intro_line__66BYP,.Intro_link__JLJkY{vertical-align:middle}.Intro_line__66BYP{border-left:1px solid #000a201c;display:inline;height:12px;margin:0 6px}.dark .Intro_line__66BYP{border-left:1px solid #f7faff2e}.Intro_items__l9axd{align-items:flex-end;display:flex;flex-direction:row;gap:62px;margin:16px auto 0;padding:0;width:474px}.Intro_item__y0ea6{color:#262626bf;font-size:12px;font-style:normal;font-weight:400;height:76px;line-height:16px;text-align:center;width:72px}.dark .Intro_item__y0ea6{color:#fff}.Intro_icon__U0kiN{background-position:50% 50%;background-repeat:no-repeat;background-size:contain;height:36px;margin:12px auto;width:36px}.Intro_right1__RpfQ2{background-image:url(https://static.leetcode.cn/cn-mono-assets/production/assets/company_pop@2x.89d521e7.png)}.Intro_right2__K3mZt{background-image:url(https://static.leetcode.cn/cn-mono-assets/production/assets/interview_pop@2x.9b8324b5.png)}.Intro_right3__hwUCK{background-image:url(https://static.leetcode.cn/cn-mono-assets/production/assets/hot_pop@2x.89470849.png)}.Intro_right4__NvQ8i{background-image:url(https://static.leetcode.cn/cn-mono-assets/production/assets/lightning_pop@2x.7404043b.png)}.error-highlight_monacoErrorLineNumber__kGCqI{z-index:1}.error-highlight_monacoErrorLineNumber__kGCqI+.line-numbers{opacity:0}.error-highlight_monacoErrorLineNumber__kGCqI:before{align-items:center;color:#ef4743;content:"\e900";display:flex;font-family:lc-icon;font-size:20px;height:20px;justify-content:center;left:20px;position:absolute;width:20px}.error-highlight_monacoErrorLine__0kMjJ{background-color:#d47d7833}.demo_container__kMSWS{contain:layout;display:grid;gap:8px;grid-template-areas:"header header" "content editor" "content console";grid-template-columns:min-content 1fr;grid-template-rows:36px 1fr min-content;height:362px}.demo_content__qFsd2{animation-direction:alternate;animation-duration:1s;animation-iteration-count:infinite;animation-name:demo_h-drag__KaY2C;animation-timing-function:ease-in-out;position:relative;width:140px}.demo_content__qFsd2 img{position:absolute;right:-4px;top:50%;transform:translate(50%,-50%)}.demo_console__nKqWg{animation-direction:alternate;animation-duration:1s;animation-iteration-count:infinite;animation-name:demo_v-drag__chCM9;animation-timing-function:ease-in-out;height:96px;position:relative}.demo_console__nKqWg img{left:50%;position:absolute;top:-4px;transform:translate(-50%,-50%) rotate(90deg)}@keyframes demo_h-drag__KaY2C{0%{opacity:1;width:140px}50%{opacity:1;width:200px}51%{opacity:0;width:200px}to{opacity:0;width:200px}}@keyframes demo_v-drag__chCM9{0%{height:96px;opacity:0}50%{height:96px;opacity:0}51%{height:96px;opacity:1}to{height:125px;opacity:1}}</style><script type="text/javascript" async="" src="./longest-consecutive-sequence_files/js"></script><script type="text/javascript" async="" src="./longest-consecutive-sequence_files/analytics.js.download"></script><script type="text/javascript" async="" src="./longest-consecutive-sequence_files/gio.js.download"></script><script defer="" nomodule="" src="./longest-consecutive-sequence_files/polyfills-c67a75d1b6f99dc8.js.download"></script><script src="./longest-consecutive-sequence_files/webpack-8c6d6828e0c710f5.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/framework-4ed89e9640adfb9e.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/main-c0d826e11e45808a.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/_app-b8a4c71c9dd44972.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/e6848cf3-e709bce199e80e90.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/4b358913-3386a572e61b7894.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/a3a40f46-ac162c41817fc5cb.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/f0c4151e-7739f92bfc32411d.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/6e691932-db2c19c3cfebfc33.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/1e280605-5ef1264f718ed07e.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/aa74d784-a2598698cfe62798.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/129-07e4846883f0f080.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/9194-a2472356fe286771.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/9074-5c6df213904f4821.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/1664-daeac2d69868e96c.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/2025-7e0e50993a0f025e.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/2300-f961846e0510f0b2.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/7113-8330f7f31b7e0fd7.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/468-1ce2b1da79d16a5f.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/9283-d39558fa28edced7.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/930-c92ad2d8affa12ab.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/1033-9096c101d6a3d73f.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/9539-1ffbb9c68524d4b4.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/408-d8c1328c5b30c6cb.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/6732-ea9f9478eb5c0836.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/9353-3537577e0b817fe7.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/462-0e65443afbfc7834.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/9681-c5546775a22ff1c0.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/3935-c3650ff5832807f2.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/8925-225d2d06c8e45053.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/125-a06eb74587b7142f.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/3-0b3ed4b98eaa83df.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/4583-7e328e0a5da31c32.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/8829-1b66634a16371a6b.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/7047-6f6e4119f2ca4e27.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/9441-13e9b509cdd879e6.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/88-7c70de5a3cdebb40.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/5632-35cd1b2b3f75d36c.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/3913-90199d203d0a97ce.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/2479-825631f7cbb78c98.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/[[...tab]]-8ac38e60be2102ec.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/_buildManifest.js.download" defer=""></script><script src="./longest-consecutive-sequence_files/_ssgManifest.js.download" defer=""></script><style type="text/css">.transform-component-module_wrapper__7HFJe {
  position: relative;
  width: -moz-fit-content;
  width: fit-content;
  height: -moz-fit-content;
  height: fit-content;
  overflow: hidden;
  -webkit-touch-callout: none; /* iOS Safari */
  -webkit-user-select: none; /* Safari */
  -khtml-user-select: none; /* Konqueror HTML */
  -moz-user-select: none; /* Firefox */
  -ms-user-select: none; /* Internet Explorer/Edge */
  user-select: none;
  margin: 0;
  padding: 0;
}
.transform-component-module_content__uCDPE {
  display: flex;
  flex-wrap: wrap;
  width: -moz-fit-content;
  width: fit-content;
  height: -moz-fit-content;
  height: fit-content;
  margin: 0;
  padding: 0;
  transform-origin: 0% 0%;
}
.transform-component-module_content__uCDPE img {
  pointer-events: none;
}
</style><style data-emotion="css-global" data-s="">:host,:root,[data-theme]{--chakra-ring-inset:var(--chakra-empty,/*!*/ /*!*/);--chakra-ring-offset-width:0px;--chakra-ring-offset-color:#fff;--chakra-ring-color:rgba(66, 153, 225, 0.6);--chakra-ring-offset-shadow:0 0 #0000;--chakra-ring-shadow:0 0 #0000;--chakra-space-x-reverse:0;--chakra-space-y-reverse:0;--chakra-colors-transparent:transparent;--chakra-colors-current:currentColor;--chakra-colors-black:#000000;--chakra-colors-white:#FFFFFF;--chakra-colors-whiteAlpha-50:rgba(255, 255, 255, 0.04);--chakra-colors-whiteAlpha-100:rgba(255, 255, 255, 0.06);--chakra-colors-whiteAlpha-200:rgba(255, 255, 255, 0.08);--chakra-colors-whiteAlpha-300:rgba(255, 255, 255, 0.16);--chakra-colors-whiteAlpha-400:rgba(255, 255, 255, 0.24);--chakra-colors-whiteAlpha-500:rgba(255, 255, 255, 0.36);--chakra-colors-whiteAlpha-600:rgba(255, 255, 255, 0.48);--chakra-colors-whiteAlpha-700:rgba(255, 255, 255, 0.64);--chakra-colors-whiteAlpha-800:rgba(255, 255, 255, 0.80);--chakra-colors-whiteAlpha-900:rgba(255, 255, 255, 0.92);--chakra-colors-blackAlpha-50:rgba(0, 0, 0, 0.04);--chakra-colors-blackAlpha-100:rgba(0, 0, 0, 0.06);--chakra-colors-blackAlpha-200:rgba(0, 0, 0, 0.08);--chakra-colors-blackAlpha-300:rgba(0, 0, 0, 0.16);--chakra-colors-blackAlpha-400:rgba(0, 0, 0, 0.24);--chakra-colors-blackAlpha-500:rgba(0, 0, 0, 0.36);--chakra-colors-blackAlpha-600:rgba(0, 0, 0, 0.48);--chakra-colors-blackAlpha-700:rgba(0, 0, 0, 0.64);--chakra-colors-blackAlpha-800:rgba(0, 0, 0, 0.80);--chakra-colors-blackAlpha-900:rgba(0, 0, 0, 0.92);--chakra-colors-gray-50:#F7FAFC;--chakra-colors-gray-100:#EDF2F7;--chakra-colors-gray-200:#E2E8F0;--chakra-colors-gray-300:#CBD5E0;--chakra-colors-gray-400:#A0AEC0;--chakra-colors-gray-500:#718096;--chakra-colors-gray-600:#4A5568;--chakra-colors-gray-700:#2D3748;--chakra-colors-gray-800:#1A202C;--chakra-colors-gray-900:#171923;--chakra-colors-gray-light-10:#F5F5F5;--chakra-colors-gray-light-20:#E8E8E8;--chakra-colors-gray-light-30:#DFDFDF;--chakra-colors-gray-light-40:#B7B7B7;--chakra-colors-gray-light-50:#949494;--chakra-colors-gray-light-60:#777777;--chakra-colors-gray-light-70:#525252;--chakra-colors-gray-light-80:#2A2A2A;--chakra-colors-gray-light-90:#212121;--chakra-colors-gray-light-100:#1A1A1A;--chakra-colors-gray-dark-10:#1A1A1A;--chakra-colors-gray-dark-20:#212121;--chakra-colors-gray-dark-30:#2A2A2A;--chakra-colors-gray-dark-40:#525252;--chakra-colors-gray-dark-50:#777777;--chakra-colors-gray-dark-60:#949494;--chakra-colors-gray-dark-70:#B7B7B7;--chakra-colors-gray-dark-80:#DFDFDF;--chakra-colors-gray-dark-90:#E8E8E8;--chakra-colors-gray-dark-100:#F5F5F5;--chakra-colors-red-50:#FFF5F5;--chakra-colors-red-100:#FED7D7;--chakra-colors-red-200:#FEB2B2;--chakra-colors-red-300:#FC8181;--chakra-colors-red-400:#F56565;--chakra-colors-red-500:#E53E3E;--chakra-colors-red-600:#C53030;--chakra-colors-red-700:#9B2C2C;--chakra-colors-red-800:#822727;--chakra-colors-red-900:#63171B;--chakra-colors-red-light-10:#FFE9E8;--chakra-colors-red-light-20:#FFCCCB;--chakra-colors-red-light-30:#FFB7BA;--chakra-colors-red-light-40:#FF96A3;--chakra-colors-red-light-50:#FF697A;--chakra-colors-red-light-60:#FF334B;--chakra-colors-red-light-70:#D2203A;--chakra-colors-red-light-80:#A6112C;--chakra-colors-red-light-90:#79061F;--chakra-colors-red-light-100:#4D0013;--chakra-colors-red-dark-10:#4D0013;--chakra-colors-red-dark-20:#941E33;--chakra-colors-red-dark-30:#B82E43;--chakra-colors-red-dark-40:#DB4253;--chakra-colors-red-dark-50:#FF475D;--chakra-colors-red-dark-60:#FF5967;--chakra-colors-red-dark-70:#FF7D84;--chakra-colors-red-dark-80:#FFA1A2;--chakra-colors-red-dark-90:#FFC5C4;--chakra-colors-red-dark-100:#FFE9E8;--chakra-colors-orange-50:#FFFAF0;--chakra-colors-orange-100:#FEEBC8;--chakra-colors-orange-200:#FBD38D;--chakra-colors-orange-300:#F6AD55;--chakra-colors-orange-400:#ED8936;--chakra-colors-orange-500:#DD6B20;--chakra-colors-orange-600:#C05621;--chakra-colors-orange-700:#9C4221;--chakra-colors-orange-800:#7B341E;--chakra-colors-orange-900:#652B19;--chakra-colors-yellow-50:#FFFFF0;--chakra-colors-yellow-100:#FEFCBF;--chakra-colors-yellow-200:#FAF089;--chakra-colors-yellow-300:#F6E05E;--chakra-colors-yellow-400:#ECC94B;--chakra-colors-yellow-500:#D69E2E;--chakra-colors-yellow-600:#B7791F;--chakra-colors-yellow-700:#975A16;--chakra-colors-yellow-800:#744210;--chakra-colors-yellow-900:#5F370E;--chakra-colors-yellow-light-10:#FFFCE6;--chakra-colors-yellow-light-20:#FFF1A3;--chakra-colors-yellow-light-30:#FFE77A;--chakra-colors-yellow-light-40:#FFD952;--chakra-colors-yellow-light-50:#FFC929;--chakra-colors-yellow-light-60:#FFB800;--chakra-colors-yellow-light-70:#D99400;--chakra-colors-yellow-light-80:#B37400;--chakra-colors-yellow-light-90:#8C5600;--chakra-colors-yellow-light-100:#663C00;--chakra-colors-yellow-dark-10:#4D2D00;--chakra-colors-yellow-dark-20:#794C04;--chakra-colors-yellow-dark-30:#A66F0A;--chakra-colors-yellow-dark-40:#D29613;--chakra-colors-yellow-dark-50:#FFC11F;--chakra-colors-yellow-dark-60:#FFC926;--chakra-colors-yellow-dark-70:#FFDB57;--chakra-colors-yellow-dark-80:#FFE987;--chakra-colors-yellow-dark-90:#FFF5B8;--chakra-colors-yellow-dark-100:#FFFCE8;--chakra-colors-green-50:#F0FFF4;--chakra-colors-green-100:#C6F6D5;--chakra-colors-green-200:#9AE6B4;--chakra-colors-green-300:#68D391;--chakra-colors-green-400:#48BB78;--chakra-colors-green-500:#38A169;--chakra-colors-green-600:#2F855A;--chakra-colors-green-700:#276749;--chakra-colors-green-800:#22543D;--chakra-colors-green-900:#1C4532;--chakra-colors-green-light-10:#E8FFEF;--chakra-colors-green-light-20:#B5F2CB;--chakra-colors-green-light-30:#93EDBF;--chakra-colors-green-light-40:#64E8A4;--chakra-colors-green-light-50:#35DB80;--chakra-colors-green-light-60:#15BD66;--chakra-colors-green-light-70:#18A352;--chakra-colors-green-light-80:#07854C;--chakra-colors-green-light-90:#03693E;--chakra-colors-green-light-100:#004D2F;--chakra-colors-green-dark-10:#004D2F;--chakra-colors-green-dark-20:#03693E;--chakra-colors-green-dark-30:#0D854F;--chakra-colors-green-dark-40:#1CA161;--chakra-colors-green-dark-50:#2EBD73;--chakra-colors-green-dark-60:#3FCA7D;--chakra-colors-green-dark-70:#63D794;--chakra-colors-green-dark-80:#8CE5AE;--chakra-colors-green-dark-90:#B8F2CD;--chakra-colors-green-dark-100:#E8FFEF;--chakra-colors-teal-50:#E6FFFA;--chakra-colors-teal-100:#B2F5EA;--chakra-colors-teal-200:#81E6D9;--chakra-colors-teal-300:#4FD1C5;--chakra-colors-teal-400:#38B2AC;--chakra-colors-teal-500:#319795;--chakra-colors-teal-600:#2C7A7B;--chakra-colors-teal-700:#285E61;--chakra-colors-teal-800:#234E52;--chakra-colors-teal-900:#1D4044;--chakra-colors-teal-light-10:#E8FFFB;--chakra-colors-teal-light-20:#BCF6EE;--chakra-colors-teal-light-30:#92EDE4;--chakra-colors-teal-light-40:#47DAD5;--chakra-colors-teal-light-50:#26D1D1;--chakra-colors-teal-light-60:#1CB8B8;--chakra-colors-teal-light-70:#10A1A1;--chakra-colors-teal-light-80:#107575;--chakra-colors-teal-light-90:#155C5C;--chakra-colors-teal-light-100:#00424D;--chakra-colors-teal-dark-10:#00424D;--chakra-colors-teal-dark-20:#035D67;--chakra-colors-teal-dark-30:#0F7A82;--chakra-colors-teal-dark-40:#1E989D;--chakra-colors-teal-dark-50:#32B8B8;--chakra-colors-teal-dark-60:#46C6C2;--chakra-colors-teal-dark-70:#68D4CD;--chakra-colors-teal-dark-80:#90E3DB;--chakra-colors-teal-dark-90:#BAF1E9;--chakra-colors-teal-dark-100:#E9FFFB;--chakra-colors-blue-50:#ebf8ff;--chakra-colors-blue-100:#bee3f8;--chakra-colors-blue-200:#90cdf4;--chakra-colors-blue-300:#63b3ed;--chakra-colors-blue-400:#4299e1;--chakra-colors-blue-500:#3182ce;--chakra-colors-blue-600:#2b6cb0;--chakra-colors-blue-700:#2c5282;--chakra-colors-blue-800:#2a4365;--chakra-colors-blue-900:#1A365D;--chakra-colors-blue-light-10:#E8F7FF;--chakra-colors-blue-light-20:#BAE4FF;--chakra-colors-blue-light-30:#8BCFFF;--chakra-colors-blue-light-40:#5DB6FF;--chakra-colors-blue-light-50:#2E9AFF;--chakra-colors-blue-light-60:#007AFF;--chakra-colors-blue-light-70:#005FD2;--chakra-colors-blue-light-80:#0045A6;--chakra-colors-blue-light-90:#002E79;--chakra-colors-blue-light-100:#001B4D;--chakra-colors-blue-dark-10:#001B4D;--chakra-colors-blue-dark-20:#043079;--chakra-colors-blue-dark-30:#0A4BA6;--chakra-colors-blue-dark-40:#1369D2;--chakra-colors-blue-dark-50:#1F8AFF;--chakra-colors-blue-dark-60:#2696FF;--chakra-colors-blue-dark-70:#57B3FF;--chakra-colors-blue-dark-80:#87CDFF;--chakra-colors-blue-dark-90:#B8E3FF;--chakra-colors-blue-dark-100:#E8F7FF;--chakra-colors-cyan-50:#EDFDFD;--chakra-colors-cyan-100:#C4F1F9;--chakra-colors-cyan-200:#9DECF9;--chakra-colors-cyan-300:#76E4F7;--chakra-colors-cyan-400:#0BC5EA;--chakra-colors-cyan-500:#00B5D8;--chakra-colors-cyan-600:#00A3C4;--chakra-colors-cyan-700:#0987A0;--chakra-colors-cyan-800:#086F83;--chakra-colors-cyan-900:#065666;--chakra-colors-purple-50:#FAF5FF;--chakra-colors-purple-100:#E9D8FD;--chakra-colors-purple-200:#D6BCFA;--chakra-colors-purple-300:#B794F4;--chakra-colors-purple-400:#9F7AEA;--chakra-colors-purple-500:#805AD5;--chakra-colors-purple-600:#6B46C1;--chakra-colors-purple-700:#553C9A;--chakra-colors-purple-800:#44337A;--chakra-colors-purple-900:#322659;--chakra-colors-purple-light-10:#FBE8FF;--chakra-colors-purple-light-20:#EFC7F8;--chakra-colors-purple-light-30:#E1A8F2;--chakra-colors-purple-light-40:#D18AEB;--chakra-colors-purple-light-50:#C16DE5;--chakra-colors-purple-light-60:#AF52DE;--chakra-colors-purple-light-70:#8833BA;--chakra-colors-purple-light-80:#651C95;--chakra-colors-purple-light-90:#440A71;--chakra-colors-purple-light-100:#29004D;--chakra-colors-purple-dark-10:#29004D;--chakra-colors-purple-dark-20:#440971;--chakra-colors-purple-dark-30:#651C95;--chakra-colors-purple-dark-40:#8A38BA;--chakra-colors-purple-dark-50:#B25BDE;--chakra-colors-purple-dark-60:#C477E5;--chakra-colors-purple-dark-70:#D392EA;--chakra-colors-purple-dark-80:#E1B0EF;--chakra-colors-purple-dark-90:#F0CBF8;--chakra-colors-purple-dark-100:#FBEAFF;--chakra-colors-pink-50:#FFF5F7;--chakra-colors-pink-100:#FED7E2;--chakra-colors-pink-200:#FBB6CE;--chakra-colors-pink-300:#F687B3;--chakra-colors-pink-400:#ED64A6;--chakra-colors-pink-500:#D53F8C;--chakra-colors-pink-600:#B83280;--chakra-colors-pink-700:#97266D;--chakra-colors-pink-800:#702459;--chakra-colors-pink-900:#521B41;--chakra-colors-linkedin-50:#E8F4F9;--chakra-colors-linkedin-100:#CFEDFB;--chakra-colors-linkedin-200:#9BDAF3;--chakra-colors-linkedin-300:#68C7EC;--chakra-colors-linkedin-400:#34B3E4;--chakra-colors-linkedin-500:#00A0DC;--chakra-colors-linkedin-600:#008CC9;--chakra-colors-linkedin-700:#0077B5;--chakra-colors-linkedin-800:#005E93;--chakra-colors-linkedin-900:#004471;--chakra-colors-facebook-50:#E8F4F9;--chakra-colors-facebook-100:#D9DEE9;--chakra-colors-facebook-200:#B7C2DA;--chakra-colors-facebook-300:#6482C0;--chakra-colors-facebook-400:#4267B2;--chakra-colors-facebook-500:#385898;--chakra-colors-facebook-600:#314E89;--chakra-colors-facebook-700:#29487D;--chakra-colors-facebook-800:#223B67;--chakra-colors-facebook-900:#1E355B;--chakra-colors-messenger-50:#D0E6FF;--chakra-colors-messenger-100:#B9DAFF;--chakra-colors-messenger-200:#A2CDFF;--chakra-colors-messenger-300:#7AB8FF;--chakra-colors-messenger-400:#2E90FF;--chakra-colors-messenger-500:#0078FF;--chakra-colors-messenger-600:#0063D1;--chakra-colors-messenger-700:#0052AC;--chakra-colors-messenger-800:#003C7E;--chakra-colors-messenger-900:#002C5C;--chakra-colors-whatsapp-50:#dffeec;--chakra-colors-whatsapp-100:#b9f5d0;--chakra-colors-whatsapp-200:#90edb3;--chakra-colors-whatsapp-300:#65e495;--chakra-colors-whatsapp-400:#3cdd78;--chakra-colors-whatsapp-500:#22c35e;--chakra-colors-whatsapp-600:#179848;--chakra-colors-whatsapp-700:#0c6c33;--chakra-colors-whatsapp-800:#01421c;--chakra-colors-whatsapp-900:#001803;--chakra-colors-twitter-50:#E5F4FD;--chakra-colors-twitter-100:#C8E9FB;--chakra-colors-twitter-200:#A8DCFA;--chakra-colors-twitter-300:#83CDF7;--chakra-colors-twitter-400:#57BBF5;--chakra-colors-twitter-500:#1DA1F2;--chakra-colors-twitter-600:#1A94DA;--chakra-colors-twitter-700:#1681BF;--chakra-colors-twitter-800:#136B9E;--chakra-colors-twitter-900:#0D4D71;--chakra-colors-telegram-50:#E3F2F9;--chakra-colors-telegram-100:#C5E4F3;--chakra-colors-telegram-200:#A2D4EC;--chakra-colors-telegram-300:#7AC1E4;--chakra-colors-telegram-400:#47A9DA;--chakra-colors-telegram-500:#0088CC;--chakra-colors-telegram-600:#007AB8;--chakra-colors-telegram-700:#006BA1;--chakra-colors-telegram-800:#005885;--chakra-colors-telegram-900:#003F5E;--chakra-colors-magenta-light-10:#FFE8EF;--chakra-colors-magenta-light-20:#FFCADF;--chakra-colors-magenta-light-30:#FFBAD8;--chakra-colors-magenta-light-40:#FF9CCD;--chakra-colors-magenta-light-50:#FF70B0;--chakra-colors-magenta-light-60:#F74397;--chakra-colors-magenta-light-70:#DE2C7F;--chakra-colors-magenta-light-80:#BF0659;--chakra-colors-magenta-light-90:#860246;--chakra-colors-magenta-light-100:#4D002E;--chakra-colors-magenta-dark-10:#4D002E;--chakra-colors-magenta-dark-20:#770747;--chakra-colors-magenta-dark-30:#A21962;--chakra-colors-magenta-dark-40:#CC317F;--chakra-colors-magenta-dark-50:#F7529F;--chakra-colors-magenta-dark-60:#F969A7;--chakra-colors-magenta-dark-70:#FF96C2;--chakra-colors-magenta-dark-80:#FCACC9;--chakra-colors-magenta-dark-90:#FDCDDE;--chakra-colors-magenta-dark-100:#FFF0F5;--chakra-colors-fixed-light-black:#000000;--chakra-colors-fixed-light-white:#FFFFFF;--chakra-colors-fixed-dark-black:#000000;--chakra-colors-fixed-dark-white:#FFFFFF;--chakra-colors-background-light-index:#F5F5F5;--chakra-colors-background-light-inverse:#2A2A2A;--chakra-colors-background-dark-index:#1A1A1A;--chakra-colors-background-dark-inverse:#DFDFDF;--chakra-colors-layer-light-01:#FFFFFF;--chakra-colors-layer-light-02:#F5F5F5;--chakra-colors-layer-light-03:#FFFFFF;--chakra-colors-layer-light-04:rgba(0,
  0,
  0,
  0.60);--chakra-colors-layer-dark-01:#2A2A2A;--chakra-colors-layer-dark-02:#525252;--chakra-colors-layer-dark-03:#777777;--chakra-colors-layer-dark-04:rgba(255,
  255,
  255,
  0.60);--chakra-colors-text-light-primary:#1A1A1A;--chakra-colors-text-light-secondary:rgba(26,
  26,
  26,
  0.75);--chakra-colors-text-light-tertiary:rgba(82,
  82,
  82,
  0.60);--chakra-colors-text-light-quaternary:rgba(82,
  82,
  82,
  0.30);--chakra-colors-text-light-inverse:#FFFFFF;--chakra-colors-text-light-error:#FF334B;--chakra-colors-text-dark-primary:#F5F5F5;--chakra-colors-text-dark-secondary:rgba(245,
  245,
  245,
  0.75);--chakra-colors-text-dark-tertiary:rgba(183,
  183,
  183,
  0.60);--chakra-colors-text-dark-quaternary:rgba(183,
  183,
  183,
  0.30);--chakra-colors-text-dark-inverse:#1A1A1A;--chakra-colors-text-dark-error:#FF5967;--chakra-colors-fill-light-01:rgba(0,
  0,
  0,
  0.05);--chakra-colors-fill-light-02:rgba(0,
  0,
  0,
  0.08);--chakra-colors-fill-light-03:rgba(0,
  0,
  0,
  0.14);--chakra-colors-fill-dark-01:rgba(255,
  255,
  255,
  0.08);--chakra-colors-fill-dark-02:rgba(255,
  255,
  255,
  0.12);--chakra-colors-fill-dark-03:rgba(255,
  255,
  255,
  0.2);--chakra-colors-icon-light-primary:#525252;--chakra-colors-icon-light-secondary:#949494;--chakra-colors-icon-light-tertiary:#B7B7B7;--chakra-colors-icon-light-inverse:#FFFFFF;--chakra-colors-icon-dark-primary:#B7B7B7;--chakra-colors-icon-dark-secondary:#777777;--chakra-colors-icon-dark-tertiary:#525252;--chakra-colors-icon-dark-inverse:#1A1A1A;--chakra-colors-button-light-primary:#212121;--chakra-colors-button-light-primaryHover:#2A2A2A;--chakra-colors-button-light-primaryActive:#1A1A1A;--chakra-colors-button-light-theme:#15BD66;--chakra-colors-button-light-themeHover:#35DB80;--chakra-colors-button-light-themeActive:#18A352;--chakra-colors-button-light-secondary:rgba(0,
  0,
  0,
  0.05);--chakra-colors-button-light-secondaryHover:rgba(0,
  0,
  0,
  0.03);--chakra-colors-button-light-secondaryActive:rgba(0,
  0,
  0,
  0.08);--chakra-colors-button-light-danger:#FF334B;--chakra-colors-button-light-dangerHover:#FF697A;--chakra-colors-button-light-dangerActive:#D2203A;--chakra-colors-button-dark-primary:#E8E8E8;--chakra-colors-button-dark-primaryHover:#F5F5F5;--chakra-colors-button-dark-primaryActive:#DFDFDF;--chakra-colors-button-dark-theme:#3FCA7D;--chakra-colors-button-dark-themeHover:#63D794;--chakra-colors-button-dark-themeActive:#2EBD73;--chakra-colors-button-dark-secondary:rgba(255,
  255,
  255,
  0.08);--chakra-colors-button-dark-secondaryHover:rgba(255,
  255,
  255,
  0.12);--chakra-colors-button-dark-secondaryActive:rgba(255,
  255,
  255,
  0.03);--chakra-colors-button-dark-danger:#FF5967;--chakra-colors-button-dark-dangerHover:#FF7D84;--chakra-colors-button-dark-dangerActive:#FF475D;--chakra-colors-system-light-primary:#007AFF;--chakra-colors-system-light-primaryHover:#2E9AFF;--chakra-colors-system-light-primaryActive:#2E9AFF;--chakra-colors-system-dark-primary:#2696FF;--chakra-colors-system-dark-primaryHover:#57B3FF;--chakra-colors-system-dark-primaryActive:#1F8AFF;--chakra-colors-support-light-error:#FF334B;--chakra-colors-support-light-errorBackground:rgba(255,
  51,
  75,
  0.12);--chakra-colors-support-light-success:#15BD66;--chakra-colors-support-light-successBackground:rgba(21,
  189,
  102,
  0.12);--chakra-colors-support-light-warning:#FFB800;--chakra-colors-support-light-warningBackground:rgba(255,
  184,
  0,
  0.12);--chakra-colors-support-light-info:#007AFF;--chakra-colors-support-light-infoBackground:rgba(0,
  122,
  255,
  0.12);--chakra-colors-support-dark-error:#FF5967;--chakra-colors-support-dark-errorBackground:rgba(255,
  89,
  103,
  0.12);--chakra-colors-support-dark-success:#3FCA7D;--chakra-colors-support-dark-successBackground:rgba(63,
  202,
  125,
  0.12);--chakra-colors-support-dark-warning:#FFC926;--chakra-colors-support-dark-warningBackground:rgba(255,
  201,
  38,
  0.12);--chakra-colors-support-dark-info:#2696FF;--chakra-colors-support-dark-infoBackground:rgba(38,
  150,
  255,
  0.12);--chakra-borders-none:0;--chakra-borders-1px:1px solid;--chakra-borders-2px:2px solid;--chakra-borders-4px:4px solid;--chakra-borders-8px:8px solid;--chakra-fonts-heading:-apple-system,BlinkMacSystemFont,"Segoe UI",Helvetica,Arial,sans-serif,"Apple Color Emoji","Segoe UI Emoji","Segoe UI Symbol";--chakra-fonts-body:-apple-system,BlinkMacSystemFont,"Segoe UI",Helvetica,Arial,sans-serif,"Apple Color Emoji","Segoe UI Emoji","Segoe UI Symbol";--chakra-fonts-mono:SFMono-Regular,Menlo,Monaco,Consolas,"Liberation Mono","Courier New",monospace;--chakra-fontSizes-xs:0.75rem;--chakra-fontSizes-sm:0.875rem;--chakra-fontSizes-md:1rem;--chakra-fontSizes-lg:1.125rem;--chakra-fontSizes-xl:1.25rem;--chakra-fontSizes-2xl:1.5rem;--chakra-fontSizes-3xl:1.875rem;--chakra-fontSizes-4xl:2.25rem;--chakra-fontSizes-5xl:3rem;--chakra-fontSizes-6xl:3.75rem;--chakra-fontSizes-7xl:4.5rem;--chakra-fontSizes-8xl:6rem;--chakra-fontSizes-9xl:8rem;--chakra-fontWeights-hairline:100;--chakra-fontWeights-thin:200;--chakra-fontWeights-light:300;--chakra-fontWeights-normal:400;--chakra-fontWeights-medium:500;--chakra-fontWeights-semibold:600;--chakra-fontWeights-bold:700;--chakra-fontWeights-extrabold:800;--chakra-fontWeights-black:900;--chakra-letterSpacings-tighter:-0.05em;--chakra-letterSpacings-tight:-0.025em;--chakra-letterSpacings-normal:0;--chakra-letterSpacings-wide:0.025em;--chakra-letterSpacings-wider:0.05em;--chakra-letterSpacings-widest:0.1em;--chakra-lineHeights-3:.75rem;--chakra-lineHeights-4:1rem;--chakra-lineHeights-5:1.25rem;--chakra-lineHeights-6:1.5rem;--chakra-lineHeights-7:1.75rem;--chakra-lineHeights-8:2rem;--chakra-lineHeights-9:2.25rem;--chakra-lineHeights-10:2.5rem;--chakra-lineHeights-normal:normal;--chakra-lineHeights-none:1;--chakra-lineHeights-shorter:1.25;--chakra-lineHeights-short:1.375;--chakra-lineHeights-base:1.5;--chakra-lineHeights-tall:1.625;--chakra-lineHeights-taller:2;--chakra-radii-none:0;--chakra-radii-sm:0.125rem;--chakra-radii-base:0.25rem;--chakra-radii-md:0.375rem;--chakra-radii-lg:0.5rem;--chakra-radii-xl:0.75rem;--chakra-radii-2xl:1rem;--chakra-radii-3xl:1.5rem;--chakra-radii-full:9999px;--chakra-space-1:0.25rem;--chakra-space-2:0.5rem;--chakra-space-3:0.75rem;--chakra-space-4:1rem;--chakra-space-5:1.25rem;--chakra-space-6:1.5rem;--chakra-space-7:1.75rem;--chakra-space-8:2rem;--chakra-space-9:2.25rem;--chakra-space-10:2.5rem;--chakra-space-12:3rem;--chakra-space-14:3.5rem;--chakra-space-16:4rem;--chakra-space-20:5rem;--chakra-space-24:6rem;--chakra-space-28:7rem;--chakra-space-32:8rem;--chakra-space-36:9rem;--chakra-space-40:10rem;--chakra-space-44:11rem;--chakra-space-48:12rem;--chakra-space-52:13rem;--chakra-space-56:14rem;--chakra-space-60:15rem;--chakra-space-64:16rem;--chakra-space-72:18rem;--chakra-space-80:20rem;--chakra-space-96:24rem;--chakra-space-px:1px;--chakra-space-0-5:0.125rem;--chakra-space-1-5:0.375rem;--chakra-space-2-5:0.625rem;--chakra-space-3-5:0.875rem;--chakra-shadows-xs:0 0 0 1px rgba(0, 0, 0, 0.05);--chakra-shadows-sm:0 1px 2px 0 rgba(0, 0, 0, 0.05);--chakra-shadows-base:0 1px 3px 0 rgba(0, 0, 0, 0.1),0 1px 2px 0 rgba(0, 0, 0, 0.06);--chakra-shadows-md:0 4px 6px -1px rgba(0, 0, 0, 0.1),0 2px 4px -1px rgba(0, 0, 0, 0.06);--chakra-shadows-lg:0 10px 15px -3px rgba(0, 0, 0, 0.1),0 4px 6px -2px rgba(0, 0, 0, 0.05);--chakra-shadows-xl:0 20px 25px -5px rgba(0, 0, 0, 0.1),0 10px 10px -5px rgba(0, 0, 0, 0.04);--chakra-shadows-2xl:0 25px 50px -12px rgba(0, 0, 0, 0.25);--chakra-shadows-outline:0 0 0 3px rgba(66, 153, 225, 0.6);--chakra-shadows-inner:inset 0 2px 4px 0 rgba(0,0,0,0.06);--chakra-shadows-none:none;--chakra-shadows-dark-lg:rgba(0, 0, 0, 0.1) 0px 0px 0px 1px,rgba(0, 0, 0, 0.2) 0px 5px 10px,rgba(0, 0, 0, 0.4) 0px 15px 40px;--chakra-sizes-1:0.25rem;--chakra-sizes-2:0.5rem;--chakra-sizes-3:0.75rem;--chakra-sizes-4:1rem;--chakra-sizes-5:1.25rem;--chakra-sizes-6:1.5rem;--chakra-sizes-7:1.75rem;--chakra-sizes-8:2rem;--chakra-sizes-9:2.25rem;--chakra-sizes-10:2.5rem;--chakra-sizes-12:3rem;--chakra-sizes-14:3.5rem;--chakra-sizes-16:4rem;--chakra-sizes-20:5rem;--chakra-sizes-24:6rem;--chakra-sizes-28:7rem;--chakra-sizes-32:8rem;--chakra-sizes-36:9rem;--chakra-sizes-40:10rem;--chakra-sizes-44:11rem;--chakra-sizes-48:12rem;--chakra-sizes-52:13rem;--chakra-sizes-56:14rem;--chakra-sizes-60:15rem;--chakra-sizes-64:16rem;--chakra-sizes-72:18rem;--chakra-sizes-80:20rem;--chakra-sizes-96:24rem;--chakra-sizes-px:1px;--chakra-sizes-0-5:0.125rem;--chakra-sizes-1-5:0.375rem;--chakra-sizes-2-5:0.625rem;--chakra-sizes-3-5:0.875rem;--chakra-sizes-max:max-content;--chakra-sizes-min:min-content;--chakra-sizes-full:100%;--chakra-sizes-3xs:14rem;--chakra-sizes-2xs:16rem;--chakra-sizes-xs:20rem;--chakra-sizes-sm:24rem;--chakra-sizes-md:28rem;--chakra-sizes-lg:32rem;--chakra-sizes-xl:36rem;--chakra-sizes-2xl:42rem;--chakra-sizes-3xl:48rem;--chakra-sizes-4xl:56rem;--chakra-sizes-5xl:64rem;--chakra-sizes-6xl:72rem;--chakra-sizes-7xl:80rem;--chakra-sizes-8xl:90rem;--chakra-sizes-container-sm:640px;--chakra-sizes-container-md:768px;--chakra-sizes-container-lg:1024px;--chakra-sizes-container-xl:1280px;--chakra-zIndices-hide:-1;--chakra-zIndices-auto:auto;--chakra-zIndices-base:0;--chakra-zIndices-docked:10;--chakra-zIndices-dropdown:1000;--chakra-zIndices-sticky:1100;--chakra-zIndices-banner:1200;--chakra-zIndices-overlay:1300;--chakra-zIndices-modal:1400;--chakra-zIndices-popover:1500;--chakra-zIndices-skipLink:1600;--chakra-zIndices-toast:1700;--chakra-zIndices-tooltip:1800;--chakra-transition-property-common:background-color,border-color,color,fill,stroke,opacity,box-shadow,transform;--chakra-transition-property-colors:background-color,border-color,color,fill,stroke;--chakra-transition-property-dimensions:width,height;--chakra-transition-property-position:left,right,top,bottom;--chakra-transition-property-background:background-color,background-image,background-position;--chakra-transition-easing-ease-in:cubic-bezier(0.4, 0, 1, 1);--chakra-transition-easing-ease-out:cubic-bezier(0, 0, 0.2, 1);--chakra-transition-easing-ease-in-out:cubic-bezier(0.4, 0, 0.2, 1);--chakra-transition-duration-ultra-fast:50ms;--chakra-transition-duration-faster:100ms;--chakra-transition-duration-fast:150ms;--chakra-transition-duration-normal:200ms;--chakra-transition-duration-slow:300ms;--chakra-transition-duration-slower:400ms;--chakra-transition-duration-ultra-slow:500ms;--chakra-blur-none:0;--chakra-blur-sm:4px;--chakra-blur-base:8px;--chakra-blur-md:12px;--chakra-blur-lg:16px;--chakra-blur-xl:24px;--chakra-blur-2xl:40px;--chakra-blur-3xl:64px;--chakra-colors-red10:#FFE9E8;--chakra-colors-red20:#FFCCCB;--chakra-colors-red30:#FFB7BA;--chakra-colors-red40:#FF96A3;--chakra-colors-red50:#FF697A;--chakra-colors-red60:#FF334B;--chakra-colors-red70:#D2203A;--chakra-colors-red80:#A6112C;--chakra-colors-red90:#79061F;--chakra-colors-red100:#4D0013;--chakra-colors-magenta10:#FFE8EF;--chakra-colors-magenta20:#FFCADF;--chakra-colors-magenta30:#FFBAD8;--chakra-colors-magenta40:#FF9CCD;--chakra-colors-magenta50:#FF70B0;--chakra-colors-magenta60:#F74397;--chakra-colors-magenta70:#DE2C7F;--chakra-colors-magenta80:#BF0659;--chakra-colors-magenta90:#860246;--chakra-colors-magenta100:#4D002E;--chakra-colors-purple10:#FBE8FF;--chakra-colors-purple20:#EFC7F8;--chakra-colors-purple30:#E1A8F2;--chakra-colors-purple40:#D18AEB;--chakra-colors-purple50:#C16DE5;--chakra-colors-purple60:#AF52DE;--chakra-colors-purple70:#8833BA;--chakra-colors-purple80:#651C95;--chakra-colors-purple90:#440A71;--chakra-colors-purple100:#29004D;--chakra-colors-blue10:#E8F7FF;--chakra-colors-blue20:#BAE4FF;--chakra-colors-blue30:#8BCFFF;--chakra-colors-blue40:#5DB6FF;--chakra-colors-blue50:#2E9AFF;--chakra-colors-blue60:#007AFF;--chakra-colors-blue70:#005FD2;--chakra-colors-blue80:#0045A6;--chakra-colors-blue90:#002E79;--chakra-colors-blue100:#001B4D;--chakra-colors-teal10:#E8FFFB;--chakra-colors-teal20:#BCF6EE;--chakra-colors-teal30:#92EDE4;--chakra-colors-teal40:#47DAD5;--chakra-colors-teal50:#26D1D1;--chakra-colors-teal60:#1CB8B8;--chakra-colors-teal70:#10A1A1;--chakra-colors-teal80:#107575;--chakra-colors-teal90:#155C5C;--chakra-colors-teal100:#00424D;--chakra-colors-green10:#E8FFEF;--chakra-colors-green20:#B5F2CB;--chakra-colors-green30:#93EDBF;--chakra-colors-green40:#64E8A4;--chakra-colors-green50:#35DB80;--chakra-colors-green60:#15BD66;--chakra-colors-green70:#18A352;--chakra-colors-green80:#07854C;--chakra-colors-green90:#03693E;--chakra-colors-green100:#004D2F;--chakra-colors-yellow10:#FFFCE6;--chakra-colors-yellow20:#FFF1A3;--chakra-colors-yellow30:#FFE77A;--chakra-colors-yellow40:#FFD952;--chakra-colors-yellow50:#FFC929;--chakra-colors-yellow60:#FFB800;--chakra-colors-yellow70:#D99400;--chakra-colors-yellow80:#B37400;--chakra-colors-yellow90:#8C5600;--chakra-colors-yellow100:#663C00;--chakra-colors-gray10:#F5F5F5;--chakra-colors-gray20:#E8E8E8;--chakra-colors-gray30:#DFDFDF;--chakra-colors-gray40:#B7B7B7;--chakra-colors-gray50:#949494;--chakra-colors-gray60:#777777;--chakra-colors-gray70:#525252;--chakra-colors-gray80:#2A2A2A;--chakra-colors-gray90:#212121;--chakra-colors-gray100:#1A1A1A;--chakra-colors-fixedBlack:#000000;--chakra-colors-fixedWhite:#FFFFFF;--chakra-colors-backgroundIndex:#F5F5F5;--chakra-colors-backgroundInverse:#2A2A2A;--chakra-colors-layer01:#FFFFFF;--chakra-colors-layer02:#F5F5F5;--chakra-colors-layer03:#FFFFFF;--chakra-colors-layer04:rgba(0,
  0,
  0,
  0.60);--chakra-colors-textPrimary:#1A1A1A;--chakra-colors-textSecondary:rgba(26,
  26,
  26,
  0.75);--chakra-colors-textTertiary:rgba(82,
  82,
  82,
  0.60);--chakra-colors-textQuaternary:rgba(82,
  82,
  82,
  0.30);--chakra-colors-textInverse:#FFFFFF;--chakra-colors-textError:#FF334B;--chakra-colors-fill01:rgba(0,
  0,
  0,
  0.05);--chakra-colors-fill02:rgba(0,
  0,
  0,
  0.08);--chakra-colors-fill03:rgba(0,
  0,
  0,
  0.14);--chakra-colors-iconPrimary:#525252;--chakra-colors-iconSecondary:#949494;--chakra-colors-iconTertiary:#B7B7B7;--chakra-colors-iconInverse:#FFFFFF;--chakra-colors-buttonPrimary:#212121;--chakra-colors-buttonPrimaryHover:#2A2A2A;--chakra-colors-buttonPrimaryActive:#1A1A1A;--chakra-colors-buttonTheme:#15BD66;--chakra-colors-buttonThemeHover:#35DB80;--chakra-colors-buttonThemeActive:#18A352;--chakra-colors-buttonSecondary:rgba(0,
  0,
  0,
  0.05);--chakra-colors-buttonSecondaryHover:rgba(0,
  0,
  0,
  0.03);--chakra-colors-buttonSecondaryActive:rgba(0,
  0,
  0,
  0.08);--chakra-colors-buttonDanger:#FF334B;--chakra-colors-buttonDangerHover:#FF697A;--chakra-colors-buttonDangerActive:#D2203A;--chakra-colors-systemPrimary:#007AFF;--chakra-colors-systemPrimaryHover:#2E9AFF;--chakra-colors-systemPrimaryActive:#2E9AFF;--chakra-colors-supportError:#FF334B;--chakra-colors-supportErrorBackground:rgba(255,
  51,
  75,
  0.12);--chakra-colors-supportSuccess:#15BD66;--chakra-colors-supportSuccessBackground:rgba(21,
  189,
  102,
  0.12);--chakra-colors-supportWarning:#FFB800;--chakra-colors-supportWarningBackground:rgba(255,
  184,
  0,
  0.12);--chakra-colors-supportInfo:#007AFF;--chakra-colors-supportInfoBackground:rgba(0,
  122,
  255,
  0.12);--chakra-shadows-down01:0px 2px 6px rgba(0, 0, 0, 0.04),0px 4px 8px rgba(0, 0, 0, 0.02),0px 6px 12px rgba(0, 0, 0, 0.02);--chakra-shadows-down02:0px 4px 16px rgba(0, 0, 0, 0.04),0px 8px 32px rgba(0, 0, 0, 0.04),0px 12px 48px rgba(0, 0, 0, 0.04);--chakra-shadows-down03:0px 16px 40px rgba(0, 0, 0, 0.08),0px 24px 48px rgba(0, 0, 0, 0.06),0px 32px 64px rgba(0, 0, 0, 0.04);--chakra-shadows-up01:0px -2px 4px rgba(0, 0, 0, 0.02),0px -4px 8px rgba(0, 0, 0, 0.02),0px -6px 12px rgba(0, 0, 0, 0.02);--chakra-shadows-up02:0px -4px 16px rgba(0, 0, 0, 0.04),0px -8px 32px rgba(0, 0, 0, 0.04),0px -12px 48px rgba(0, 0, 0, 0.04);--chakra-shadows-up03:0px -16px 40px rgba(0, 0, 0, 0.08),0px -24px 48px rgba(0, 0, 0, 0.06),0px -32px 64px rgba(0, 0, 0, 0.04);--chakra-shadows-left01:-2px 0px 4px rgba(0, 0, 0, 0.02),-4px 0px 8px rgba(0, 0, 0, 0.02),-6px 0px 12px rgba(0, 0, 0, 0.02);--chakra-shadows-left02:-4px 0px 16px rgba(0, 0, 0, 0.04),-8px 0px 32px rgba(0, 0, 0, 0.04),-12px 0px 48px rgba(0, 0, 0, 0.04);--chakra-shadows-left03:-16px 0px 40px rgba(0, 0, 0, 0.08),-24px 0px 48px rgba(0, 0, 0, 0.06),-32px 0px 64px rgba(0, 0, 0, 0.04);--chakra-shadows-right01:2px 0px 4px rgba(0, 0, 0, 0.02),4px 0px 8px rgba(0, 0, 0, 0.02),6px 0px 12px rgba(0, 0, 0, 0.02);--chakra-shadows-right02:4px 0px 16px rgba(0, 0, 0, 0.04),8px 0px 32px rgba(0, 0, 0, 0.04),12px 0px 48px rgba(0, 0, 0, 0.04);--chakra-shadows-right03:16px 0px 40px rgba(0, 0, 0, 0.08),24px 0px 48px rgba(0, 0, 0, 0.06),32px 0px 64px rgba(0, 0, 0, 0.04);}.chakra-ui-light :host:not([data-theme]),.chakra-ui-light :root:not([data-theme]),.chakra-ui-light [data-theme]:not([data-theme]),[data-theme=light] :host:not([data-theme]),[data-theme=light] :root:not([data-theme]),[data-theme=light] [data-theme]:not([data-theme]),:host[data-theme=light],:root[data-theme=light],[data-theme][data-theme=light]{--chakra-colors-chakra-body-text:var(--chakra-colors-gray-800);--chakra-colors-chakra-body-bg:var(--chakra-colors-white);--chakra-colors-chakra-border-color:var(--chakra-colors-gray-200);--chakra-colors-chakra-placeholder-color:var(--chakra-colors-gray-500);}.chakra-ui-dark :host:not([data-theme]),.chakra-ui-dark :root:not([data-theme]),.chakra-ui-dark [data-theme]:not([data-theme]),[data-theme=dark] :host:not([data-theme]),[data-theme=dark] :root:not([data-theme]),[data-theme=dark] [data-theme]:not([data-theme]),:host[data-theme=dark],:root[data-theme=dark],[data-theme][data-theme=dark]{--chakra-colors-chakra-body-text:var(--chakra-colors-whiteAlpha-900);--chakra-colors-chakra-body-bg:var(--chakra-colors-gray-800);--chakra-colors-chakra-border-color:var(--chakra-colors-whiteAlpha-300);--chakra-colors-chakra-placeholder-color:var(--chakra-colors-whiteAlpha-400);--chakra-colors-red10:#4D0013;--chakra-colors-red20:#941E33;--chakra-colors-red30:#B82E43;--chakra-colors-red40:#DB4253;--chakra-colors-red50:#FF475D;--chakra-colors-red60:#FF5967;--chakra-colors-red70:#FF7D84;--chakra-colors-red80:#FFA1A2;--chakra-colors-red90:#FFC5C4;--chakra-colors-red100:#FFE9E8;--chakra-colors-magenta10:#4D002E;--chakra-colors-magenta20:#770747;--chakra-colors-magenta30:#A21962;--chakra-colors-magenta40:#CC317F;--chakra-colors-magenta50:#F7529F;--chakra-colors-magenta60:#F969A7;--chakra-colors-magenta70:#FF96C2;--chakra-colors-magenta80:#FCACC9;--chakra-colors-magenta90:#FDCDDE;--chakra-colors-magenta100:#FFF0F5;--chakra-colors-purple10:#29004D;--chakra-colors-purple20:#440971;--chakra-colors-purple30:#651C95;--chakra-colors-purple40:#8A38BA;--chakra-colors-purple50:#B25BDE;--chakra-colors-purple60:#C477E5;--chakra-colors-purple70:#D392EA;--chakra-colors-purple80:#E1B0EF;--chakra-colors-purple90:#F0CBF8;--chakra-colors-purple100:#FBEAFF;--chakra-colors-blue10:#001B4D;--chakra-colors-blue20:#043079;--chakra-colors-blue30:#0A4BA6;--chakra-colors-blue40:#1369D2;--chakra-colors-blue50:#1F8AFF;--chakra-colors-blue60:#2696FF;--chakra-colors-blue70:#57B3FF;--chakra-colors-blue80:#87CDFF;--chakra-colors-blue90:#B8E3FF;--chakra-colors-blue100:#E8F7FF;--chakra-colors-teal10:#00424D;--chakra-colors-teal20:#035D67;--chakra-colors-teal30:#0F7A82;--chakra-colors-teal40:#1E989D;--chakra-colors-teal50:#32B8B8;--chakra-colors-teal60:#46C6C2;--chakra-colors-teal70:#68D4CD;--chakra-colors-teal80:#90E3DB;--chakra-colors-teal90:#BAF1E9;--chakra-colors-teal100:#E9FFFB;--chakra-colors-green10:#004D2F;--chakra-colors-green20:#03693E;--chakra-colors-green30:#0D854F;--chakra-colors-green40:#1CA161;--chakra-colors-green50:#2EBD73;--chakra-colors-green60:#3FCA7D;--chakra-colors-green70:#63D794;--chakra-colors-green80:#8CE5AE;--chakra-colors-green90:#B8F2CD;--chakra-colors-green100:#E8FFEF;--chakra-colors-yellow10:#4D2D00;--chakra-colors-yellow20:#794C04;--chakra-colors-yellow30:#A66F0A;--chakra-colors-yellow40:#D29613;--chakra-colors-yellow50:#FFC11F;--chakra-colors-yellow60:#FFC926;--chakra-colors-yellow70:#FFDB57;--chakra-colors-yellow80:#FFE987;--chakra-colors-yellow90:#FFF5B8;--chakra-colors-yellow100:#FFFCE8;--chakra-colors-gray10:#1A1A1A;--chakra-colors-gray20:#212121;--chakra-colors-gray30:#2A2A2A;--chakra-colors-gray40:#525252;--chakra-colors-gray50:#777777;--chakra-colors-gray60:#949494;--chakra-colors-gray70:#B7B7B7;--chakra-colors-gray80:#DFDFDF;--chakra-colors-gray90:#E8E8E8;--chakra-colors-gray100:#F5F5F5;--chakra-colors-fixedBlack:#000000;--chakra-colors-fixedWhite:#FFFFFF;--chakra-colors-backgroundIndex:#1A1A1A;--chakra-colors-backgroundInverse:#DFDFDF;--chakra-colors-layer01:#2A2A2A;--chakra-colors-layer02:#525252;--chakra-colors-layer03:#777777;--chakra-colors-layer04:rgba(255,
  255,
  255,
  0.60);--chakra-colors-textPrimary:#F5F5F5;--chakra-colors-textSecondary:rgba(245,
  245,
  245,
  0.75);--chakra-colors-textTertiary:rgba(183,
  183,
  183,
  0.60);--chakra-colors-textQuaternary:rgba(183,
  183,
  183,
  0.30);--chakra-colors-textInverse:#1A1A1A;--chakra-colors-textError:#FF5967;--chakra-colors-fill01:rgba(255,
  255,
  255,
  0.08);--chakra-colors-fill02:rgba(255,
  255,
  255,
  0.12);--chakra-colors-fill03:rgba(255,
  255,
  255,
  0.2);--chakra-colors-iconPrimary:#B7B7B7;--chakra-colors-iconSecondary:#777777;--chakra-colors-iconTertiary:#525252;--chakra-colors-iconInverse:#1A1A1A;--chakra-colors-buttonPrimary:#E8E8E8;--chakra-colors-buttonPrimaryHover:#F5F5F5;--chakra-colors-buttonPrimaryActive:#DFDFDF;--chakra-colors-buttonTheme:#3FCA7D;--chakra-colors-buttonThemeHover:#63D794;--chakra-colors-buttonThemeActive:#2EBD73;--chakra-colors-buttonSecondary:rgba(255,
  255,
  255,
  0.08);--chakra-colors-buttonSecondaryHover:rgba(255,
  255,
  255,
  0.12);--chakra-colors-buttonSecondaryActive:rgba(255,
  255,
  255,
  0.03);--chakra-colors-buttonDanger:#FF5967;--chakra-colors-buttonDangerHover:#FF7D84;--chakra-colors-buttonDangerActive:#FF475D;--chakra-colors-systemPrimary:#2696FF;--chakra-colors-systemPrimaryHover:#57B3FF;--chakra-colors-systemPrimaryActive:#1F8AFF;--chakra-colors-supportError:#FF5967;--chakra-colors-supportErrorBackground:rgba(255,
  89,
  103,
  0.12);--chakra-colors-supportSuccess:#3FCA7D;--chakra-colors-supportSuccessBackground:rgba(63,
  202,
  125,
  0.12);--chakra-colors-supportWarning:#FFC926;--chakra-colors-supportWarningBackground:rgba(255,
  201,
  38,
  0.12);--chakra-colors-supportInfo:#2696FF;--chakra-colors-supportInfoBackground:rgba(38,
  150,
  255,
  0.12);--chakra-shadows-down01:0px 2px 4px rgba(0, 0, 0, 0.08),0px 4px 8px rgba(0, 0, 0, 0.08),0px 6px 12px rgba(0, 0, 0, 0.08);--chakra-shadows-down02:0px 4px 16px rgba(0, 0, 0, 0.12),0px 8px 32px rgba(0, 0, 0, 0.12),0px 12px 48px rgba(0, 0, 0, 0.12);--chakra-shadows-down03:0px 16px 40px rgba(0, 0, 0, 0.2),0px 24px 48px rgba(0, 0, 0, 0.16),0px 32px 64px rgba(0, 0, 0, 0.08);--chakra-shadows-up01:0px -2px 4px rgba(0, 0, 0, 0.08),0px -4px 8px rgba(0, 0, 0, 0.08),0px -6px 12px rgba(0, 0, 0, 0.08);--chakra-shadows-up02:0px -4px 16px rgba(0, 0, 0, 0.12),0px -8px 32px rgba(0, 0, 0, 0.12),0px -12px 48px rgba(0, 0, 0, 0.12);--chakra-shadows-up03:0px -16px 40px rgba(0, 0, 0, 0.2),0px -24px 48px rgba(0, 0, 0, 0.16),0px -32px 64px rgba(0, 0, 0, 0.08);--chakra-shadows-left01:-2px 0px 4px rgba(0, 0, 0, 0.08),-4px 0px 8px rgba(0, 0, 0, 0.08),-6px 0px 12px rgba(0, 0, 0, 0.08);--chakra-shadows-left02:-4px 0px 16px rgba(0, 0, 0, 0.12),-8px 0px 32px rgba(0, 0, 0, 0.12),-12px 0px 48px rgba(0, 0, 0, 0.12);--chakra-shadows-left03:-16px 0px 40px rgba(0, 0, 0, 0.2),-24px 0px 48px rgba(0, 0, 0, 0.16),-32px 0px 64px rgba(0, 0, 0, 0.08);--chakra-shadows-right01:2px 0px 4px rgba(0, 0, 0, 0.08),4px 0px 8px rgba(0, 0, 0, 0.08),6px 0px 12px rgba(0, 0, 0, 0.08);--chakra-shadows-right02:4px 0px 16px rgba(0, 0, 0, 0.12),8px 0px 32px rgba(0, 0, 0, 0.12),12px 0px 48px rgba(0, 0, 0, 0.12);--chakra-shadows-right03:16px 0px 40px rgba(0, 0, 0, 0.2),24px 0px 48px rgba(0, 0, 0, 0.16),32px 0px 64px rgba(0, 0, 0, 0.08);}</style><style data-emotion="css-global" data-s="">body{font-family:var(--chakra-fonts-body);color:var(--chakra-colors-chakra-body-text);background:var(--chakra-colors-chakra-body-bg);transition-property:background-color;transition-duration:var(--chakra-transition-duration-normal);line-height:var(--chakra-lineHeights-base);}*::-webkit-input-placeholder{color:var(--chakra-colors-chakra-placeholder-color);}*::-moz-placeholder{color:var(--chakra-colors-chakra-placeholder-color);}*:-ms-input-placeholder{color:var(--chakra-colors-chakra-placeholder-color);}*::placeholder{color:var(--chakra-colors-chakra-placeholder-color);}*,*::before,::after{border-color:var(--chakra-colors-chakra-border-color);word-wrap:break-word;}</style><style data-emotion="css-global" data-s="">html{-webkit-text-size-adjust:100%;touch-action:manipulation;}body{position:relative;min-height:100%;transition-property:none;}*,*::before,*::after{border-width:0;border-style:solid;box-sizing:border-box;}main{display:block;}hr{border-top-width:1px;box-sizing:content-box;height:0;overflow:visible;}pre,code,kbd,samp{font-family:SFMono-Regular,Menlo,Monaco,Consolas,monospace;font-size:1em;}a{background-color:transparent;color:inherit;-webkit-text-decoration:inherit;text-decoration:inherit;}abbr[title]{border-bottom:none;-webkit-text-decoration:underline;text-decoration:underline;-webkit-text-decoration:underline dotted;-webkit-text-decoration:underline dotted;text-decoration:underline dotted;}b,strong{font-weight:bold;}small{font-size:80%;}sub,sup{font-size:75%;line-height:0;position:relative;vertical-align:baseline;}sub{bottom:-0.25em;}sup{top:-0.5em;}img{border-style:none;}button,input,optgroup,select,textarea{font-family:inherit;font-size:100%;line-height:1.15;margin:0;}button,input{overflow:visible;}button,select{text-transform:none;}button::-moz-focus-inner,[type="button"]::-moz-focus-inner,[type="reset"]::-moz-focus-inner,[type="submit"]::-moz-focus-inner{border-style:none;padding:0;}fieldset{padding:0.35em 0.75em 0.625em;}legend{box-sizing:border-box;color:inherit;display:table;max-width:100%;padding:0;white-space:normal;}progress{vertical-align:baseline;}textarea{overflow:auto;}[type="checkbox"],[type="radio"]{box-sizing:border-box;padding:0;}[type="number"]::-webkit-inner-spin-button,[type="number"]::-webkit-outer-spin-button{-webkit-appearance:none!important;}input[type="number"]{-moz-appearance:textfield;}[type="search"]{-webkit-appearance:textfield;outline-offset:-2px;}[type="search"]::-webkit-search-decoration{-webkit-appearance:none!important;}::-webkit-file-upload-button{-webkit-appearance:button;font:inherit;}details{display:block;}summary{display:-webkit-box;display:-webkit-list-item;display:-ms-list-itembox;display:list-item;}template{display:none;}[hidden]{display:none!important;}body,blockquote,dl,dd,h1,h2,h3,h4,h5,h6,hr,figure,p,pre{margin:0;}button{background:transparent;padding:0;}fieldset{margin:0;padding:0;}ol,ul{margin:0;padding:0;}textarea{resize:vertical;}button,[role="button"]{cursor:pointer;}button::-moz-focus-inner{border:0!important;}table{border-collapse:collapse;}h1,h2,h3,h4,h5,h6{font-size:inherit;font-weight:inherit;}button,input,optgroup,select,textarea{padding:0;line-height:inherit;color:inherit;}img,svg,video,canvas,audio,iframe,embed,object{display:block;}img,video{max-width:100%;height:auto;}[data-js-focus-visible] :focus:not([data-focus-visible-added]):not([data-focus-visible-disabled]){outline:none;}select::-ms-expand{display:none;}</style><style data-emotion="css" data-s=""></style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-aria-container {
	position: absolute; /* try to hide from window but not from screen readers */
	left:-999em;
}</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/* -------------------- IE10 remove auto clear button -------------------- */

::-ms-clear {
	display: none;
}

/* All widgets */
/* I am not a big fan of this rule */
.monaco-editor .editor-widget input {
	color: inherit;
}

/* -------------------- Editor -------------------- */

.monaco-editor {
	position: relative;
	overflow: visible;
	-webkit-text-size-adjust: 100%;
}

/* -------------------- Misc -------------------- */

.monaco-editor .overflow-guard {
	position: relative;
	overflow: hidden;
}

.monaco-editor .view-overlays {
	position: absolute;
	top: 0;
}

/*
.monaco-editor .auto-closed-character {
	opacity: 0.3;
}
*/
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .inputarea {
	min-width: 0;
	min-height: 0;
	margin: 0;
	padding: 0;
	position: absolute;
	outline: none !important;
	resize: none;
	border: none;
	overflow: hidden;
	color: transparent;
	background-color: transparent;
}
/*.monaco-editor .inputarea {
	position: fixed !important;
	width: 800px !important;
	height: 500px !important;
	top: initial !important;
	left: initial !important;
	bottom: 0 !important;
	right: 0 !important;
	color: black !important;
	background: white !important;
	line-height: 15px !important;
	font-size: 14px !important;
}*/
.monaco-editor .inputarea.ime-input {
	z-index: 10;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .margin-view-overlays .line-numbers {
	font-variant-numeric: tabular-nums;
	position: absolute;
	text-align: right;
	display: inline-block;
	vertical-align: middle;
	box-sizing: border-box;
	cursor: default;
	height: 100%;
}

.monaco-editor .relative-current-line-number {
	text-align: left;
	display: inline-block;
	width: 100%;
}

.monaco-editor .margin-view-overlays .line-numbers.lh-odd {
	margin-top: 1px;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-mouse-cursor-text {
	cursor: text;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .view-overlays .current-line {
	display: block;
	position: absolute;
	left: 0;
	top: 0;
	box-sizing: border-box;
}

.monaco-editor .margin-view-overlays .current-line {
	display: block;
	position: absolute;
	left: 0;
	top: 0;
	box-sizing: border-box;
}

.monaco-editor .margin-view-overlays .current-line.current-line-margin.current-line-margin-both {
	border-right: 0;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/*
	Keeping name short for faster parsing.
	cdr = core decorations rendering (div)
*/
.monaco-editor .lines-content .cdr {
	position: absolute;
}</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/* Arrows */
.monaco-scrollable-element > .scrollbar > .scra {
	cursor: pointer;
	font-size: 11px !important;
}

.monaco-scrollable-element > .visible {
	opacity: 1;

	/* Background rule added for IE9 - to allow clicks on dom node */
	background:rgba(0,0,0,0);

	transition: opacity 100ms linear;
}
.monaco-scrollable-element > .invisible {
	opacity: 0;
	pointer-events: none;
}
.monaco-scrollable-element > .invisible.fade {
	transition: opacity 800ms linear;
}

/* Scrollable Content Inset Shadow */
.monaco-scrollable-element > .shadow {
	position: absolute;
	display: none;
}
.monaco-scrollable-element > .shadow.top {
	display: block;
	top: 0;
	left: 3px;
	height: 3px;
	width: 100%;
}
.monaco-scrollable-element > .shadow.left {
	display: block;
	top: 3px;
	left: 0;
	height: 100%;
	width: 3px;
}
.monaco-scrollable-element > .shadow.top-left-corner {
	display: block;
	top: 0;
	left: 0;
	height: 3px;
	width: 3px;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .glyph-margin {
	position: absolute;
	top: 0;
}

/*
	Keeping name short for faster parsing.
	cgmr = core glyph margin rendering (div)
*/
.monaco-editor .margin-view-overlays .cgmr {
	position: absolute;
	display: flex;
	align-items: center;
	justify-content: center;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .lines-content .core-guide {
	position: absolute;
	box-sizing: border-box;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/* Uncomment to see lines flashing when they're painted */
/*.monaco-editor .view-lines > .view-line {
	background-color: none;
	animation-name: flash-background;
	animation-duration: 800ms;
}
@keyframes flash-background {
	0%   { background-color: lightgreen; }
	100% { background-color: none }
}*/

.mtkcontrol {
	color: rgb(255, 255, 255) !important;
	background: rgb(150, 0, 0) !important;
}

.monaco-editor.no-user-select .lines-content,
.monaco-editor.no-user-select .view-line,
.monaco-editor.no-user-select .view-lines {
	user-select: none;
	-webkit-user-select: none;
	-ms-user-select: none;
}

.monaco-editor .view-lines {
	white-space: nowrap;
}

.monaco-editor .view-line {
	position: absolute;
	width: 100%;
}

.monaco-editor .mtkz {
	display: inline-block;
}

/* TODO@tokenization bootstrap fix */
/*.monaco-editor .view-line > span > span {
	float: none;
	min-height: inherit;
	margin-left: inherit;
}*/
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
.monaco-editor .lines-decorations {
	position: absolute;
	top: 0;
	background: white;
}

/*
	Keeping name short for faster parsing.
	cldr = core lines decorations rendering (div)
*/
.monaco-editor .margin-view-overlays .cldr {
	position: absolute;
	height: 100%;
}</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/*
	Keeping name short for faster parsing.
	cmdr = core margin decorations rendering (div)
*/
.monaco-editor .margin-view-overlays .cmdr {
	position: absolute;
	left: 0;
	width: 100%;
	height: 100%;
}</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/* START cover the case that slider is visible on mouseover */
.monaco-editor .minimap.slider-mouseover .minimap-slider {
	opacity: 0;
	transition: opacity 100ms linear;
}
.monaco-editor .minimap.slider-mouseover:hover .minimap-slider {
	opacity: 1;
}
.monaco-editor .minimap.slider-mouseover .minimap-slider.active {
	opacity: 1;
}
/* END cover the case that slider is visible on mouseover */

.monaco-editor .minimap-shadow-hidden {
	position: absolute;
	width: 0;
}
.monaco-editor .minimap-shadow-visible {
	position: absolute;
	left: -6px;
	width: 6px;
}
.monaco-editor.no-minimap-shadow .minimap-shadow-visible {
	position: absolute;
	left: -1px;
	width: 1px;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
.monaco-editor .overlayWidgets {
	position: absolute;
	top: 0;
	left:0;
}</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .view-ruler {
	position: absolute;
	top: 0;
}</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .scroll-decoration {
	position: absolute;
	top: 0;
	left: 0;
	height: 6px;
}</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/*
	Keeping name short for faster parsing.
	cslr = core selections layer rendering (div)
*/
.monaco-editor .lines-content .cslr {
	position: absolute;
}

.monaco-editor			.top-left-radius		{ border-top-left-radius: 3px; }
.monaco-editor			.bottom-left-radius		{ border-bottom-left-radius: 3px; }
.monaco-editor			.top-right-radius		{ border-top-right-radius: 3px; }
.monaco-editor			.bottom-right-radius	{ border-bottom-right-radius: 3px; }

.monaco-editor.hc-black .top-left-radius		{ border-top-left-radius: 0; }
.monaco-editor.hc-black .bottom-left-radius		{ border-bottom-left-radius: 0; }
.monaco-editor.hc-black .top-right-radius		{ border-top-right-radius: 0; }
.monaco-editor.hc-black .bottom-right-radius	{ border-bottom-right-radius: 0; }
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
.monaco-editor .cursors-layer {
	position: absolute;
	top: 0;
}

.monaco-editor .cursors-layer > .cursor {
	position: absolute;
	overflow: hidden;
}

/* -- smooth-caret-animation -- */
.monaco-editor .cursors-layer.cursor-smooth-caret-animation > .cursor {
	transition: all 80ms;
}

/* -- block-outline-style -- */
.monaco-editor .cursors-layer.cursor-block-outline-style > .cursor {
	box-sizing: border-box;
	background: transparent !important;
	border-style: solid;
	border-width: 1px;
}

/* -- underline-style -- */
.monaco-editor .cursors-layer.cursor-underline-style > .cursor {
	border-bottom-width: 2px;
	border-bottom-style: solid;
	background: transparent !important;
	box-sizing: border-box;
}

/* -- underline-thin-style -- */
.monaco-editor .cursors-layer.cursor-underline-thin-style > .cursor {
	border-bottom-width: 1px;
	border-bottom-style: solid;
	background: transparent !important;
	box-sizing: border-box;
}

@keyframes monaco-cursor-smooth {
	0%,
	20% {
		opacity: 1;
	}
	60%,
	100% {
		opacity: 0;
	}
}

@keyframes monaco-cursor-phase {
	0%,
	20% {
		opacity: 1;
	}
	90%,
	100% {
		opacity: 0;
	}
}

@keyframes monaco-cursor-expand {
	0%,
	20% {
		transform: scaleY(1);
	}
	80%,
	100% {
		transform: scaleY(0);
	}
}

.cursor-smooth {
	animation: monaco-cursor-smooth 0.5s ease-in-out 0s 20 alternate;
}

.cursor-phase {
	animation: monaco-cursor-phase 0.5s ease-in-out 0s 20 alternate;
}

.cursor-expand > .cursor {
	animation: monaco-cursor-expand 0.5s ease-in-out 0s 20 alternate;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .bracket-match {
	box-sizing: border-box;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor.vs .dnd-target {
	border-right: 2px dotted black;
	color: white; /* opposite of black */
}
.monaco-editor.vs-dark .dnd-target {
	border-right: 2px dotted #AEAFAD;
	color: #51504f; /* opposite of #AEAFAD */
}
.monaco-editor.hc-black .dnd-target {
	border-right: 2px dotted #fff;
	color: #000; /* opposite of #fff */
}

.monaco-editor.mouse-default .view-lines,
.monaco-editor.vs-dark.mac.mouse-default .view-lines,
.monaco-editor.hc-black.mac.mouse-default .view-lines {
	cursor: default;
}
.monaco-editor.mouse-copy .view-lines,
.monaco-editor.vs-dark.mac.mouse-copy .view-lines,
.monaco-editor.hc-black.mac.mouse-copy .view-lines {
	cursor: copy;
}</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-custom-checkbox {
	margin-left: 2px;
	float: left;
	cursor: pointer;
	overflow: hidden;
	width: 20px;
	height: 20px;
	border-radius: 3px;
	border: 1px solid transparent;
	padding: 1px;
	box-sizing:	border-box;
	user-select: none;
	-webkit-user-select: none;
	-ms-user-select: none;
}

.monaco-custom-checkbox:hover {
	background-color: var(--vscode-inputOption-hoverBackground);
}

.hc-black .monaco-custom-checkbox:hover {
	border: 1px dashed var(--vscode-focusBorder);
}

.hc-black .monaco-custom-checkbox {
	background: none;
}

.hc-black .monaco-custom-checkbox:hover {
	background: none;
}

.monaco-custom-checkbox.monaco-simple-checkbox {
	height: 18px;
	width: 18px;
	border: 1px solid transparent;
	border-radius: 3px;
	margin-right: 9px;
	margin-left: 0px;
	padding: 0px;
	opacity: 1;
	background-size: 16px !important;
}

/* hide check when unchecked */
.monaco-custom-checkbox.monaco-simple-checkbox:not(.checked)::before {
	visibility: hidden;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

:root {
	--sash-size: 4px;
}

.monaco-sash {
	position: absolute;
	z-index: 35;
	touch-action: none;
}

.monaco-sash.disabled {
	pointer-events: none;
}

.monaco-sash.mac.vertical {
	cursor: col-resize;
}

.monaco-sash.vertical.minimum {
	cursor: e-resize;
}

.monaco-sash.vertical.maximum {
	cursor: w-resize;
}

.monaco-sash.mac.horizontal {
	cursor: row-resize;
}

.monaco-sash.horizontal.minimum {
	cursor: s-resize;
}

.monaco-sash.horizontal.maximum {
	cursor: n-resize;
}

.monaco-sash.disabled {
	cursor: default !important;
	pointer-events: none !important;
}

.monaco-sash.vertical {
	cursor: ew-resize;
	top: 0;
	width: var(--sash-size);
	height: 100%;
}

.monaco-sash.horizontal {
	cursor: ns-resize;
	left: 0;
	width: 100%;
	height: var(--sash-size);
}

.monaco-sash:not(.disabled) > .orthogonal-drag-handle {
	content: " ";
	height: calc(var(--sash-size) * 2);
	width: calc(var(--sash-size) * 2);
	z-index: 100;
	display: block;
	cursor: all-scroll;
	position: absolute;
}

.monaco-sash.horizontal.orthogonal-edge-north:not(.disabled)
	> .orthogonal-drag-handle.start,
.monaco-sash.horizontal.orthogonal-edge-south:not(.disabled)
	> .orthogonal-drag-handle.end {
	cursor: nwse-resize;
}

.monaco-sash.horizontal.orthogonal-edge-north:not(.disabled)
	> .orthogonal-drag-handle.end,
.monaco-sash.horizontal.orthogonal-edge-south:not(.disabled)
	> .orthogonal-drag-handle.start {
	cursor: nesw-resize;
}

.monaco-sash.vertical > .orthogonal-drag-handle.start {
	left: calc(var(--sash-size) * -0.5);
	top: calc(var(--sash-size) * -1);
}
.monaco-sash.vertical > .orthogonal-drag-handle.end {
	left: calc(var(--sash-size) * -0.5);
	bottom: calc(var(--sash-size) * -1);
}
.monaco-sash.horizontal > .orthogonal-drag-handle.start {
	top: calc(var(--sash-size) * -0.5);
	left: calc(var(--sash-size) * -1);
}
.monaco-sash.horizontal > .orthogonal-drag-handle.end {
	top: calc(var(--sash-size) * -0.5);
	right: calc(var(--sash-size) * -1);
}

.monaco-sash:before {
	content: '';
	pointer-events: none;
	position: absolute;
	width: 100%;
	height: 100%;
	transition: background-color 0.1s ease-out;
	background: transparent;
}

.monaco-sash.vertical:before {
	width: var(--sash-hover-size);
	left: calc(50% - (var(--sash-hover-size) / 2));
}

.monaco-sash.horizontal:before {
	height: var(--sash-hover-size);
	top: calc(50% - (var(--sash-hover-size) / 2));
}

.pointer-events-disabled {
	pointer-events: none !important;
}

/** Debug **/

.monaco-sash.debug {
	background: cyan;
}

.monaco-sash.debug.disabled {
	background: rgba(0, 255, 255, 0.2);
}

.monaco-sash.debug:not(.disabled) > .orthogonal-drag-handle {
	background: red;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/* Find widget */
.monaco-editor .find-widget {
	position: absolute;
	z-index: 35;
	height: 33px;
	overflow: hidden;
	line-height: 19px;
	transition: transform 200ms linear;
	padding: 0 4px;
	box-sizing: border-box;
	transform: translateY(calc(-100% - 10px)); /* shadow (10px) */
}

.monaco-editor .find-widget textarea {
	margin: 0px;
}

.monaco-editor .find-widget.hiddenEditor {
	display: none;
}

/* Find widget when replace is toggled on */
.monaco-editor .find-widget.replaceToggled > .replace-part {
	display: flex;
}

.monaco-editor .find-widget.visible  {
	transform: translateY(0);
}

.monaco-editor .find-widget .monaco-inputbox.synthetic-focus {
	outline: 1px solid -webkit-focus-ring-color;
	outline-offset: -1px;
}

.monaco-editor .find-widget .monaco-inputbox .input {
	background-color: transparent;
	min-height: 0;
}

.monaco-editor .find-widget .monaco-findInput .input {
	font-size: 13px;
}

.monaco-editor .find-widget > .find-part,
.monaco-editor .find-widget > .replace-part {
	margin: 4px 0 0 17px;
	font-size: 12px;
	display: flex;
}

.monaco-editor .find-widget > .find-part .monaco-inputbox,
.monaco-editor .find-widget > .replace-part .monaco-inputbox {
	min-height: 25px;
}


.monaco-editor .find-widget > .replace-part .monaco-inputbox > .ibwrapper > .mirror {
	padding-right: 22px;
}

.monaco-editor .find-widget > .find-part .monaco-inputbox > .ibwrapper > .input,
.monaco-editor .find-widget > .find-part .monaco-inputbox > .ibwrapper > .mirror,
.monaco-editor .find-widget > .replace-part .monaco-inputbox > .ibwrapper > .input,
.monaco-editor .find-widget > .replace-part .monaco-inputbox > .ibwrapper > .mirror {
	padding-top: 2px;
	padding-bottom: 2px;
}

.monaco-editor .find-widget > .find-part .find-actions {
	height: 25px;
	display: flex;
	align-items: center;
}

.monaco-editor .find-widget > .replace-part .replace-actions {
	height: 25px;
	display: flex;
	align-items: center;
}

.monaco-editor .find-widget .monaco-findInput {
	vertical-align: middle;
	display: flex;
	flex:1;
}

.monaco-editor .find-widget .monaco-findInput .monaco-scrollable-element {
	/* Make sure textarea inherits the width correctly */
	width: 100%;
}

.monaco-editor .find-widget .monaco-findInput .monaco-scrollable-element .scrollbar.vertical {
	/* Hide vertical scrollbar */
	opacity: 0;
}

.monaco-editor .find-widget .matchesCount {
	display: flex;
	flex: initial;
	margin: 0 0 0 3px;
	padding: 2px 0 0 2px;
	height: 25px;
	vertical-align: middle;
	box-sizing: border-box;
	text-align: center;
	line-height: 23px;
}

.monaco-editor .find-widget .button {
	width: 16px;
	height: 16px;
	padding: 3px;
	border-radius: 5px;
	display: flex;
	flex: initial;
	margin-left: 3px;
	background-position: center center;
	background-repeat: no-repeat;
	cursor: pointer;
	display: flex;
	align-items: center;
	justify-content: center;
}

/* find in selection button */
.monaco-editor .find-widget .codicon-find-selection {
	width: 22px;
	height: 22px;
	padding: 3px;
	border-radius: 5px;
}

.monaco-editor .find-widget .button.left {
	margin-left: 0;
	margin-right: 3px;
}

.monaco-editor .find-widget .button.wide {
	width: auto;
	padding: 1px 6px;
	top: -1px;
}

.monaco-editor .find-widget .button.toggle {
	position: absolute;
	top: 0;
	left: 3px;
	width: 18px;
	height: 100%;
	border-radius: 0;
	box-sizing: border-box;
}

.monaco-editor .find-widget .button.toggle.disabled {
	display: none;
}

.monaco-editor .find-widget .disabled {
	opacity: 0.3;
	cursor: default;
}

.monaco-editor .find-widget > .replace-part {
	display: none;
}

.monaco-editor .find-widget > .replace-part > .monaco-findInput {
	position: relative;
	display: flex;
	vertical-align: middle;
	flex: auto;
	flex-grow: 0;
	flex-shrink: 0;
}

.monaco-editor .find-widget > .replace-part > .monaco-findInput > .controls {
	position: absolute;
	top: 3px;
	right: 2px;
}

/* REDUCED */
.monaco-editor .find-widget.reduced-find-widget .matchesCount {
	display:none;
}

/* NARROW (SMALLER THAN REDUCED) */
.monaco-editor .find-widget.narrow-find-widget {
	max-width: 257px !important;
}

/* COLLAPSED (SMALLER THAN NARROW) */
.monaco-editor .find-widget.collapsed-find-widget {
	max-width: 170px !important;
}

.monaco-editor .find-widget.collapsed-find-widget .button.previous,
.monaco-editor .find-widget.collapsed-find-widget .button.next,
.monaco-editor .find-widget.collapsed-find-widget .button.replace,
.monaco-editor .find-widget.collapsed-find-widget .button.replace-all,
.monaco-editor .find-widget.collapsed-find-widget > .find-part .monaco-findInput .controls {
	display:none;
}

.monaco-editor .findMatch {
	animation-duration: 0;
	animation-name: inherit !important;
}

.monaco-editor .find-widget .monaco-sash {
	left: 0 !important;
}

.monaco-editor.hc-black .find-widget .button:before {
	position: relative;
	top: 1px;
	left: 2px;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-action-bar {
	white-space: nowrap;
	height: 100%;
}

.monaco-action-bar .actions-container {
	display: flex;
	margin: 0 auto;
	padding: 0;
	height: 100%;
	width: 100%;
	align-items: center;
}

.monaco-action-bar.vertical .actions-container {
	display: inline-block;
}

.monaco-action-bar .action-item {
	display: block;
	align-items: center;
	justify-content: center;
	cursor: pointer;
	position: relative;  /* DO NOT REMOVE - this is the key to preventing the ghosting icon bug in Chrome 42 */
}

.monaco-action-bar .action-item.disabled {
	cursor: default;
}

.monaco-action-bar .action-item .icon,
.monaco-action-bar .action-item .codicon {
	display: block;
}

.monaco-action-bar .action-item .codicon {
	display: flex;
	align-items: center;
	width: 16px;
	height: 16px;
}

.monaco-action-bar .action-label {
	font-size: 11px;
	padding: 3px;
	border-radius: 5px;
}

.monaco-action-bar .action-item.disabled .action-label,
.monaco-action-bar .action-item.disabled .action-label::before,
.monaco-action-bar .action-item.disabled .action-label:hover {
	opacity: 0.4;
}

/* Vertical actions */

.monaco-action-bar.vertical {
	text-align: left;
}

.monaco-action-bar.vertical .action-item {
	display: block;
}

.monaco-action-bar.vertical .action-label.separator {
	display: block;
	border-bottom: 1px solid #bbb;
	padding-top: 1px;
	margin-left: .8em;
	margin-right: .8em;
}

.monaco-action-bar .action-item .action-label.separator {
	width: 1px;
	height: 16px;
	margin: 5px 4px !important;
	cursor: default;
	min-width: 1px;
	padding: 0;
	background-color: #bbb;
}

.secondary-actions .monaco-action-bar .action-label {
	margin-left: 6px;
}

/* Action Items */
.monaco-action-bar .action-item.select-container {
	overflow: hidden; /* somehow the dropdown overflows its container, we prevent it here to not push */
	flex: 1;
	max-width: 170px;
	min-width: 60px;
	display: flex;
	align-items: center;
	justify-content: center;
	margin-right: 10px;
}

.monaco-action-bar .action-item.action-dropdown-item {
	display: flex;
}

.monaco-action-bar .action-item.action-dropdown-item > .action-label {
	margin-right: 1px;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-inputbox {
	position: relative;
	display: block;
	padding: 0;
	box-sizing:	border-box;

	/* Customizable */
	font-size: inherit;
}

.monaco-inputbox.idle {
	border: 1px solid transparent;
}

.monaco-inputbox > .ibwrapper > .input,
.monaco-inputbox > .ibwrapper > .mirror {

	/* Customizable */
	padding: 4px;
}

.monaco-inputbox > .ibwrapper {
	position: relative;
	width: 100%;
	height: 100%;
}

.monaco-inputbox > .ibwrapper > .input {
	display: inline-block;
	box-sizing:	border-box;
	width: 100%;
	height: 100%;
	line-height: inherit;
	border: none;
	font-family: inherit;
	font-size: inherit;
	resize: none;
	color: inherit;
}

.monaco-inputbox > .ibwrapper > input {
	text-overflow: ellipsis;
}

.monaco-inputbox > .ibwrapper > textarea.input {
	display: block;
	-ms-overflow-style: none; /* IE 10+: hide scrollbars */
	scrollbar-width: none; /* Firefox: hide scrollbars */
	outline: none;
}

.monaco-inputbox > .ibwrapper > textarea.input::-webkit-scrollbar {
	display: none; /* Chrome + Safari: hide scrollbar */
}

.monaco-inputbox > .ibwrapper > textarea.input.empty {
	white-space: nowrap;
}

.monaco-inputbox > .ibwrapper > .mirror {
	position: absolute;
	display: inline-block;
	width: 100%;
	top: 0;
	left: 0;
	box-sizing: border-box;
	white-space: pre-wrap;
	visibility: hidden;
	word-wrap: break-word;
}

/* Context view */

.monaco-inputbox-container {
	text-align: right;
}

.monaco-inputbox-container .monaco-inputbox-message {
	display: inline-block;
	overflow: hidden;
	text-align: left;
	width: 100%;
	box-sizing:	border-box;
	padding: 0.4em;
	font-size: 12px;
	line-height: 17px;
	margin-top: -1px;
	word-wrap: break-word;
}

/* Action bar support */
.monaco-inputbox .monaco-action-bar {
	position: absolute;
	right: 2px;
	top: 4px;
}

.monaco-inputbox .monaco-action-bar .action-item {
	margin-left: 2px;
}

.monaco-inputbox .monaco-action-bar .action-item .codicon {
	background-repeat: no-repeat;
	width: 16px;
	height: 16px;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
/* ---------- Find input ---------- */

.monaco-findInput {
	position: relative;
}

.monaco-findInput .monaco-inputbox {
	font-size: 13px;
	width: 100%;
}

.monaco-findInput > .controls {
	position: absolute;
	top: 3px;
	right: 2px;
}

.vs .monaco-findInput.disabled {
	background-color: #E1E1E1;
}

/* Theming */
.vs-dark .monaco-findInput.disabled {
	background-color: #333;
}

/* Highlighting */
.monaco-findInput.highlight-0 .controls {
	animation: monaco-findInput-highlight-0 100ms linear 0s;
}
.monaco-findInput.highlight-1 .controls {
	animation: monaco-findInput-highlight-1 100ms linear 0s;
}
.hc-black .monaco-findInput.highlight-0 .controls,
.vs-dark  .monaco-findInput.highlight-0 .controls {
	animation: monaco-findInput-highlight-dark-0 100ms linear 0s;
}
.hc-black .monaco-findInput.highlight-1 .controls,
.vs-dark  .monaco-findInput.highlight-1 .controls {
	animation: monaco-findInput-highlight-dark-1 100ms linear 0s;
}

@keyframes monaco-findInput-highlight-0 {
	0% { background: rgba(253, 255, 0, 0.8); }
	100% { background: transparent; }
}
@keyframes monaco-findInput-highlight-1 {
	0% { background: rgba(253, 255, 0, 0.8); }
	/* Made intentionally different such that the CSS minifier does not collapse the two animations into a single one*/
	99% { background: transparent; }
}

@keyframes monaco-findInput-highlight-dark-0 {
	0% { background: rgba(255, 255, 255, 0.44); }
	100% { background: transparent; }
}
@keyframes monaco-findInput-highlight-dark-1 {
	0% { background: rgba(255, 255, 255, 0.44); }
	/* Made intentionally different such that the CSS minifier does not collapse the two animations into a single one*/
	99% { background: transparent; }
}</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .margin-view-overlays .codicon-folding-expanded,
.monaco-editor .margin-view-overlays .codicon-folding-collapsed {
	cursor: pointer;
	opacity: 0;
	transition: opacity 0.5s;
	display: flex;
	align-items: center;
	justify-content: center;
	font-size: 140%;
	margin-left: 2px;
}

.monaco-editor .margin-view-overlays:hover .codicon,
.monaco-editor .margin-view-overlays .codicon.codicon-folding-collapsed,
.monaco-editor .margin-view-overlays .codicon.alwaysShowFoldIcons {
	opacity: 1;
}

.monaco-editor .inline-folded:after {
	color: grey;
	margin: 0.1em 0.2em 0 0.2em;
	content: "⋯";
	display: inline;
	line-height: 1em;
	cursor: pointer;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .goto-definition-link {
	text-decoration: underline;
	cursor: pointer;
}</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .peekview-widget .head {
	box-sizing: border-box;
	display: flex;
	justify-content: space-between;
	flex-wrap: nowrap;
}

.monaco-editor .peekview-widget .head .peekview-title {
	display: flex;
	align-items: center;
	font-size: 13px;
	margin-left: 20px;
	min-width: 0;
	text-overflow: ellipsis;
	overflow: hidden;
}

.monaco-editor .peekview-widget .head .peekview-title.clickable {
	cursor: pointer;
}

.monaco-editor .peekview-widget .head .peekview-title .dirname:not(:empty) {
	font-size: 0.9em;
	margin-left: 0.5em;
	text-overflow: ellipsis;
	overflow: hidden;
}

.monaco-editor .peekview-widget .head .peekview-title .meta {
	white-space: nowrap;
	overflow: hidden;
	text-overflow: ellipsis;
}

.monaco-editor .peekview-widget .head .peekview-title .dirname {
	white-space: nowrap;
}

.monaco-editor .peekview-widget .head .peekview-title .filename {
	overflow: hidden;
	text-overflow: ellipsis;
	white-space: nowrap;
}

.monaco-editor .peekview-widget .head .peekview-title .meta:not(:empty)::before {
	content: '-';
	padding: 0 0.3em;
}

.monaco-editor .peekview-widget .head .peekview-actions {
	flex: 1;
	text-align: right;
	padding-right: 2px;
}

.monaco-editor .peekview-widget .head .peekview-actions > .monaco-action-bar {
	display: inline-block;
}

.monaco-editor .peekview-widget .head .peekview-actions > .monaco-action-bar,
.monaco-editor .peekview-widget .head .peekview-actions > .monaco-action-bar > .actions-container {
	height: 100%;
}

.monaco-editor .peekview-widget > .body {
	border-top: 1px solid;
	position: relative;
}

.monaco-editor .peekview-widget .head .peekview-title .codicon {
	margin-right: 4px;
}

.monaco-editor .peekview-widget .monaco-list .monaco-list-row.focused .codicon {
	color: inherit !important;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
.monaco-editor .zone-widget {
	position: absolute;
	z-index: 10;
}


.monaco-editor .zone-widget .zone-widget-container {
	border-top-style: solid;
	border-bottom-style: solid;
	border-top-width: 0;
	border-bottom-width: 0;
	position: relative;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-dropdown {
	height: 100%;
	padding: 0;
}

.monaco-dropdown > .dropdown-label {
	cursor: pointer;
	height: 100%;
	display: flex;
	align-items: center;
	justify-content: center;
}

.monaco-dropdown > .dropdown-label > .action-label.disabled {
	cursor: default;
}

.monaco-dropdown-with-primary {
	display: flex !important;
	flex-direction: row;
	border-radius: 5px;
}

.monaco-dropdown-with-primary > .action-container > .action-label {
	margin-right: 0;
}

.monaco-dropdown-with-primary > .dropdown-action-container > .monaco-dropdown > .dropdown-label .codicon[class*='codicon-'] {
	font-size: 12px;
	padding-left: 0px;
	padding-right: 0px;
	line-height: 16px;
	margin-left: -3px;
}

.monaco-dropdown-with-primary > .dropdown-action-container > .monaco-dropdown > .dropdown-label > .action-label {
	display: block;
	background-size: 16px;
	background-position: center center;
	background-repeat: no-repeat;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-action-bar .action-item.menu-entry .action-label.icon {
	width: 16px;
	height: 16px;
	background-repeat: no-repeat;
	background-position: 50%;
	background-size: 16px;
}

.monaco-action-bar .action-item.menu-entry .action-label {
	background-image: var(--menu-entry-icon-light);
}

.vs-dark .monaco-action-bar .action-item.menu-entry .action-label,
.hc-black .monaco-action-bar .action-item.menu-entry .action-label {
	background-image: var(--menu-entry-icon-dark);
}


.monaco-dropdown-with-default {
	display: flex !important;
	flex-direction: row;
	border-radius: 5px;
}

.monaco-dropdown-with-default > .action-container > .action-label {
	margin-right: 0;
}

.monaco-dropdown-with-default > .action-container.menu-entry > .action-label.icon {
	width: 16px;
	height: 16px;
	background-repeat: no-repeat;
	background-position: 50%;
	background-size: 16px;
}

.monaco-dropdown-with-default > .action-container.menu-entry > .action-label {
	background-image: var(--menu-entry-icon-light);
}

.vs-dark .monaco-dropdown-with-default > .action-container.menu-entry > .action-label,
.hc-black .monaco-dropdown-with-default > .action-container.menu-entry > .action-label {
	background-image: var(--menu-entry-icon-dark);
}

.monaco-dropdown-with-default > .dropdown-action-container > .monaco-dropdown > .dropdown-label .codicon[class*='codicon-'] {
	font-size: 12px;
	padding-left: 0px;
	padding-right: 0px;
	line-height: 16px;
	margin-left: -3px;
}

.monaco-dropdown-with-default > .dropdown-action-container > .monaco-dropdown > .dropdown-label > .action-label {
	display: block;
	background-size: 16px;
	background-position: center center;
	background-repeat: no-repeat;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-list {
	position: relative;
	height: 100%;
	width: 100%;
	white-space: nowrap;
}

.monaco-list.mouse-support {
	user-select: none;
	-webkit-user-select: none;
	-ms-user-select: none;
}

.monaco-list > .monaco-scrollable-element {
	height: 100%;
}

.monaco-list-rows {
	position: relative;
	width: 100%;
	height: 100%;
}

.monaco-list.horizontal-scrolling .monaco-list-rows {
	width: auto;
	min-width: 100%;
}

.monaco-list-row {
	position: absolute;
	box-sizing: border-box;
	overflow: hidden;
	width: 100%;
}

.monaco-list.mouse-support .monaco-list-row {
	cursor: pointer;
	touch-action: none;
}

/* for OS X ballistic scrolling */
.monaco-list-row.scrolling {
	display: none !important;
}

/* Focus */
.monaco-list.element-focused,
.monaco-list.selection-single,
.monaco-list.selection-multiple {
	outline: 0 !important;
}

/* Dnd */
.monaco-drag-image {
	display: inline-block;
	padding: 1px 7px;
	border-radius: 10px;
	font-size: 12px;
	position: absolute;
	z-index: 1000;
}

/* Type filter */

.monaco-list-type-filter {
	display: flex;
	align-items: center;
	position: absolute;
	border-radius: 2px;
	padding: 0px 3px;
	max-width: calc(100% - 10px);
	text-overflow: ellipsis;
	overflow: hidden;
	text-align: right;
	box-sizing: border-box;
	cursor: all-scroll;
	font-size: 13px;
	line-height: 18px;
	height: 20px;
	z-index: 1;
	top: 4px;
}

.monaco-list-type-filter.dragging {
	transition: top 0.2s, left 0.2s;
}

.monaco-list-type-filter.ne {
	right: 4px;
}

.monaco-list-type-filter.nw {
	left: 4px;
}

.monaco-list-type-filter > .controls {
	display: flex;
	align-items: center;
	box-sizing: border-box;
	transition: width 0.2s;
	width: 0;
}

.monaco-list-type-filter.dragging > .controls,
.monaco-list-type-filter:hover > .controls {
	width: 36px;
}

.monaco-list-type-filter > .controls > * {
	border: none;
	box-sizing: border-box;
	-webkit-appearance: none;
	-moz-appearance: none;
	background: none;
	width: 16px;
	height: 16px;
	flex-shrink: 0;
	margin: 0;
	padding: 0;
	display: flex;
	align-items: center;
	justify-content: center;
	cursor: pointer;
}

.monaco-list-type-filter > .controls > .filter {
	margin-left: 4px;
}

.monaco-list-type-filter-message {
	position: absolute;
	box-sizing: border-box;
	width: 100%;
	height: 100%;
	top: 0;
	left: 0;
	padding: 40px 1em 1em 1em;
	text-align: center;
	white-space: normal;
	opacity: 0.7;
	pointer-events: none;
}

.monaco-list-type-filter-message:empty {
	display: none;
}

/* Electron */

.monaco-list-type-filter {
	cursor: grab;
}

.monaco-list-type-filter.dragging {
	cursor: grabbing;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-split-view2 {
	position: relative;
	width: 100%;
	height: 100%;
}

.monaco-split-view2 > .sash-container {
	position: absolute;
	width: 100%;
	height: 100%;
	pointer-events: none;
}

.monaco-split-view2 > .sash-container > .monaco-sash {
	pointer-events: initial;
}

.monaco-split-view2 > .monaco-scrollable-element {
	width: 100%;
	height: 100%;
}

.monaco-split-view2 > .monaco-scrollable-element > .split-view-container {
	width: 100%;
	height: 100%;
	white-space: nowrap;
	position: relative;
}

.monaco-split-view2 > .monaco-scrollable-element > .split-view-container > .split-view-view {
	white-space: initial;
	position: absolute;
}

.monaco-split-view2 > .monaco-scrollable-element > .split-view-container > .split-view-view:not(.visible) {
	display: none;
}

.monaco-split-view2.vertical > .monaco-scrollable-element > .split-view-container > .split-view-view {
	width: 100%;
}

.monaco-split-view2.horizontal > .monaco-scrollable-element > .split-view-container > .split-view-view {
	height: 100%;
}

.monaco-split-view2.separator-border > .monaco-scrollable-element > .split-view-container > .split-view-view:not(:first-child)::before {
	content: ' ';
	position: absolute;
	top: 0;
	left: 0;
	z-index: 5;
	pointer-events: none;
	background-color: var(--separator-border);
}

.monaco-split-view2.separator-border.horizontal > .monaco-scrollable-element > .split-view-container > .split-view-view:not(:first-child)::before {
	height: 100%;
	width: 1px;
}

.monaco-split-view2.separator-border.vertical > .monaco-scrollable-element > .split-view-container > .split-view-view:not(:first-child)::before {
	height: 1px;
	width: 100%;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-table {
	display: flex;
	flex-direction: column;
	position: relative;
	height: 100%;
	width: 100%;
	white-space: nowrap;
}

.monaco-table > .monaco-split-view2 {
	border-bottom: 1px solid transparent;
}

.monaco-table > .monaco-list {
	flex: 1;
}

.monaco-table-tr {
	display: flex;
	height: 100%;
}

.monaco-table-th {
	width: 100%;
	height: 100%;
	font-weight: bold;
	overflow: hidden;
	text-overflow: ellipsis;
}

.monaco-table-th,
.monaco-table-td {
	box-sizing: border-box;
	flex-shrink: 0;
	overflow: hidden;
	white-space: nowrap;
	text-overflow: ellipsis;
}

.monaco-table > .monaco-split-view2 .monaco-sash.vertical::before {
	content: "";
	position: absolute;
	left: calc(var(--sash-size) / 2);
	width: 0;
	border-left: 1px solid transparent;
}

.monaco-table > .monaco-split-view2,
.monaco-table > .monaco-split-view2 .monaco-sash.vertical::before {
	transition: border-color 0.2s ease-out;
}
/*
.monaco-table:hover > .monaco-split-view2,
.monaco-table:hover > .monaco-split-view2 .monaco-sash.vertical::before {
	border-color: rgba(204, 204, 204, 0.2);
} */
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-tl-row {
	display: flex;
	height: 100%;
	align-items: center;
	position: relative;
}

.monaco-tl-indent {
	height: 100%;
	position: absolute;
	top: 0;
	left: 16px;
	pointer-events: none;
}

.hide-arrows .monaco-tl-indent {
	left: 12px;
}

.monaco-tl-indent > .indent-guide {
	display: inline-block;
	box-sizing: border-box;
	height: 100%;
	border-left: 1px solid transparent;
}

.monaco-tl-indent > .indent-guide {
	transition: border-color 0.1s linear;
}

.monaco-tl-twistie,
.monaco-tl-contents {
	height: 100%;
}

.monaco-tl-twistie {
	font-size: 10px;
	text-align: right;
	padding-right: 6px;
	flex-shrink: 0;
	width: 16px;
	display: flex !important;
	align-items: center;
	justify-content: center;
	transform: translateX(3px);
}

.monaco-tl-contents {
	flex: 1;
	overflow: hidden;
}

.monaco-tl-twistie::before {
	border-radius: 20px;
}

.monaco-tl-twistie.collapsed::before {
	transform: rotate(-90deg);
}

.monaco-tl-twistie.codicon-tree-item-loading::before {
	/* Use steps to throttle FPS to reduce CPU usage */
	animation: codicon-spin 1.25s steps(30) infinite;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/* -- zone widget */
.monaco-editor .zone-widget .zone-widget-container.reference-zone-widget {
	border-top-width: 1px;
	border-bottom-width: 1px;
}

.monaco-editor .reference-zone-widget .inline {
	display: inline-block;
	vertical-align: top;
}

.monaco-editor .reference-zone-widget .messages {
	height: 100%;
	width: 100%;
	text-align: center;
	padding: 3em 0;
}

.monaco-editor .reference-zone-widget .ref-tree {
	line-height: 23px;
	background-color: var(--vscode-peekViewResult-background);
	color: var(--vscode-peekViewResult-lineForeground);
}

.monaco-editor .reference-zone-widget .ref-tree .reference {
	text-overflow: ellipsis;
	overflow: hidden;
}

.monaco-editor .reference-zone-widget .ref-tree .reference-file {
	display: inline-flex;
	width: 100%;
	height: 100%;
	color: var(--vscode-peekViewResult-fileForeground);
}

.monaco-editor .reference-zone-widget .ref-tree .monaco-list:focus .selected .reference-file {
	color: inherit !important;
}

.monaco-editor .reference-zone-widget .ref-tree .monaco-list:focus .monaco-list-rows > .monaco-list-row.selected:not(.highlighted) {
	background-color: var(--vscode-peekViewResult-selectionBackground);
	color: var(--vscode-peekViewResult-selectionForeground) !important;
}

.monaco-editor .reference-zone-widget .ref-tree .reference-file .count {
	margin-right: 12px;
	margin-left: auto;
}

.monaco-editor .reference-zone-widget .ref-tree .referenceMatch .highlight {
	background-color: var(--vscode-peekViewResult-matchHighlightBackground);
}

.monaco-editor .reference-zone-widget .preview .reference-decoration {
	background-color: var(--vscode-peekViewEditor-matchHighlightBackground);
	border: 2px solid var(--vscode-peekViewEditor-matchHighlightBorder);
	box-sizing: border-box;
}

.monaco-editor .reference-zone-widget .preview .monaco-editor .monaco-editor-background,
.monaco-editor .reference-zone-widget .preview .monaco-editor .inputarea.ime-input {
	background-color: var(--vscode-peekViewEditor-background);
}

.monaco-editor .reference-zone-widget .preview .monaco-editor .margin {
	background-color: var(--vscode-peekViewEditorGutter-background);
}

/* High Contrast Theming */

.monaco-editor.hc-black .reference-zone-widget .ref-tree .reference-file {
	font-weight: bold;
}

.monaco-editor.hc-black .reference-zone-widget .ref-tree .referenceMatch .highlight {
	border: 1px dotted var(--vscode-contrastActiveBorder, transparent);
	box-sizing: border-box;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-count-badge {
	padding: 3px 6px;
	border-radius: 11px;
	font-size: 11px;
	min-width: 18px;
	min-height: 18px;
	line-height: 11px;
	font-weight: normal;
	text-align: center;
	display: inline-block;
	box-sizing: border-box;
}

.monaco-count-badge.long {
	padding: 2px 3px;
	border-radius: 2px;
	min-height: auto;
	line-height: normal;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/* ---------- Icon label ---------- */

.monaco-icon-label {
	display: flex; /* required for icons support :before rule */
	overflow: hidden;
	text-overflow: ellipsis;
}

.monaco-icon-label::before {

	/* svg icons rendered as background image */
	background-size: 16px;
	background-position: left center;
	background-repeat: no-repeat;
	padding-right: 6px;
	width: 16px;
	height: 22px;
	line-height: inherit !important;
	display: inline-block;

	/* fonts icons */
	-webkit-font-smoothing: antialiased;
	-moz-osx-font-smoothing: grayscale;
	vertical-align: top;

	flex-shrink: 0; /* fix for https://github.com/microsoft/vscode/issues/13787 */
}

.monaco-icon-label > .monaco-icon-label-container {
	min-width: 0;
	overflow: hidden;
	text-overflow: ellipsis;
	flex: 1;
}

.monaco-icon-label > .monaco-icon-label-container > .monaco-icon-name-container > .label-name {
	color: inherit;
	white-space: pre; /* enable to show labels that include multiple whitespaces */
}

.monaco-icon-label > .monaco-icon-label-container > .monaco-icon-name-container > .label-name > .label-separator {
	margin: 0 2px;
	opacity: 0.5;
}

.monaco-icon-label > .monaco-icon-label-container > .monaco-icon-description-container > .label-description {
	opacity: .7;
	margin-left: 0.5em;
	font-size: 0.9em;
	white-space: pre; /* enable to show labels that include multiple whitespaces */
}

.monaco-icon-label.nowrap > .monaco-icon-label-container > .monaco-icon-description-container > .label-description{
	white-space: nowrap
}

.vs .monaco-icon-label > .monaco-icon-label-container > .monaco-icon-description-container > .label-description {
	opacity: .95;
}

.monaco-icon-label.italic > .monaco-icon-label-container > .monaco-icon-name-container > .label-name,
.monaco-icon-label.italic > .monaco-icon-label-container > .monaco-icon-description-container > .label-description {
	font-style: italic;
}

.monaco-icon-label.deprecated {
	text-decoration: line-through;
	opacity: 0.66;
}

/* make sure apply italic font style to decorations as well */
.monaco-icon-label.italic::after {
	font-style: italic;
}

.monaco-icon-label.strikethrough > .monaco-icon-label-container > .monaco-icon-name-container > .label-name,
.monaco-icon-label.strikethrough > .monaco-icon-label-container > .monaco-icon-description-container > .label-description {
	text-decoration: line-through;
}

.monaco-icon-label::after {
	opacity: 0.75;
	font-size: 90%;
	font-weight: 600;
	margin: auto 16px 0 5px; /* https://github.com/microsoft/vscode/issues/113223 */
	text-align: center;
}

/* make sure selection color wins when a label is being selected */
.monaco-list:focus .selected .monaco-icon-label, /* list */
.monaco-list:focus .selected .monaco-icon-label::after
{
	color: inherit !important;
}

.monaco-list-row.focused.selected .label-description,
.monaco-list-row.selected .label-description {
	opacity: .8;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .monaco-editor-overlaymessage {
	padding-bottom: 8px;
	z-index: 10000;
}

.monaco-editor .monaco-editor-overlaymessage.below {
	padding-bottom: 0;
	padding-top: 8px;
	z-index: 10000;
}

@keyframes fadeIn {
	from { opacity: 0; }
	to { opacity: 1; }
}
.monaco-editor .monaco-editor-overlaymessage.fadeIn {
	animation: fadeIn 150ms ease-out;
}

@keyframes fadeOut {
	from { opacity: 1; }
	to { opacity: 0; }
}
.monaco-editor .monaco-editor-overlaymessage.fadeOut {
	animation: fadeOut 100ms ease-out;
}

.monaco-editor .monaco-editor-overlaymessage .message {
	padding: 1px 4px;
	color: var(--vscode-inputValidation-infoForeground);
	background-color: var(--vscode-inputValidation-infoBackground);
	border: 1px solid var(--vscode-inputValidation-infoBorder);
}

.monaco-editor.hc-black .monaco-editor-overlaymessage .message {
	border-width: 2px;
}

.monaco-editor .monaco-editor-overlaymessage .anchor {
	width: 0 !important;
	height: 0 !important;
	border-color: transparent;
	border-style: solid;
	z-index: 1000;
	border-width: 8px;
	position: absolute;
}

.monaco-editor .monaco-editor-overlaymessage .anchor.top {
	border-bottom-color: var(--vscode-inputValidation-infoBorder);
}

.monaco-editor .monaco-editor-overlaymessage .anchor.below {
	border-top-color: var(--vscode-inputValidation-infoBorder);
}

.monaco-editor .monaco-editor-overlaymessage:not(.below) .anchor.top,
.monaco-editor .monaco-editor-overlaymessage.below .anchor.below {
	display: none;
}

.monaco-editor .monaco-editor-overlaymessage.below .anchor.top {
	display: inherit;
	top: -8px;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-hover {
	cursor: default;
	position: absolute;
	overflow: hidden;
	z-index: 50;
	user-select: text;
	-webkit-user-select: text;
	-ms-user-select: text;
	box-sizing: initial;
	animation: fadein 100ms linear;
	line-height: 1.5em;
}

.monaco-hover.hidden {
	display: none;
}

.monaco-hover a:hover {
	cursor: pointer;
}

.monaco-hover .hover-contents:not(.html-hover-contents) {
	padding: 4px 8px;
}

.monaco-hover .markdown-hover > .hover-contents:not(.code-hover-contents) {
	max-width: 500px;
	word-wrap: break-word;
}

.monaco-hover .markdown-hover > .hover-contents:not(.code-hover-contents) hr {
	min-width: 100%;
}

.monaco-hover p,
.monaco-hover .code,
.monaco-hover ul {
	margin: 8px 0;
}

.monaco-hover code {
	font-family: var(--monaco-monospace-font);
}

.monaco-hover hr {
	box-sizing: border-box;
	border-left: 0px;
	border-right: 0px;
	margin-top: 4px;
	margin-bottom: -4px;
	margin-left: -8px;
	margin-right: -8px;
	height: 1px;
}

.monaco-hover p:first-child,
.monaco-hover .code:first-child,
.monaco-hover ul:first-child {
	margin-top: 0;
}

.monaco-hover p:last-child,
.monaco-hover .code:last-child,
.monaco-hover ul:last-child {
	margin-bottom: 0;
}

/* MarkupContent Layout */
.monaco-hover ul {
	padding-left: 20px;
}
.monaco-hover ol {
	padding-left: 20px;
}

.monaco-hover li > p {
	margin-bottom: 0;
}

.monaco-hover li > ul {
	margin-top: 0;
}

.monaco-hover code {
	border-radius: 3px;
	padding: 0 0.4em;
}

.monaco-hover .monaco-tokenized-source {
	white-space: pre-wrap;
}

.monaco-hover .hover-row.status-bar {
	font-size: 12px;
	line-height: 22px;
}

.monaco-hover .hover-row.status-bar .actions {
	display: flex;
	padding: 0px 8px;
}

.monaco-hover .hover-row.status-bar .actions .action-container {
	margin-right: 16px;
	cursor: pointer;
}

.monaco-hover .hover-row.status-bar .actions .action-container .action .icon {
	padding-right: 4px;
}

.monaco-hover .markdown-hover .hover-contents .codicon {
	color: inherit;
	font-size: inherit;
	vertical-align: middle;
}

.monaco-hover .hover-contents a.code-link:hover,
.monaco-hover .hover-contents a.code-link {
	color: inherit;
}

.monaco-hover .hover-contents a.code-link:before {
	content: '(';
}

.monaco-hover .hover-contents a.code-link:after {
	content: ')';
}

.monaco-hover .hover-contents a.code-link > span {
	text-decoration: underline;
	/** Hack to force underline to show **/
	border-bottom: 1px solid transparent;
	text-underline-position: under;
}

/** Spans in markdown hovers need a margin-bottom to avoid looking cramped: https://github.com/microsoft/vscode/issues/101496 **/
.monaco-hover .markdown-hover .hover-contents:not(.code-hover-contents):not(.html-hover-contents) span {
	margin-bottom: 4px;
	display: inline-block;
}

.monaco-hover-content .action-container a {
	-webkit-user-select: none;
	user-select: none;
}

.monaco-hover-content .action-container.disabled {
	pointer-events: none;
	opacity: 0.4;
	cursor: default;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .contentWidgets .codicon-light-bulb,
.monaco-editor .contentWidgets .codicon-lightbulb-autofix {
	display: flex;
	align-items: center;
	justify-content: center;
}

.monaco-editor .contentWidgets .codicon-light-bulb:hover,
.monaco-editor .contentWidgets .codicon-lightbulb-autofix:hover {
	cursor: pointer;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/* marker zone */

.monaco-editor .peekview-widget .head .peekview-title .severity-icon {
	display: inline-block;
	vertical-align: text-top;
	margin-right: 4px;
}

.monaco-editor .marker-widget {
	text-overflow: ellipsis;
	white-space: nowrap;
}

.monaco-editor .marker-widget > .stale {
	opacity: 0.6;
	font-style: italic;
}

.monaco-editor .marker-widget .title {
	display: inline-block;
	padding-right: 5px;
}

.monaco-editor .marker-widget .descriptioncontainer {
	position: absolute;
	white-space: pre;
	user-select: text;
	-webkit-user-select: text;
	-ms-user-select: text;
	padding: 8px 12px 0 20px;
}

.monaco-editor .marker-widget .descriptioncontainer .message {
	display: flex;
	flex-direction: column;
}

.monaco-editor .marker-widget .descriptioncontainer .message .details {
	padding-left: 6px;
}

.monaco-editor .marker-widget .descriptioncontainer .message .source,
.monaco-editor .marker-widget .descriptioncontainer .message span.code {
	opacity: 0.6;
}

.monaco-editor .marker-widget .descriptioncontainer .message a.code-link {
	opacity: 0.6;
	color: inherit;
}

.monaco-editor .marker-widget .descriptioncontainer .message a.code-link:before {
	content: '(';
}

.monaco-editor .marker-widget .descriptioncontainer .message a.code-link:after {
	content: ')';
}

.monaco-editor .marker-widget .descriptioncontainer .message a.code-link > span {
	text-decoration: underline;
	/** Hack to force underline to show **/
	border-bottom: 1px solid transparent;
	text-underline-position: under;
	color: var(--vscode-textLink-foreground);
}

.monaco-editor .marker-widget .descriptioncontainer .message a.code-link > span {
	color: var(--vscode-textLink-activeForeground);
}

.monaco-editor .marker-widget .descriptioncontainer .filename {
	cursor: pointer;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
.monaco-editor .detected-link,
.monaco-editor .detected-link-active {
	text-decoration: underline;
	text-underline-position: under;
}

.monaco-editor .detected-link-active {
	cursor: pointer;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .parameter-hints-widget {
	/* Must be higher than the sash's z-index and terminal canvases but lower than the suggest widget */
	z-index: 39;
	display: flex;
	flex-direction: column;
	line-height: 1.5em;
}

.monaco-editor .parameter-hints-widget > .phwrapper {
	max-width: 440px;
	display: flex;
	flex-direction: row;
}

.monaco-editor .parameter-hints-widget.multiple {
	min-height: 3.3em;
	padding: 0;
}

.monaco-editor .parameter-hints-widget.visible {
	transition: left .05s ease-in-out;
}

.monaco-editor .parameter-hints-widget p,
.monaco-editor .parameter-hints-widget ul {
	margin: 8px 0;
}

.monaco-editor .parameter-hints-widget .monaco-scrollable-element,
.monaco-editor .parameter-hints-widget .body {
	display: flex;
	flex: 1;
	flex-direction: column;
	min-height: 100%;
}

.monaco-editor .parameter-hints-widget .signature {
	padding: 4px 5px;
}

.monaco-editor .parameter-hints-widget .docs {
	padding: 0 10px 0 5px;
	white-space: pre-wrap;
}

.monaco-editor .parameter-hints-widget .docs.empty {
	display: none;
}

.monaco-editor .parameter-hints-widget .docs .markdown-docs {
	white-space: initial;
}

.monaco-editor .parameter-hints-widget .docs .markdown-docs code {
	font-family: var(--monaco-monospace-font);
}

.monaco-editor .parameter-hints-widget .docs  .monaco-tokenized-source,
.monaco-editor .parameter-hints-widget .docs .code {
	white-space: pre-wrap;
}

.monaco-editor .parameter-hints-widget .docs code {
	border-radius: 3px;
	padding: 0 0.4em;
}

.monaco-editor .parameter-hints-widget .controls {
	display: none;
	flex-direction: column;
	align-items: center;
	min-width: 22px;
	justify-content: flex-end;
}

.monaco-editor .parameter-hints-widget.multiple .controls {
	display: flex;
	padding: 0 2px;
}

.monaco-editor .parameter-hints-widget.multiple .button {
	width: 16px;
	height: 16px;
	background-repeat: no-repeat;
	cursor: pointer;
}

.monaco-editor .parameter-hints-widget .button.previous {
	bottom: 24px;
}

.monaco-editor .parameter-hints-widget .overloads {
	text-align: center;
	height: 12px;
	line-height: 12px;
	font-family: var(--monaco-monospace-font);
}

.monaco-editor .parameter-hints-widget .signature .parameter.active {
	font-weight: bold;
}

.monaco-editor .parameter-hints-widget .documentation-parameter > .parameter {
	font-weight: bold;
	margin-right: 0.5em;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .snippet-placeholder {
	min-width: 2px;
	outline-style: solid;
	outline-width: 1px;
	background-color: var(--vscode-editor-snippetTabstopHighlightBackground, transparent);
	outline-color: var(--vscode-editor-snippetTabstopHighlightBorder, transparent);
}

.monaco-editor .finish-snippet-placeholder {
	outline-style: solid;
	outline-width: 1px;
	background-color: var(--vscode-editor-snippetFinalTabstopHighlightBackground, transparent);
	outline-color: var(--vscode-editor-snippetFinalTabstopHighlightBorder, transparent);
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

@font-face {
	font-family: "codicon";
	font-display: block;
	src: url(https://static.leetcode-cn.com/lc-monaco/ade705761eb7e702770d.ttf) format("truetype");
}

.codicon[class*='codicon-'] {
	font: normal normal normal 16px/1 codicon;
	display: inline-block;
	text-decoration: none;
	text-rendering: auto;
	text-align: center;
	text-transform: none;
	-webkit-font-smoothing: antialiased;
	-moz-osx-font-smoothing: grayscale;
	user-select: none;
	-webkit-user-select: none;
	-ms-user-select: none;
}

/* icon rules are dynamically created by the platform theme service (see iconsStyleSheet.ts) */
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.codicon-wrench-subaction {
	opacity: 0.5;
}

@keyframes codicon-spin {
	100% {
		transform:rotate(360deg);
	}
}

.codicon-sync.codicon-modifier-spin,
.codicon-loading.codicon-modifier-spin,
.codicon-gear.codicon-modifier-spin,
.codicon-notebook-state-executing.codicon-modifier-spin {
	/* Use steps to throttle FPS to reduce CPU usage */
	animation: codicon-spin 1.5s steps(30) infinite;
}

.codicon-modifier-disabled {
	opacity: 0.4;
}

/* custom speed & easing for loading icon */
.codicon-loading,
.codicon-tree-item-loading::before {
	animation-duration: 1s !important;
	animation-timing-function: cubic-bezier(0.53, 0.21, 0.29, 0.67) !important;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

/* Suggest widget*/

.monaco-editor .suggest-widget {
	width: 430px;
	z-index: 40;
	display: flex;
	flex-direction: column;
}

.monaco-editor .suggest-widget.message {
	flex-direction: row;
	align-items: center;
}

.monaco-editor .suggest-widget,
.monaco-editor .suggest-details {
	flex: 0 1 auto;
	width: 100%;
	border-style: solid;
	border-width: 1px;
	border-color: var(--vscode-editorSuggestWidget-border);
	background-color: var(--vscode-editorSuggestWidget-background);
}

.monaco-editor.hc-black .suggest-widget,
.monaco-editor.hc-black .suggest-details {
	border-width: 2px;
}

/* Styles for status bar part */


.monaco-editor .suggest-widget .suggest-status-bar {
	box-sizing: border-box;
	display: none;
	flex-flow: row nowrap;
	justify-content: space-between;
	width: 100%;
	font-size: 80%;
	padding: 0 4px 0 4px;
	border-top: 1px solid var(--vscode-editorSuggestWidget-border);
	overflow: hidden;
}

.monaco-editor .suggest-widget.with-status-bar .suggest-status-bar {
	display: flex;
}

.monaco-editor .suggest-widget .suggest-status-bar .left {
	padding-right: 8px;
}

.monaco-editor .suggest-widget.with-status-bar .suggest-status-bar .action-label {
	color: var(--vscode-editorSuggestWidgetStatus-foreground);
}

.monaco-editor .suggest-widget.with-status-bar .suggest-status-bar .action-item:not(:last-of-type) .action-label {
	margin-right: 0;
}

.monaco-editor .suggest-widget.with-status-bar .suggest-status-bar .action-item:not(:last-of-type) .action-label::after {
	content: ', ';
	margin-right: 0.3em;
}

.monaco-editor .suggest-widget.with-status-bar .monaco-list .monaco-list-row>.contents>.main>.right>.readMore,
.monaco-editor .suggest-widget.with-status-bar .monaco-list .monaco-list-row.focused.string-label>.contents>.main>.right>.readMore {
	display: none;
}

.monaco-editor .suggest-widget.with-status-bar:not(.docs-side) .monaco-list .monaco-list-row:hover>.contents>.main>.right.can-expand-details>.details-label {
	width: 100%;
}

/* Styles for Message element for when widget is loading or is empty */

.monaco-editor .suggest-widget>.message {
	padding-left: 22px;
}

/** Styles for the list element **/

.monaco-editor .suggest-widget>.tree {
	height: 100%;
	width: 100%;
}

.monaco-editor .suggest-widget .monaco-list {
	user-select: none;
	-webkit-user-select: none;
	-ms-user-select: none;
}

/** Styles for each row in the list element **/

.monaco-editor .suggest-widget .monaco-list .monaco-list-row {
	display: flex;
	-mox-box-sizing: border-box;
	box-sizing: border-box;
	padding-right: 10px;
	background-repeat: no-repeat;
	background-position: 2px 2px;
	white-space: nowrap;
	cursor: pointer;
	touch-action: none;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row.focused {
	color: var(--vscode-editorSuggestWidget-selectedForeground);
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row.focused .codicon {
	color: var(--vscode-editorSuggestWidget-selectedIconForeground);
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents {
	flex: 1;
	height: 100%;
	overflow: hidden;
	padding-left: 2px;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main {
	display: flex;
	overflow: hidden;
	text-overflow: ellipsis;
	white-space: pre;
	justify-content: space-between;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.left, .monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.right {
	display: flex;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row:not(.focused)>.contents>.main .monaco-icon-label {
	color: var(--vscode-editorSuggestWidget-foreground);
}

.monaco-editor .suggest-widget:not(.frozen) .monaco-highlighted-label .highlight {
	font-weight: bold;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main .monaco-highlighted-label .highlight {
	color: var(--vscode-editorSuggestWidget-highlightForeground);
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row.focused>.contents>.main .monaco-highlighted-label .highlight {
	color: var(--vscode-editorSuggestWidget-focusHighlightForeground);
}

/** ReadMore Icon styles **/

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.header>.codicon-close,
.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.right>.readMore::before {
	color: inherit;
	opacity: 1;
	font-size: 14px;
	cursor: pointer;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.header>.codicon-close {
	position: absolute;
	top: 6px;
	right: 2px;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.header>.codicon-close:hover,
.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.right>.readMore:hover {
	opacity: 1;
}

/** signature, qualifier, type/details opacity **/

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.right>.details-label {
	opacity: 0.7;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.left>.signature-label {
	overflow: hidden;
	text-overflow: ellipsis;
	opacity: 0.6;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.left>.qualifier-label {
	margin-left: 12px;
	opacity: 0.4;
	font-size: 85%;
	line-height: initial;
	text-overflow: ellipsis;
	overflow: hidden;
	align-self: center;
}

/** Type Info and icon next to the label in the focused completion item **/

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.right>.details-label {
	font-size: 85%;
	margin-left: 1.1em;
	overflow: hidden;
	text-overflow: ellipsis;
	white-space: nowrap;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.right>.details-label>.monaco-tokenized-source {
	display: inline;
}

/** Details: if using CompletionItem#details, show on focus **/

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.right>.details-label {
	display: none;
}

.monaco-editor .suggest-widget:not(.shows-details) .monaco-list .monaco-list-row.focused>.contents>.main>.right>.details-label {
	display: inline;
}

/** Details: if using CompletionItemLabel#details, always show **/

.monaco-editor .suggest-widget .monaco-list .monaco-list-row:not(.string-label)>.contents>.main>.right>.details-label,
.monaco-editor .suggest-widget.docs-side .monaco-list .monaco-list-row.focused:not(.string-label)>.contents>.main>.right>.details-label {
	display: inline;
}

/** Ellipsis on hover **/

.monaco-editor .suggest-widget:not(.docs-side) .monaco-list .monaco-list-row.focused:hover>.contents>.main>.right.can-expand-details>.details-label {
	width: calc(100% - 26px);
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.left {
	flex-shrink: 1;
	flex-grow: 1;
	overflow: hidden;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.left>.monaco-icon-label {
	flex-shrink: 0;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row:not(.string-label)>.contents>.main>.left>.monaco-icon-label {
	max-width: 100%;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row.string-label>.contents>.main>.left>.monaco-icon-label {
	flex-shrink: 1;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.right {
	overflow: hidden;
	flex-shrink: 4;
	max-width: 70%;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row>.contents>.main>.right>.readMore {
	display: inline-block;
	position: absolute;
	right: 10px;
	width: 18px;
	height: 18px;
	visibility: hidden;
}

/** Do NOT display ReadMore when docs is side/below **/

.monaco-editor .suggest-widget.docs-side .monaco-list .monaco-list-row>.contents>.main>.right>.readMore {
	display: none !important;
}

/** Do NOT display ReadMore when using plain CompletionItemLabel (details/documentation might not be resolved) **/

.monaco-editor .suggest-widget .monaco-list .monaco-list-row.string-label>.contents>.main>.right>.readMore {
	display: none;
}

/** Focused item can show ReadMore, but can't when docs is side/below **/

.monaco-editor .suggest-widget .monaco-list .monaco-list-row.focused.string-label>.contents>.main>.right>.readMore {
	display: inline-block;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row.focused:hover>.contents>.main>.right>.readMore {
	visibility: visible;
}

/** Styles for each row in the list **/

.monaco-editor .suggest-widget .monaco-list .monaco-list-row .monaco-icon-label.deprecated {
	opacity: 0.66;
	text-decoration: unset;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row .monaco-icon-label.deprecated>.monaco-icon-label-container>.monaco-icon-name-container {
	text-decoration: line-through;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row .monaco-icon-label::before {
	height: 100%;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row .icon {
	display: block;
	height: 16px;
	width: 16px;
	margin-left: 2px;
	background-repeat: no-repeat;
	background-size: 80%;
	background-position: center;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row .icon.hide {
	display: none;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row .suggest-icon {
	display: flex;
	align-items: center;
	margin-right: 4px;
}

.monaco-editor .suggest-widget.no-icons .monaco-list .monaco-list-row .icon, .monaco-editor .suggest-widget.no-icons .monaco-list .monaco-list-row .suggest-icon::before {
	display: none;
}

.monaco-editor .suggest-widget .monaco-list .monaco-list-row .icon.customcolor .colorspan {
	margin: 0 0 0 0.3em;
	border: 0.1em solid #000;
	width: 0.7em;
	height: 0.7em;
	display: inline-block;
}

/** Styles for the docs of the completion item in focus **/

.monaco-editor .suggest-details-container {
	z-index: 41;
}

.monaco-editor .suggest-details {
	display: flex;
	flex-direction: column;
	cursor: default;
	color: var(--vscode-editorSuggestWidget-foreground);
}

.monaco-editor .suggest-details.focused {
	border-color: var(--vscode-focusBorder);
}

.monaco-editor .suggest-details a {
	color: var(--vscode-textLink-foreground);
}

.monaco-editor .suggest-details a:hover {
	color: var(--vscode-textLink-activeForeground);
}

.monaco-editor .suggest-details code {
	background-color: var(--vscode-textCodeBlock-background);
}

.monaco-editor .suggest-details.no-docs {
	display: none;
}

.monaco-editor .suggest-details>.monaco-scrollable-element {
	flex: 1;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body {
	box-sizing: border-box;
	height: 100%;
	width: 100%;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.header>.type {
	flex: 2;
	overflow: hidden;
	text-overflow: ellipsis;
	opacity: 0.7;
	white-space: pre;
	margin: 0 24px 0 0;
	padding: 4px 0 12px 5px;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.header>.type.auto-wrap {
	white-space: normal;
	word-break: break-all;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.docs {
	margin: 0;
	padding: 4px 5px;
	white-space: pre-wrap;
}

.monaco-editor .suggest-details.no-type>.monaco-scrollable-element>.body>.docs {
	margin-right: 24px;
	overflow: hidden;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.docs.markdown-docs {
	padding: 0;
	white-space: initial;
	min-height: calc(1rem + 8px);
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.docs.markdown-docs>div,
.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.docs.markdown-docs>span:not(:empty) {
	padding: 4px 5px;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.docs.markdown-docs>div>p:first-child {
	margin-top: 0;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.docs.markdown-docs>div>p:last-child {
	margin-bottom: 0;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.docs.markdown-docs .monaco-tokenized-source {
	white-space: pre;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.docs .code {
	white-space: pre-wrap;
	word-wrap: break-word;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>.docs.markdown-docs .codicon {
	vertical-align: sub;
}

.monaco-editor .suggest-details>.monaco-scrollable-element>.body>p:empty {
	display: none;
}

.monaco-editor .suggest-details code {
	border-radius: 3px;
	padding: 0 0.4em;
}

.monaco-editor .suggest-details ul {
	padding-left: 20px;
}

.monaco-editor .suggest-details ol {
	padding-left: 20px;
}

.monaco-editor .suggest-details p code {
	font-family: var(--monaco-monospace-font);
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .accessibilityHelpWidget {
	padding: 10px;
	vertical-align: middle;
	overflow: scroll;
}</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-editor .tokens-inspect-widget {
	z-index: 50;
	user-select: text;
	-webkit-user-select: text;
	-ms-user-select: text;
	padding: 10px;
}

.tokens-inspect-separator {
	height: 1px;
	border: 0;
}

.monaco-editor .tokens-inspect-widget .tm-token {
	font-family: var(--monaco-monospace-font);
}

.monaco-editor .tokens-inspect-widget .tm-token-length {
	font-weight: normal;
	font-size: 60%;
	float: right;
}

.monaco-editor .tokens-inspect-widget .tm-metadata-table {
	width: 100%;
}

.monaco-editor .tokens-inspect-widget .tm-metadata-value {
	font-family: var(--monaco-monospace-font);
	text-align: right;
}

.monaco-editor .tokens-inspect-widget .tm-token-type {
	font-family: var(--monaco-monospace-font);
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/


/* Default standalone editor fonts */
.monaco-editor {
	font-family: -apple-system, BlinkMacSystemFont, "Segoe WPC", "Segoe UI", "HelveticaNeue-Light", system-ui, "Ubuntu", "Droid Sans", sans-serif;
	--monaco-monospace-font: "SF Mono", Monaco, Menlo, Consolas, "Ubuntu Mono", "Liberation Mono", "DejaVu Sans Mono", "Courier New", monospace;
}

.monaco-menu .monaco-action-bar.vertical .action-item .action-menu-item:focus .action-label {
	stroke-width: 1.2px;
}

.monaco-editor.vs-dark .monaco-menu .monaco-action-bar.vertical .action-menu-item:focus .action-label,
.monaco-editor.hc-black .monaco-menu .monaco-action-bar.vertical .action-menu-item:focus .action-label {
	stroke-width: 1.2px;
}

.monaco-hover p {
	margin: 0;
}

/* See https://github.com/microsoft/monaco-editor/issues/2168#issuecomment-780078600 */
.monaco-aria-container {
	position: absolute !important;
	top: 0; /* avoid being placed underneath a sibling element */
	height: 1px;
	width: 1px;
	margin: -1px;
	overflow: hidden;
	padding: 0;
	clip: rect(1px, 1px, 1px, 1px);
	clip-path: inset(50%);
}

/* The hc-black theme is already high contrast optimized */
.monaco-editor.hc-black {
	-ms-high-contrast-adjust: none;
}
/* In case the browser goes into high contrast mode and the editor is not configured with the hc-black theme */
@media screen and (-ms-high-contrast:active) {

	/* current line highlight */
	.monaco-editor.vs .view-overlays .current-line,
	.monaco-editor.vs-dark .view-overlays .current-line {
		border-color: windowtext !important;
		border-left: 0;
		border-right: 0;
	}

	/* view cursors */
	.monaco-editor.vs .cursor,
	.monaco-editor.vs-dark .cursor {
		background-color: windowtext !important;
	}
	/* dnd target */
	.monaco-editor.vs .dnd-target,
	.monaco-editor.vs-dark .dnd-target {
		border-color: windowtext !important;
	}

	/* selected text background */
	.monaco-editor.vs .selected-text,
	.monaco-editor.vs-dark .selected-text {
		background-color: highlight !important;
	}

	/* allow the text to have a transparent background. */
	.monaco-editor.vs .view-line,
	.monaco-editor.vs-dark .view-line {
		-ms-high-contrast-adjust: none;
	}

	/* text color */
	.monaco-editor.vs .view-line span,
	.monaco-editor.vs-dark .view-line span {
		color: windowtext !important;
	}
	/* selected text color */
	.monaco-editor.vs .view-line span.inline-selected-text,
	.monaco-editor.vs-dark .view-line span.inline-selected-text {
		color: highlighttext !important;
	}

	/* allow decorations */
	.monaco-editor.vs .view-overlays,
	.monaco-editor.vs-dark .view-overlays {
		-ms-high-contrast-adjust: none;
	}

	/* various decorations */
	.monaco-editor.vs .selectionHighlight,
	.monaco-editor.vs-dark .selectionHighlight,
	.monaco-editor.vs .wordHighlight,
	.monaco-editor.vs-dark .wordHighlight,
	.monaco-editor.vs .wordHighlightStrong,
	.monaco-editor.vs-dark .wordHighlightStrong,
	.monaco-editor.vs .reference-decoration,
	.monaco-editor.vs-dark .reference-decoration {
		border: 2px dotted highlight !important;
		background: transparent !important;
		box-sizing: border-box;
	}
	.monaco-editor.vs .rangeHighlight,
	.monaco-editor.vs-dark .rangeHighlight {
		background: transparent !important;
		border: 1px dotted activeborder !important;
		box-sizing: border-box;
	}
	.monaco-editor.vs .bracket-match,
	.monaco-editor.vs-dark .bracket-match {
		border-color: windowtext !important;
		background: transparent !important;
	}

	/* find widget */
	.monaco-editor.vs .findMatch,
	.monaco-editor.vs-dark .findMatch,
	.monaco-editor.vs .currentFindMatch,
	.monaco-editor.vs-dark .currentFindMatch {
		border: 2px dotted activeborder !important;
		background: transparent !important;
		box-sizing: border-box;
	}
	.monaco-editor.vs .find-widget,
	.monaco-editor.vs-dark .find-widget {
		border: 1px solid windowtext;
	}

	/* list - used by suggest widget */
	.monaco-editor.vs .monaco-list .monaco-list-row,
	.monaco-editor.vs-dark .monaco-list .monaco-list-row {
		-ms-high-contrast-adjust: none;
		color: windowtext !important;
	}
	.monaco-editor.vs .monaco-list .monaco-list-row.focused,
	.monaco-editor.vs-dark .monaco-list .monaco-list-row.focused {
		color: highlighttext !important;
		background-color: highlight !important;
	}
	.monaco-editor.vs .monaco-list .monaco-list-row:hover,
	.monaco-editor.vs-dark .monaco-list .monaco-list-row:hover {
		background: transparent !important;
		border: 1px solid highlight;
		box-sizing: border-box;
	}

	/* scrollbars */
	.monaco-editor.vs .monaco-scrollable-element > .scrollbar,
	.monaco-editor.vs-dark .monaco-scrollable-element > .scrollbar {
		-ms-high-contrast-adjust: none;
		background: background !important;
		border: 1px solid windowtext;
		box-sizing: border-box;
	}
	.monaco-editor.vs .monaco-scrollable-element > .scrollbar > .slider,
	.monaco-editor.vs-dark .monaco-scrollable-element > .scrollbar > .slider {
		background: windowtext !important;
	}
	.monaco-editor.vs .monaco-scrollable-element > .scrollbar > .slider:hover,
	.monaco-editor.vs-dark .monaco-scrollable-element > .scrollbar > .slider:hover {
		background: highlight !important;
	}
	.monaco-editor.vs .monaco-scrollable-element > .scrollbar > .slider.active,
	.monaco-editor.vs-dark .monaco-scrollable-element > .scrollbar > .slider.active {
		background: highlight !important;
	}

	/* overview ruler */
	.monaco-editor.vs .decorationsOverviewRuler,
	.monaco-editor.vs-dark .decorationsOverviewRuler {
		opacity: 0;
	}

	/* minimap */
	.monaco-editor.vs .minimap,
	.monaco-editor.vs-dark .minimap {
		display: none;
	}

	/* squiggles */
	.monaco-editor.vs .squiggly-d-error,
	.monaco-editor.vs-dark .squiggly-d-error {
		background: transparent !important;
		border-bottom: 4px double #E47777;
	}
	.monaco-editor.vs .squiggly-c-warning,
	.monaco-editor.vs-dark .squiggly-c-warning {
		border-bottom: 4px double #71B771;
	}
	.monaco-editor.vs .squiggly-b-info,
	.monaco-editor.vs-dark .squiggly-b-info {
		border-bottom: 4px double #71B771;
	}
	.monaco-editor.vs .squiggly-a-hint,
	.monaco-editor.vs-dark .squiggly-a-hint {
		border-bottom: 4px double #6c6c6c;
	}

	/* contextmenu */
	.monaco-editor.vs .monaco-menu .monaco-action-bar.vertical .action-menu-item:focus .action-label,
	.monaco-editor.vs-dark .monaco-menu .monaco-action-bar.vertical .action-menu-item:focus .action-label {
		-ms-high-contrast-adjust: none;
		color: highlighttext !important;
		background-color: highlight !important;
	}
	.monaco-editor.vs .monaco-menu .monaco-action-bar.vertical .action-menu-item:hover .action-label,
	.monaco-editor.vs-dark .monaco-menu .monaco-action-bar.vertical .action-menu-item:hover .action-label {
		-ms-high-contrast-adjust: none;
		background: transparent !important;
		border: 1px solid highlight;
		box-sizing: border-box;
	}

	/* diff editor */
	.monaco-diff-editor.vs .diffOverviewRuler,
	.monaco-diff-editor.vs-dark .diffOverviewRuler {
		display: none;
	}
	.monaco-editor.vs .line-insert,
	.monaco-editor.vs-dark .line-insert,
	.monaco-editor.vs .line-delete,
	.monaco-editor.vs-dark .line-delete {
		background: transparent !important;
		border: 1px solid highlight !important;
		box-sizing: border-box;
	}
	.monaco-editor.vs .char-insert,
	.monaco-editor.vs-dark .char-insert,
	.monaco-editor.vs .char-delete,
	.monaco-editor.vs-dark .char-delete {
		background: transparent !important;
	}
}

/*.monaco-editor.vs [tabindex="0"]:focus {
	outline: 1px solid rgba(0, 122, 204, 0.4);
	outline-offset: -1px;
	opacity: 1 !important;
}

.monaco-editor.vs-dark [tabindex="0"]:focus {
	outline: 1px solid rgba(14, 99, 156, 0.6);
	outline-offset: -1px;
	opacity: 1 !important;
}*/
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/
/* ---------- DiffEditor ---------- */

.monaco-diff-editor .diffOverview {
	z-index: 9;
}

.monaco-diff-editor .diffOverview .diffViewport {
	z-index: 10;
}

/* colors not externalized: using transparancy on background */
.monaco-diff-editor.vs			.diffOverview { background: rgba(0, 0, 0, 0.03); }
.monaco-diff-editor.vs-dark		.diffOverview { background: rgba(255, 255, 255, 0.01); }

.monaco-scrollable-element.modified-in-monaco-diff-editor.vs		.scrollbar { background: rgba(0,0,0,0); }
.monaco-scrollable-element.modified-in-monaco-diff-editor.vs-dark	.scrollbar { background: rgba(0,0,0,0); }
.monaco-scrollable-element.modified-in-monaco-diff-editor.hc-black	.scrollbar { background: none; }

.monaco-scrollable-element.modified-in-monaco-diff-editor .slider {
	z-index: 10;
}
.modified-in-monaco-diff-editor				.slider.active { background: rgba(171, 171, 171, .4); }
.modified-in-monaco-diff-editor.hc-black	.slider.active { background: none; }

/* ---------- Diff ---------- */

.monaco-editor .insert-sign,
.monaco-diff-editor .insert-sign,
.monaco-editor .delete-sign,
.monaco-diff-editor .delete-sign {
	font-size: 11px !important;
	opacity: 0.7 !important;
	display: flex !important;
	align-items: center;
}
.monaco-editor.hc-black .insert-sign,
.monaco-diff-editor.hc-black .insert-sign,
.monaco-editor.hc-black .delete-sign,
.monaco-diff-editor.hc-black .delete-sign {
	opacity: 1;
}

.monaco-editor .inline-deleted-margin-view-zone {
	text-align: right;
}
.monaco-editor .inline-added-margin-view-zone {
	text-align: right;
}

/* ---------- Inline Diff ---------- */

.monaco-editor .view-zones .view-lines .view-line span {
	display: inline-block;
}

.monaco-editor .margin-view-zones .lightbulb-glyph:hover {
	cursor: pointer;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-diff-editor .diff-review-line-number {
	text-align: right;
	display: inline-block;
}

.monaco-diff-editor .diff-review {
	position: absolute;
	user-select: none;
	-webkit-user-select: none;
	-ms-user-select: none;
}

.monaco-diff-editor .diff-review-summary {
	padding-left: 10px;
}

.monaco-diff-editor .diff-review-shadow {
	position: absolute;
}

.monaco-diff-editor .diff-review-row {
	white-space: pre;
}

.monaco-diff-editor .diff-review-table {
	display: table;
	min-width: 100%;
}

.monaco-diff-editor .diff-review-row {
	display: table-row;
	width: 100%;
}

.monaco-diff-editor .diff-review-spacer {
	display: inline-block;
	width: 10px;
	vertical-align: middle;
}

.monaco-diff-editor .diff-review-spacer > .codicon {
	font-size: 9px !important;
}

.monaco-diff-editor .diff-review-actions {
	display: inline-block;
	position: absolute;
	right: 10px;
	top: 2px;
}

.monaco-diff-editor .diff-review-actions .action-label {
	width: 16px;
	height: 16px;
	margin: 2px 0;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.context-view {
	position: absolute;
	z-index: 2500;
}

.context-view.fixed {
	all: initial;
	font-family: inherit;
	font-size: 13px;
	position: fixed;
	z-index: 2500;
	color: inherit;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.context-view .monaco-menu {
	min-width: 130px;
}

</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.quick-input-widget {
	font-size: 13px;
}

.quick-input-widget .monaco-highlighted-label .highlight,
.quick-input-widget .monaco-highlighted-label .highlight {
	color: #0066BF;
}

.vs .quick-input-widget .monaco-list-row.focused .monaco-highlighted-label .highlight,
.vs .quick-input-widget .monaco-list-row.focused .monaco-highlighted-label .highlight {
	color: #9DDDFF;
}

.vs-dark .quick-input-widget .monaco-highlighted-label .highlight,
.vs-dark .quick-input-widget .monaco-highlighted-label .highlight {
	color: #0097fb;
}

.hc-black .quick-input-widget .monaco-highlighted-label .highlight,
.hc-black .quick-input-widget .monaco-highlighted-label .highlight {
	color: #F38518;
}

.monaco-keybinding > .monaco-keybinding-key {
	background-color: rgba(221, 221, 221, 0.4);
	border: solid 1px rgba(204, 204, 204, 0.4);
	border-bottom-color: rgba(187, 187, 187, 0.4);
	box-shadow: inset 0 -1px 0 rgba(187, 187, 187, 0.4);
	color: #555;
}

.hc-black .monaco-keybinding > .monaco-keybinding-key {
	background-color: transparent;
	border: solid 1px rgb(111, 195, 223);
	box-shadow: none;
	color: #fff;
}

.vs-dark .monaco-keybinding > .monaco-keybinding-key {
	background-color: rgba(128, 128, 128, 0.17);
	border: solid 1px rgba(51, 51, 51, 0.6);
	border-bottom-color: rgba(68, 68, 68, 0.6);
	box-shadow: inset 0 -1px 0 rgba(68, 68, 68, 0.6);
	color: #ccc;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-text-button {
	box-sizing: border-box;
	display: flex;
	width: 100%;
	padding: 4px;
	text-align: center;
	cursor: pointer;
	justify-content: center;
	align-items: center;
}

.monaco-text-button:focus {
	outline-offset: 2px !important;
}

.monaco-text-button:hover {
	text-decoration: none !important;
}

.monaco-button.disabled:focus,
.monaco-button.disabled {
	opacity: 0.4 !important;
	cursor: default;
}

.monaco-text-button > .codicon {
	margin: 0 0.2em;
	color: inherit !important;
}

.monaco-button-dropdown {
	display: flex;
	cursor: pointer;
}

.monaco-button-dropdown > .monaco-dropdown-button {
	margin-left: 1px;
}

.monaco-description-button {
	flex-direction: column;
}

.monaco-description-button .monaco-button-label {
	font-weight: 500;
}

.monaco-description-button .monaco-button-description {
	font-style: italic;
}

.monaco-description-button .monaco-button-label,
.monaco-description-button .monaco-button-description
{
	display: flex;
	justify-content: center;
	align-items: center;
}

.monaco-description-button .monaco-button-label > .codicon,
.monaco-description-button .monaco-button-description > .codicon
{
	margin: 0 0.2em;
	color: inherit !important;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-progress-container {
	width: 100%;
	height: 5px;
	overflow: hidden; /* keep progress bit in bounds */
}

.monaco-progress-container .progress-bit {
	width: 2%;
	height: 5px;
	position: absolute;
	left: 0;
	display: none;
}

.monaco-progress-container.active .progress-bit {
	display: inherit;
}

.monaco-progress-container.discrete .progress-bit {
	left: 0;
	transition: width 100ms linear;
}

.monaco-progress-container.discrete.done .progress-bit {
	width: 100%;
}

.monaco-progress-container.infinite .progress-bit {
	animation-name: progress;
	animation-duration: 4s;
	animation-iteration-count: infinite;
	transform: translate3d(0px, 0px, 0px);
	animation-timing-function: linear;
}

.monaco-progress-container.infinite.infinite-long-running .progress-bit {
	/*
		The more smooth `linear` timing function can cause
		higher GPU consumption as indicated in
		https://github.com/microsoft/vscode/issues/97900 &
		https://github.com/microsoft/vscode/issues/138396
	*/
	animation-timing-function: steps(100);
}

/**
 * The progress bit has a width: 2% (1/50) of the parent container. The animation moves it from 0% to 100% of
 * that container. Since translateX is relative to the progress bit size, we have to multiple it with
 * its relative size to the parent container:
 * parent width: 5000%
 *    bit width: 100%
 * translateX should be as follow:
 *  50%: 5000% * 50% - 50% (set to center) = 2450%
 * 100%: 5000% * 100% - 100% (do not overflow) = 4900%
 */
@keyframes progress { from { transform: translateX(0%) scaleX(1) } 50% { transform: translateX(2500%) scaleX(3) } to { transform: translateX(4900%) scaleX(1) } }
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.quick-input-widget {
	position: absolute;
	width: 600px;
	z-index: 2000;
	padding: 0 1px 1px 1px;
	left: 50%;
	margin-left: -300px;
}

.quick-input-titlebar {
	display: flex;
	align-items: center;
}

.quick-input-left-action-bar {
	display: flex;
	margin-left: 4px;
	flex: 1;
}

.quick-input-title {
	padding: 3px 0px;
	text-align: center;
	text-overflow: ellipsis;
	overflow: hidden;
}

.quick-input-right-action-bar {
	display: flex;
	margin-right: 4px;
	flex: 1;
}

.quick-input-right-action-bar > .actions-container {
	justify-content: flex-end;
}

.quick-input-titlebar .monaco-action-bar .action-label.codicon {
	background-position: center;
	background-repeat: no-repeat;
	padding: 2px;
}

.quick-input-description {
	margin: 6px;
}

.quick-input-header .quick-input-description {
	margin: 4px 2px;
}

.quick-input-header {
	display: flex;
	padding: 6px 6px 0px 6px;
	margin-bottom: -2px;
}

.quick-input-widget.hidden-input .quick-input-header {
	/* reduce margins and paddings when input box hidden */
	padding: 0;
	margin-bottom: 0;
}

.quick-input-and-message {
	display: flex;
	flex-direction: column;
	flex-grow: 1;
	min-width: 0;
	position: relative;
}

.quick-input-check-all {
	align-self: center;
	margin: 0;
}

.quick-input-filter {
	flex-grow: 1;
	display: flex;
	position: relative;
}

.quick-input-box {
	flex-grow: 1;
}

.quick-input-widget.show-checkboxes .quick-input-box,
.quick-input-widget.show-checkboxes .quick-input-message {
	margin-left: 5px;
}

.quick-input-visible-count {
	position: absolute;
	left: -10000px;
}

.quick-input-count {
	align-self: center;
	position: absolute;
	right: 4px;
	display: flex;
	align-items: center;
}

.quick-input-count .monaco-count-badge {
	vertical-align: middle;
	padding: 2px 4px;
	border-radius: 2px;
	min-height: auto;
	line-height: normal;
}

.quick-input-action {
	margin-left: 6px;
}

.quick-input-action .monaco-text-button {
	font-size: 11px;
	padding: 0 6px;
	display: flex;
	height: 27.5px;
	align-items: center;
}

.quick-input-message {
	margin-top: -1px;
	padding: 5px;
	overflow-wrap: break-word;
}

.quick-input-message > .codicon {
	margin: 0 0.2em;
	vertical-align: text-bottom;
}

.quick-input-progress.monaco-progress-container {
	position: relative;
}

.quick-input-progress.monaco-progress-container,
.quick-input-progress.monaco-progress-container .progress-bit {
	height: 2px;
}

.quick-input-list {
	line-height: 22px;
	margin-top: 6px;
}

.quick-input-widget.hidden-input .quick-input-list {
	margin-top: 0; /* reduce margins when input box hidden */
}

.quick-input-list .monaco-list {
	overflow: hidden;
	max-height: calc(20 * 22px);
}

.quick-input-list .quick-input-list-entry {
	box-sizing: border-box;
	overflow: hidden;
	display: flex;
	height: 100%;
	padding: 0 6px;
}

.quick-input-list .quick-input-list-entry.quick-input-list-separator-border {
	border-top-width: 1px;
	border-top-style: solid;
}

.quick-input-list .monaco-list-row[data-index="0"] .quick-input-list-entry.quick-input-list-separator-border {
	border-top-style: none;
}

.quick-input-list .quick-input-list-label {
	overflow: hidden;
	display: flex;
	height: 100%;
	flex: 1;
}

.quick-input-list .quick-input-list-checkbox {
	align-self: center;
	margin: 0;
}

.quick-input-list .quick-input-list-rows {
	overflow: hidden;
	text-overflow: ellipsis;
	display: flex;
	flex-direction: column;
	height: 100%;
	flex: 1;
	margin-left: 5px;
}

.quick-input-widget.show-checkboxes .quick-input-list .quick-input-list-rows {
	margin-left: 10px;
}

.quick-input-widget .quick-input-list .quick-input-list-checkbox {
	display: none;
}
.quick-input-widget.show-checkboxes .quick-input-list .quick-input-list-checkbox {
	display: inline;
}

.quick-input-list .quick-input-list-rows > .quick-input-list-row {
	display: flex;
	align-items: center;
}

.quick-input-list .quick-input-list-rows > .quick-input-list-row .monaco-icon-label,
.quick-input-list .quick-input-list-rows > .quick-input-list-row .monaco-icon-label .monaco-icon-label-container > .monaco-icon-name-container {
	flex: 1; /* make sure the icon label grows within the row */
}

.quick-input-list .quick-input-list-rows > .quick-input-list-row .codicon[class*='codicon-'] {
	vertical-align: text-bottom;
}

.quick-input-list .quick-input-list-rows .monaco-highlighted-label span {
	opacity: 1;
}

.quick-input-list .quick-input-list-entry .quick-input-list-entry-keybinding {
	margin-right: 8px; /* separate from the separator label or scrollbar if any */
}

.quick-input-list .quick-input-list-label-meta {
	opacity: 0.7;
	line-height: normal;
	text-overflow: ellipsis;
	overflow: hidden;
}

.quick-input-list .monaco-highlighted-label .highlight {
	font-weight: bold;
}

.quick-input-list .quick-input-list-entry .quick-input-list-separator {
	margin-right: 8px; /* separate from keybindings or actions */
}

.quick-input-list .quick-input-list-entry-action-bar {
	display: flex;
	flex: 0;
	overflow: visible;
}

.quick-input-list .quick-input-list-entry-action-bar .action-label {
	/*
	 * By default, actions in the quick input action bar are hidden
	 * until hovered over them or selected.
	 */
	display: none;
}

.quick-input-list .quick-input-list-entry-action-bar .action-label.codicon {
	margin-right: 4px;
	padding: 0px 2px 2px 2px;
}

.quick-input-list .quick-input-list-entry-action-bar {
	margin-top: 1px;
}

.quick-input-list .quick-input-list-entry-action-bar {
	margin-right: 4px; /* separate from scrollbar */
}

.quick-input-list .quick-input-list-entry .quick-input-list-entry-action-bar .action-label.always-visible,
.quick-input-list .quick-input-list-entry:hover .quick-input-list-entry-action-bar .action-label,
.quick-input-list .monaco-list-row.focused .quick-input-list-entry-action-bar .action-label {
	display: flex;
}

/* focused items in quick pick */
.quick-input-list .monaco-list-row.focused .monaco-keybinding-key,
.quick-input-list .monaco-list-row.focused .quick-input-list-entry .quick-input-list-separator {
	color: inherit
}
.quick-input-list .monaco-list-row.focused .monaco-keybinding-key {
	background: none;
}
</style><style>/*---------------------------------------------------------------------------------------------
 *  Copyright (c) Microsoft Corporation. All rights reserved.
 *  Licensed under the MIT License. See License.txt in the project root for license information.
 *--------------------------------------------------------------------------------------------*/

.monaco-keybinding {
	display: flex;
	align-items: center;
	line-height: 10px;
}

.monaco-keybinding > .monaco-keybinding-key {
	display: inline-block;
	border-style: solid;
	border-width: 1px;
	border-radius: 3px;
	vertical-align: middle;
	font-size: 11px;
	padding: 3px 5px;
	margin: 0 2px;
}

.monaco-keybinding > .monaco-keybinding-key:first-child {
	margin-left: 0;
}

.monaco-keybinding > .monaco-keybinding-key:last-child {
	margin-right: 0;
}

.monaco-keybinding > .monaco-keybinding-key-separator {
	display: inline-block;
}

.monaco-keybinding > .monaco-keybinding-key-chord-separator {
	width: 6px;
}
</style><style id="97045">.FN9Jv{overflow-wrap:break-word;word-break:normal}.FN9Jv img,.FN9Jv video{margin-bottom:1rem}.FN9Jv>:last-child{margin-bottom:0}.FN9Jv>:first-child{margin-top:0}.FN9Jv>div:first-child{margin-top:5px}.FN9Jv iframe{margin-bottom:1rem;max-width:100%}.FN9Jv h1{font-size:1.5rem;line-height:2rem}.FN9Jv h1,.FN9Jv h2{font-weight:700;margin-bottom:1rem;margin-top:1.5rem}.FN9Jv h2{font-size:1.25rem;line-height:1.75rem}.FN9Jv h3{font-size:1.125rem;line-height:1.75rem}.FN9Jv h3,.FN9Jv h4{font-weight:700;margin-bottom:1rem;margin-top:1.5rem}.FN9Jv h4{font-size:17px}.FN9Jv h5{font-weight:700}.FN9Jv h5,.FN9Jv h6{font-size:1rem;line-height:1.5rem;margin-bottom:1rem;margin-top:1.5rem}.FN9Jv h1,.FN9Jv h2,.FN9Jv h3,.FN9Jv h4{--tw-text-opacity:1;color:rgb(38 38 38/var(--tw-text-opacity))}.dark .FN9Jv h1,.dark .FN9Jv h2,.dark .FN9Jv h3,.dark .FN9Jv h4{--tw-text-opacity:1;color:rgb(255 255 255/var(--tw-text-opacity))}.FN9Jv p{font-size:.875rem;line-height:1.25rem;line-height:22px;margin-bottom:1rem;overflow-x:auto;overflow-y:hidden}.FN9Jv p:first-child{margin-top:0}.FN9Jv h5,.FN9Jv h6,.FN9Jv p,.FN9Jv>div{--tw-text-opacity:1;color:rgb(38 38 38/var(--tw-text-opacity))}.dark .FN9Jv h5,.dark .FN9Jv h6,.dark .FN9Jv p,.dark .FN9Jv>div{--tw-text-opacity:1;color:rgb(255 255 255/var(--tw-text-opacity))}.FN9Jv a{--tw-text-opacity:1;color:rgb(0 122 255/var(--tw-text-opacity));margin-bottom:1rem}.FN9Jv a:hover{text-decoration-line:underline}.dark .FN9Jv a{--tw-text-opacity:1;color:rgb(10 132 255/var(--tw-text-opacity))}.FN9Jv strong{--tw-text-opacity:1;color:rgb(38 38 38/var(--tw-text-opacity));font-weight:700}.dark .FN9Jv strong{--tw-text-opacity:1;color:rgb(255 255 255/var(--tw-text-opacity))}.FN9Jv blockquote{--tw-border-opacity:1;border-color:rgb(229 229 229/var(--tw-border-opacity));border-left-width:6px;margin-bottom:1rem}.dark .FN9Jv blockquote{--tw-border-opacity:1;border-color:rgb(66 66 66/var(--tw-border-opacity))}.FN9Jv blockquote>*{margin-left:1rem}.FN9Jv blockquote *{color:#3c3c4399!important}.dark .FN9Jv blockquote *{color:#eff2f699!important}.FN9Jv hr{border-bottom-width:2px;border-color:#0000000d;margin-bottom:1.5rem;margin-top:1.5rem}.dark .FN9Jv hr{border-color:#f7faff1f}.FN9Jv ins,.FN9Jv u{color:#3c3c4399;text-decoration-line:underline}.dark .FN9Jv ins,.dark .FN9Jv u{color:#eff2f699}.FN9Jv ul{--tw-text-opacity:1;color:rgb(38 38 38/var(--tw-text-opacity));font-size:1rem;line-height:1.5rem;list-style-type:disc;margin-bottom:1rem}.dark .FN9Jv ul{--tw-text-opacity:1;color:rgb(255 255 255/var(--tw-text-opacity))}.FN9Jv ol ol,.FN9Jv ul ul{margin-bottom:0;margin-top:.25rem}.FN9Jv ul ul{list-style-type:circle}.FN9Jv ol ol{list-style-type:lower-alpha}.FN9Jv li{margin-bottom:.25rem;margin-left:2rem}.FN9Jv li:last-child{margin-bottom:0}.FN9Jv li p:first-child{overflow:visible}.FN9Jv ol{--tw-text-opacity:1;color:rgb(38 38 38/var(--tw-text-opacity));font-size:1rem;line-height:1.5rem;list-style-type:decimal;margin-bottom:1rem}.dark .FN9Jv ol{--tw-text-opacity:1;color:rgb(255 255 255/var(--tw-text-opacity))}.FN9Jv code,.FN9Jv pre{color:#262626bf}.dark .FN9Jv code,.dark .FN9Jv pre{color:#eff1f6bf}.FN9Jv code,.FN9Jv pre{background-color:#000a200d;border-radius:.5rem;font-family:Menlo,sans-serif;font-size:.75rem;line-height:1.5rem}.FN9Jv pre{border-radius:0;margin-bottom:1rem;padding:.625rem .75rem}.FN9Jv>pre{border-radius:.5rem}.FN9Jv code{margin:1rem .25rem;padding:.25rem}.dark .FN9Jv code,.dark .FN9Jv pre{background-color:#ffffff1a}.FN9Jv pre code{background-color:initial;border-radius:0;margin:0;padding:0}.dark .FN9Jv pre code{background-color:initial}.FN9Jv table{--tw-text-opacity:1;border-radius:.5rem;border-style:hidden;box-shadow:0 0 0 1px #e5e5e5;color:rgb(38 38 38/var(--tw-text-opacity));margin-bottom:1.5rem}.dark .FN9Jv table{--tw-border-opacity:1;--tw-text-opacity:1;border-color:rgb(74 74 74/var(--tw-border-opacity));box-shadow:0 0 0 1px #424242;color:rgb(255 255 255/var(--tw-text-opacity))}.FN9Jv table th{--tw-border-opacity:1;background-color:#000a200d;border-color:rgb(223 223 223/var(--tw-border-opacity));border-width:1px;font-size:1rem;font-weight:500;line-height:1.5rem;padding:1rem 1.25rem}.FN9Jv table th:first-child{border-top-left-radius:.5rem}.FN9Jv table th:last-child{border-top-right-radius:.5rem}.dark .FN9Jv table th{--tw-border-opacity:1;background-color:#ffffff1a;border-color:rgb(74 74 74/var(--tw-border-opacity))}.FN9Jv table td{--tw-border-opacity:1;border-color:rgb(223 223 223/var(--tw-border-opacity));border-width:1px;font-size:1rem;line-height:1.5rem;padding:1rem 1.25rem}.dark .FN9Jv table td{--tw-border-opacity:1;border-color:rgb(74 74 74/var(--tw-border-opacity))}.FN9Jv .language-md .table{display:inline!important}.FN9Jv .katex-html{overflow-x:auto}.FN9Jv .katex{color:#262626bf;font-size:1rem!important;line-height:1.5rem!important;margin-left:2px;margin-right:2px}.dark .FN9Jv .katex{color:#eff1f6bf}
/*# sourceMappingURL=data:application/json;charset=utf-8;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbIndlYnBhY2s6Ly8uL2NvbXBvbmVudHMvbWFya2Rvd24vbWFya2Rvd24tY29udGVudC5pc28uY3NzIl0sIm5hbWVzIjpbXSwibWFwcGluZ3MiOiJBQUFBLE9BRUUsd0JBQXlCLENBRHpCLGlCQUVGLENBSUUsd0JBQUEsa0JBQVcsQ0FHYixtQkFDRSxlQUNGLENBRUEsb0JBQ0UsWUFDRixDQUVBLHVCQUNFLGNBQ0YsQ0FFQSxjQUVFLGtCQUFXLENBRFgsY0FFRixDQUdFLFVBQUEsZ0JBQW1DLENBQW5DLGdCQUFtQyxDQUluQyxvQkFKQSxlQUFtQyxDQUFuQyxrQkFBbUMsQ0FBbkMsaUJBSWtDLENBQWxDLFVBQUEsaUJBQWtDLENBQWxDLG1CQUFrQyxDQUlsQyxVQUFBLGtCQUFrQyxDQUFsQyxtQkFBa0MsQ0FJbEMsb0JBSkEsZUFBa0MsQ0FBbEMsa0JBQWtDLENBQWxDLGlCQUlzQyxDQUF0QyxVQUFBLGNBQXNDLENBSXRDLFVBQUEsZUFBb0MsQ0FJcEMsb0JBSkEsY0FBb0MsQ0FBcEMsa0JBQW9DLENBQXBDLGtCQUFvQyxDQUFwQyxpQkFJMEIsQ0FPMUIsd0NBQUEsbUJBQW1CLENBQW5CLDBDQUFtQixDQU9uQixnRUFBQSxtQkFBd0IsQ0FBeEIsNkNBQXdCLENBSXhCLFNBQUEsaUJBQW9FLENBQXBFLG1CQUFvRSxDQUFwRSxnQkFBb0UsQ0FBcEUsa0JBQW9FLENBQXBFLGVBQW9FLENBQXBFLGlCQUFvRSxDQUlwRSxxQkFBQSxZQUFXLENBT1gsd0NBQUEsbUJBQW1CLENBQW5CLDBDQUFtQixDQU9uQixnRUFBQSxtQkFBd0IsQ0FBeEIsNkNBQXdCLENBSXhCLFNBQUEsbUJBQXVCLENBQXZCLDJDQUF1QixDQUF2QixrQkFBdUIsQ0FJdkIsZUFBQSw4QkFBZ0IsQ0FJaEIsZUFBQSxtQkFBdUIsQ0FBdkIsNENBQXVCLENBSXZCLGNBQUEsbUJBQTZCLENBQTdCLDBDQUE2QixDQUE3QixlQUE2QixDQUk3QixvQkFBQSxtQkFBd0IsQ0FBeEIsNkNBQXdCLENBSXhCLGtCQUFBLHFCQUF3QyxDQUF4QyxzREFBd0MsQ0FBeEMscUJBQXdDLENBQXhDLGtCQUF3QyxDQUl4Qyx3QkFBQSxxQkFBeUIsQ0FBekIsbURBQXlCLENBSXpCLG9CQUFBLGdCQUFXLENBSVgsb0JBQUEseUJBQW9CLENBSXBCLDBCQUFBLHlCQUF5QixDQUl6QixVQUFBLHVCQUF1QyxDQUF2QyxzQkFBdUMsQ0FBdkMsb0JBQXVDLENBQXZDLGlCQUF1QyxDQUl2QyxnQkFBQSxzQkFBNEIsQ0FLNUIsb0JBQUEsZUFBNkIsQ0FBN0IsOEJBQTZCLENBSzdCLGdDQUFBLGVBQXdCLENBSXhCLFVBQUEsbUJBQTRDLENBQTVDLDBDQUE0QyxDQUE1QyxjQUE0QyxDQUE1QyxrQkFBNEMsQ0FBNUMsb0JBQTRDLENBQTVDLGtCQUE0QyxDQUk1QyxnQkFBQSxtQkFBd0IsQ0FBeEIsNkNBQXdCLENBS3hCLDBCQUFBLGVBQWdCLENBQWhCLGlCQUFnQixDQUdsQixhQUNFLHNCQUNGLENBRUEsYUFDRSwyQkFDRixDQUdFLFVBQUEsb0JBQWdCLENBQWhCLGdCQUFnQixDQUloQixxQkFBQSxlQUFXLENBSVgsd0JBQUEsZ0JBQXVCLENBSXZCLFVBQUEsbUJBQStDLENBQS9DLDBDQUErQyxDQUEvQyxjQUErQyxDQUEvQyxrQkFBK0MsQ0FBL0MsdUJBQStDLENBQS9DLGtCQUErQyxDQUkvQyxnQkFBQSxtQkFBd0IsQ0FBeEIsNkNBQXdCLENBS3hCLHVCQUFBLGVBQW1CLENBS25CLG1DQUFBLGVBQXdCLENBS3hCLHVCQUFBLDBCQUF3RCxDQUF4RCxtQkFBd0QsQ0FBeEQsNEJBQXdELENBQXhELGdCQUF3RCxDQUF4RCxrQkFBd0QsQ0FJeEQsV0FBQSxlQUFvQyxDQUFwQyxrQkFBb0MsQ0FBcEMsc0JBQW9DLENBSXBDLFdBQUEsbUJBQWlCLENBSWpCLFlBQUEsa0JBQW9CLENBQXBCLGNBQW9CLENBS3BCLG1DQUFBLDBCQUFxQixDQUlyQixnQkFBQSx3QkFBZ0QsQ0FBaEQsZUFBZ0QsQ0FBaEQsUUFBZ0QsQ0FBaEQsU0FBZ0QsQ0FJaEQsc0JBQUEsd0JBQXFCLENBR3ZCLGFBRUUsbUJBQWlELENBQWpELG1CQUFpRCxDQUFqRCxtQkFBaUQsQ0FEakQsNEJBQTZCLENBQzdCLDBDQUFpRCxDQUFqRCxvQkFDRixDQUVBLG1CQUVFLHFCQUEyQyxDQUEzQyxtQkFBMkMsQ0FBM0MsbURBQTJDLENBRDNDLDRCQUE2QixDQUM3Qiw2Q0FDRixDQUdFLGdCQUFBLHFCQUEyRSxDQUEzRSwwQkFBMkUsQ0FBM0Usc0RBQTJFLENBQTNFLGdCQUEyRSxDQUEzRSxjQUEyRSxDQUEzRSxlQUEyRSxDQUEzRSxrQkFBMkUsQ0FBM0Usb0JBQTJFLENBSTNFLDRCQUFBLDRCQUFvQixDQUlwQiwyQkFBQSw2QkFBb0IsQ0FJcEIsc0JBQUEscUJBQXdDLENBQXhDLDBCQUF3QyxDQUF4QyxtREFBd0MsQ0FJeEMsZ0JBQUEscUJBQXFELENBQXJELHNEQUFxRCxDQUFyRCxnQkFBcUQsQ0FBckQsY0FBcUQsQ0FBckQsa0JBQXFELENBQXJELG9CQUFxRCxDQUlyRCxzQkFBQSxxQkFBeUIsQ0FBekIsbURBQXlCLENBRzNCLDJCQUtFLHdCQUNGLENBRUEsbUJBQ0UsZUFDRixDQUdFLGNBQUEsZUFBdUMsQ0FBdkMsd0JBQXVDLENBQXZDLDRCQUF1QyxDQUF2QyxlQUF1QyxDQUF2QyxnQkFBdUMsQ0FJdkMsb0JBQUEsZUFBd0IiLCJzb3VyY2VzQ29udGVudCI6WyIubWFya2Rvd24ge1xuICB3b3JkLWJyZWFrOiBub3JtYWw7XG4gIG92ZXJmbG93LXdyYXA6IGJyZWFrLXdvcmQ7XG59XG5cbi5tYXJrZG93biBpbWcsXG4ubWFya2Rvd24gdmlkZW8ge1xuICBAYXBwbHkgbWItNDtcbn1cblxuLm1hcmtkb3duID4gKjpsYXN0LWNoaWxkIHtcbiAgbWFyZ2luLWJvdHRvbTogMDtcbn1cblxuLm1hcmtkb3duID4gKjpmaXJzdC1jaGlsZCB7XG4gIG1hcmdpbi10b3A6IDA7XG59XG5cbi5tYXJrZG93biA+IGRpdjpmaXJzdC1jaGlsZCB7XG4gIG1hcmdpbi10b3A6IDVweDtcbn1cblxuLm1hcmtkb3duIGlmcmFtZSB7XG4gIG1heC13aWR0aDogMTAwJTtcbiAgQGFwcGx5IG1iLTQ7XG59XG5cbi5tYXJrZG93biBoMSB7XG4gIEBhcHBseSBtYi00IG10LTYgdGV4dC0yeGwgZm9udC1ib2xkO1xufVxuXG4ubWFya2Rvd24gaDIge1xuICBAYXBwbHkgbWItNCBtdC02IHRleHQteGwgZm9udC1ib2xkO1xufVxuXG4ubWFya2Rvd24gaDMge1xuICBAYXBwbHkgbWItNCBtdC02IHRleHQtbGcgZm9udC1ib2xkO1xufVxuXG4ubWFya2Rvd24gaDQge1xuICBAYXBwbHkgbWItNCBtdC02IHRleHQtWzE3cHhdIGZvbnQtYm9sZDtcbn1cblxuLm1hcmtkb3duIGg1IHtcbiAgQGFwcGx5IG1iLTQgbXQtNiB0ZXh0LWJhc2UgZm9udC1ib2xkO1xufVxuXG4ubWFya2Rvd24gaDYge1xuICBAYXBwbHkgbWItNCBtdC02IHRleHQtYmFzZTtcbn1cblxuLm1hcmtkb3duIGgxLFxuLm1hcmtkb3duIGgyLFxuLm1hcmtkb3duIGgzLFxuLm1hcmtkb3duIGg0IHtcbiAgQGFwcGx5IHRleHQtbGFiZWwtMTtcbn1cblxuOmdsb2JhbCguZGFyaykgLm1hcmtkb3duIGgxLFxuOmdsb2JhbCguZGFyaykgLm1hcmtkb3duIGgyLFxuOmdsb2JhbCguZGFyaykgLm1hcmtkb3duIGgzLFxuOmdsb2JhbCguZGFyaykgLm1hcmtkb3duIGg0IHtcbiAgQGFwcGx5IHRleHQtZGFyay1sYWJlbC0xO1xufVxuXG4ubWFya2Rvd24gcCB7XG4gIEBhcHBseSBtYi00IG92ZXJmbG93LXgtYXV0byBvdmVyZmxvdy15LWhpZGRlbiB0ZXh0LXNtIGxlYWRpbmctWzIycHhdO1xufVxuXG4ubWFya2Rvd24gcDpmaXJzdC1jaGlsZCB7XG4gIEBhcHBseSBtdC0wO1xufVxuXG4ubWFya2Rvd24gaDUsXG4ubWFya2Rvd24gaDYsXG4ubWFya2Rvd24gcCxcbi5tYXJrZG93biA+IGRpdiB7XG4gIEBhcHBseSB0ZXh0LWxhYmVsLTE7XG59XG5cbjpnbG9iYWwoLmRhcmspIC5tYXJrZG93biBoNSxcbjpnbG9iYWwoLmRhcmspIC5tYXJrZG93biBoNixcbjpnbG9iYWwoLmRhcmspIC5tYXJrZG93biBwLFxuOmdsb2JhbCguZGFyaykgLm1hcmtkb3duID4gZGl2IHtcbiAgQGFwcGx5IHRleHQtZGFyay1sYWJlbC0xO1xufVxuXG4ubWFya2Rvd24gYSB7XG4gIEBhcHBseSBtYi00IHRleHQtYmx1ZS1zO1xufVxuXG4ubWFya2Rvd24gYTpob3ZlciB7XG4gIEBhcHBseSB1bmRlcmxpbmU7XG59XG5cbjpnbG9iYWwoLmRhcmspIC5tYXJrZG93biBhIHtcbiAgQGFwcGx5IHRleHQtZGFyay1ibHVlLXM7XG59XG5cbi5tYXJrZG93biBzdHJvbmcge1xuICBAYXBwbHkgZm9udC1ib2xkIHRleHQtbGFiZWwtMTtcbn1cblxuOmdsb2JhbCguZGFyaykgLm1hcmtkb3duIHN0cm9uZyB7XG4gIEBhcHBseSB0ZXh0LWRhcmstbGFiZWwtMTtcbn1cblxuLm1hcmtkb3duIGJsb2NrcXVvdGUge1xuICBAYXBwbHkgbWItNCBib3JkZXItbC1bNnB4XSBib3JkZXItZ3JheS0zO1xufVxuXG46Z2xvYmFsKC5kYXJrKSAubWFya2Rvd24gYmxvY2txdW90ZSB7XG4gIEBhcHBseSBib3JkZXItZGFyay1ncmF5LTM7XG59XG5cbi5tYXJrZG93biBibG9ja3F1b3RlID4gKiB7XG4gIEBhcHBseSBtbC00O1xufVxuXG4ubWFya2Rvd24gYmxvY2txdW90ZSAqIHtcbiAgQGFwcGx5ICF0ZXh0LWxhYmVsLTM7XG59XG5cbjpnbG9iYWwoLmRhcmspIC5tYXJrZG93biBibG9ja3F1b3RlICoge1xuICBAYXBwbHkgIXRleHQtZGFyay1sYWJlbC0zO1xufVxuXG4ubWFya2Rvd24gaHIge1xuICBAYXBwbHkgbXktNiBib3JkZXItYi0yIGJvcmRlci1kaXZpZGVyLTM7XG59XG5cbjpnbG9iYWwoLmRhcmspIC5tYXJrZG93biBociB7XG4gIEBhcHBseSBib3JkZXItZGFyay1kaXZpZGVyLTM7XG59XG5cbi5tYXJrZG93biBpbnMsXG4ubWFya2Rvd24gdSB7XG4gIEBhcHBseSB0ZXh0LWxhYmVsLTMgdW5kZXJsaW5lO1xufVxuXG46Z2xvYmFsKC5kYXJrKSAubWFya2Rvd24gaW5zLFxuOmdsb2JhbCguZGFyaykgLm1hcmtkb3duIHUge1xuICBAYXBwbHkgdGV4dC1kYXJrLWxhYmVsLTM7XG59XG5cbi5tYXJrZG93biB1bCB7XG4gIEBhcHBseSBtYi00IGxpc3QtZGlzYyB0ZXh0LWJhc2UgdGV4dC1sYWJlbC0xO1xufVxuXG46Z2xvYmFsKC5kYXJrKSAubWFya2Rvd24gdWwge1xuICBAYXBwbHkgdGV4dC1kYXJrLWxhYmVsLTE7XG59XG5cbi5tYXJrZG93biB1bCB1bCxcbi5tYXJrZG93biBvbCBvbCB7XG4gIEBhcHBseSBtYi0wIG10LTE7XG59XG5cbi5tYXJrZG93biB1bCB1bCB7XG4gIGxpc3Qtc3R5bGUtdHlwZTogY2lyY2xlO1xufVxuXG4ubWFya2Rvd24gb2wgb2wge1xuICBsaXN0LXN0eWxlLXR5cGU6IGxvd2VyLWFscGhhO1xufVxuXG4ubWFya2Rvd24gbGkge1xuICBAYXBwbHkgbWItMSBtbC04O1xufVxuXG4ubWFya2Rvd24gbGk6bGFzdC1jaGlsZCB7XG4gIEBhcHBseSBtYi0wO1xufVxuXG4ubWFya2Rvd24gbGkgcDpmaXJzdC1jaGlsZCB7XG4gIEBhcHBseSBvdmVyZmxvdy12aXNpYmxlO1xufVxuXG4ubWFya2Rvd24gb2wge1xuICBAYXBwbHkgbWItNCBsaXN0LWRlY2ltYWwgdGV4dC1iYXNlIHRleHQtbGFiZWwtMTtcbn1cblxuOmdsb2JhbCguZGFyaykgLm1hcmtkb3duIG9sIHtcbiAgQGFwcGx5IHRleHQtZGFyay1sYWJlbC0xO1xufVxuXG4ubWFya2Rvd24gY29kZSxcbi5tYXJrZG93biBwcmUge1xuICBAYXBwbHkgdGV4dC1sYWJlbC0yO1xufVxuXG46Z2xvYmFsKC5kYXJrKSAubWFya2Rvd24gY29kZSxcbjpnbG9iYWwoLmRhcmspIC5tYXJrZG93biBwcmUge1xuICBAYXBwbHkgdGV4dC1kYXJrLWxhYmVsLTI7XG59XG5cbi5tYXJrZG93biBjb2RlLFxuLm1hcmtkb3duIHByZSB7XG4gIEBhcHBseSByb3VuZGVkLWxnIGJnLWZpbGwtMyBmb250LW1lbmxvIHRleHQteHMgbGVhZGluZy02O1xufVxuXG4ubWFya2Rvd24gcHJlIHtcbiAgQGFwcGx5IG1iLTQgcm91bmRlZC1ub25lIHB4LTMgcHktMi41O1xufVxuXG4ubWFya2Rvd24gPiBwcmUge1xuICBAYXBwbHkgcm91bmRlZC1sZztcbn1cblxuLm1hcmtkb3duIGNvZGUge1xuICBAYXBwbHkgbXktNCBteC0xIHAtMTtcbn1cblxuOmdsb2JhbCguZGFyaykgLm1hcmtkb3duIGNvZGUsXG46Z2xvYmFsKC5kYXJrKSAubWFya2Rvd24gcHJlIHtcbiAgQGFwcGx5IGJnLWRhcmstZmlsbC0zO1xufVxuXG4ubWFya2Rvd24gcHJlIGNvZGUge1xuICBAYXBwbHkgbS0wIHJvdW5kZWQtbm9uZSBiZy10cmFuc3BhcmVudCBweC0wIHB5LTA7XG59XG5cbjpnbG9iYWwoLmRhcmspIC5tYXJrZG93biBwcmUgY29kZSB7XG4gIEBhcHBseSBiZy10cmFuc3BhcmVudDtcbn1cblxuLm1hcmtkb3duIHRhYmxlIHtcbiAgYm94LXNoYWRvdzogMCAwIDAgMXB4ICNlNWU1ZTU7XG4gIEBhcHBseSBtYi02IHJvdW5kZWQtbGcgYm9yZGVyLWhpZGRlbiB0ZXh0LWxhYmVsLTE7XG59XG5cbjpnbG9iYWwoLmRhcmspIC5tYXJrZG93biB0YWJsZSB7XG4gIGJveC1zaGFkb3c6IDAgMCAwIDFweCAjNDI0MjQyO1xuICBAYXBwbHkgYm9yZGVyLWRhcmstZ3JheS00IHRleHQtZGFyay1sYWJlbC0xO1xufVxuXG4ubWFya2Rvd24gdGFibGUgdGgge1xuICBAYXBwbHkgYm9yZGVyLVsxcHhdIGJvcmRlci1ncmF5LTQgYmctZmlsbC0zIHB5LTQgcHgtNSB0ZXh0LWJhc2UgZm9udC1tZWRpdW07XG59XG5cbi5tYXJrZG93biB0YWJsZSB0aDpmaXJzdC1jaGlsZCB7XG4gIEBhcHBseSByb3VuZGVkLXRsLWxnO1xufVxuXG4ubWFya2Rvd24gdGFibGUgdGg6bGFzdC1jaGlsZCB7XG4gIEBhcHBseSByb3VuZGVkLXRyLWxnO1xufVxuXG46Z2xvYmFsKC5kYXJrKSAubWFya2Rvd24gdGFibGUgdGgge1xuICBAYXBwbHkgYm9yZGVyLWRhcmstZ3JheS00IGJnLWRhcmstZmlsbC0zO1xufVxuXG4ubWFya2Rvd24gdGFibGUgdGQge1xuICBAYXBwbHkgYm9yZGVyLVsxcHhdIGJvcmRlci1ncmF5LTQgcHktNCBweC01IHRleHQtYmFzZTtcbn1cblxuOmdsb2JhbCguZGFyaykgLm1hcmtkb3duIHRhYmxlIHRkIHtcbiAgQGFwcGx5IGJvcmRlci1kYXJrLWdyYXktNDtcbn1cblxuLm1hcmtkb3duIDpnbG9iYWwoLmxhbmd1YWdlLW1kIC50YWJsZSkge1xuICAvKlxuICAgIEZJWE1FOiB0YWlsd2luZC1jc3MgYC50YWJsZWAgY29uZmxpY3Qgd2l0aCBoaWdobGlnaHQuanMgYC50YWJsZWAsXG4gICAgICAgICAgIHdoaWNoIGp1c3QgaGF2ZSBkaWZmZXJlbnQgbWVhbmluZ3MgYnV0IHdpdGggdGhlIHNhbWUgbmFtZVxuICAgICAqL1xuICBkaXNwbGF5OiBpbmxpbmUgIWltcG9ydGFudDtcbn1cblxuLm1hcmtkb3duIDpnbG9iYWwoLmthdGV4LWh0bWwpIHtcbiAgb3ZlcmZsb3cteDogYXV0bztcbn1cblxuLm1hcmtkb3duIDpnbG9iYWwoLmthdGV4KSB7XG4gIEBhcHBseSBteC1bMnB4XSAhdGV4dC1iYXNlIHRleHQtbGFiZWwtMjtcbn1cblxuOmdsb2JhbCguZGFyaykgLm1hcmtkb3duIDpnbG9iYWwoLmthdGV4KSB7XG4gIEBhcHBseSB0ZXh0LWRhcmstbGFiZWwtMjtcbn1cbiJdLCJzb3VyY2VSb290IjoiIn0= */</style><style type="text/css">.lf-progress {
  -webkit-appearance: none;
  -moz-apperance: none;
  width: 100%;
  /* margin: 0 10px; */
  height: 4px;
  border-radius: 3px;
  cursor: pointer;
}
.lf-progress:focus {
  outline: none;
  border: none;
}
.lf-progress::-moz-range-track {
  cursor: pointer;
  background: none;
  border: none;
  outline: none;
}
.lf-progress::-webkit-slider-thumb {
  -webkit-appearance: none !important;
  height: 13px;
  width: 13px;
  border: 0;
  border-radius: 50%;
  background: #0fccce;
  cursor: pointer;
}
.lf-progress::-moz-range-thumb {
  -moz-appearance: none !important;
  height: 13px;
  width: 13px;
  border: 0;
  border-radius: 50%;
  background: #0fccce;
  cursor: pointer;
}
.lf-progress::-ms-track {
  width: 100%;
  height: 3px;
  cursor: pointer;
  background: transparent;
  border-color: transparent;
  color: transparent;
}
.lf-progress::-ms-fill-lower {
  background: #ccc;
  border-radius: 3px;
}
.lf-progress::-ms-fill-upper {
  background: #ccc;
  border-radius: 3px;
}
.lf-progress::-ms-thumb {
  border: 0;
  height: 15px;
  width: 15px;
  border-radius: 50%;
  background: #0fccce;
  cursor: pointer;
}
.lf-progress:focus::-ms-fill-lower {
  background: #ccc;
}
.lf-progress:focus::-ms-fill-upper {
  background: #ccc;
}
.lf-player-container :focus {
  outline: 0;
}
.lf-popover {
  position: relative;
}

.lf-popover-content {
  display: inline-block;
  position: absolute;
  opacity: 1;
  visibility: visible;
  transform: translate(0, -10px);
  box-shadow: 0 2px 5px 0 rgba(0, 0, 0, 0.26);
  transition: all 0.3s cubic-bezier(0.75, -0.02, 0.2, 0.97);
}

.lf-popover-content.hidden {
  opacity: 0;
  visibility: hidden;
  transform: translate(0, 0px);
}

.lf-player-btn-container {
  display: flex;
  align-items: center;
}
.lf-player-btn {
  cursor: pointer;
  fill: #999;
  width: 14px;
}

.lf-player-btn.active {
  fill: #555;
}

.lf-popover {
  position: relative;
}

.lf-popover-content {
  display: inline-block;
  position: absolute;
  background-color: #ffffff;
  opacity: 1;

  transform: translate(0, -10px);
  box-shadow: 0 2px 5px 0 rgba(0, 0, 0, 0.26);
  transition: all 0.3s cubic-bezier(0.75, -0.02, 0.2, 0.97);
  padding: 10px;
}

.lf-popover-content.hidden {
  opacity: 0;
  visibility: hidden;
  transform: translate(0, 0px);
}

.lf-arrow {
  position: absolute;
  z-index: -1;
  content: '';
  bottom: -9px;
  border-style: solid;
  border-width: 10px 10px 0px 10px;
}

.lf-left-align,
.lf-left-align .lfarrow {
  left: 0;
  right: unset;
}

.lf-right-align,
.lf-right-align .lf-arrow {
  right: 0;
  left: unset;
}

.lf-text-input {
  border: 1px #ccc solid;
  border-radius: 5px;
  padding: 3px;
  width: 60px;
  margin: 0;
}

.lf-color-picker {
  display: flex;
  flex-direction: row;
  justify-content: space-between;
  height: 90px;
}

.lf-color-selectors {
  display: flex;
  flex-direction: column;
  justify-content: space-between;
}

.lf-color-component {
  display: flex;
  flex-direction: row;
  font-size: 12px;
  align-items: center;
  justify-content: center;
}

.lf-color-component strong {
  width: 40px;
}

.lf-color-component input[type='range'] {
  margin: 0 0 0 10px;
}

.lf-color-component input[type='number'] {
  width: 50px;
  margin: 0 0 0 10px;
}

.lf-color-preview {
  font-size: 12px;
  display: flex;
  flex-direction: column;
  align-items: center;
  justify-content: space-between;
  padding-left: 5px;
}

.lf-preview {
  height: 60px;
  width: 60px;
}

.lf-popover-snapshot {
  width: 150px;
}
.lf-popover-snapshot h5 {
  margin: 5px 0 10px 0;
  font-size: 0.75rem;
}
.lf-popover-snapshot a {
  display: block;
  text-decoration: none;
}
.lf-popover-snapshot a:before {
  content: '⥼';
  margin-right: 5px;
}
.lf-popover-snapshot .lf-note {
  display: block;
  margin-top: 10px;
  color: #999;
}
.lf-player-controls > div {
  margin-right: 5px;
  margin-left: 5px;
}
.lf-player-controls > div:first-child {
  margin-left: 0px;
}
.lf-player-controls > div:last-child {
  margin-right: 0px;
}
</style><style id="_goober"> @keyframes go2264125279{from{transform:scale(0) rotate(45deg);opacity:0;}to{transform:scale(1) rotate(45deg);opacity:1;}}@keyframes go3020080000{from{transform:scale(0);opacity:0;}to{transform:scale(1);opacity:1;}}@keyframes go463499852{from{transform:scale(0) rotate(90deg);opacity:0;}to{transform:scale(1) rotate(90deg);opacity:1;}}@keyframes go1268368563{from{transform:rotate(0deg);}to{transform:rotate(360deg);}}@keyframes go1310225428{from{transform:scale(0) rotate(45deg);opacity:0;}to{transform:scale(1) rotate(45deg);opacity:1;}}@keyframes go651618207{0%{height:0;width:0;opacity:0;}40%{height:0;width:6px;opacity:1;}100%{opacity:1;height:10px;}}@keyframes go901347462{from{transform:scale(0.6);opacity:0.4;}to{transform:scale(1);opacity:1;}}.go4109123758{z-index:9999;}.go4109123758 > *{pointer-events:auto;}</style><style id="__monaco_theme_color__">
.mtk1 { color: #000000; }
.mtk2 { color: #ffffff; }
.mtk3 { color: #008000; }
.mtk4 { color: #0000ff; }
.mtk5 { color: #811f3f; }
.mtk6 { color: #ee0000; }
.mtk7 { color: #098658; }
.mtk8 { color: #0451a5; }
.mtk9 { color: #267f99; }
.mtk10 { color: #795e26; }
.mtk11 { color: #af00db; }
.mtk12 { color: #800000; }
.mtk13 { color: #001080; }
.mtk14 { color: #ff0000; }
.mtk15 { color: #cd3131; }
.mtk16 { color: #d16969; }
.mtk17 { color: #000080; }
.mtk18 { color: #a31515; }
.mtk19 { color: #000000; }
.mtk20 { color: #0070c1; }
.mtki { font-style: italic; }
.mtkb { font-weight: bold; }
.mtku { text-decoration: underline; text-underline-position: under; }
.mtks { text-decoration: line-through; }
.mtks.mtku { text-decoration: underline line-through; text-underline-position: under; }</style><style type="text/css" media="screen" class="monaco-colors">.codicon-add:before { content: '\ea60'; }
.codicon-plus:before { content: '\ea60'; }
.codicon-gist-new:before { content: '\ea60'; }
.codicon-repo-create:before { content: '\ea60'; }
.codicon-lightbulb:before { content: '\ea61'; }
.codicon-light-bulb:before { content: '\ea61'; }
.codicon-repo:before { content: '\ea62'; }
.codicon-repo-delete:before { content: '\ea62'; }
.codicon-gist-fork:before { content: '\ea63'; }
.codicon-repo-forked:before { content: '\ea63'; }
.codicon-git-pull-request:before { content: '\ea64'; }
.codicon-git-pull-request-abandoned:before { content: '\ea64'; }
.codicon-record-keys:before { content: '\ea65'; }
.codicon-keyboard:before { content: '\ea65'; }
.codicon-tag:before { content: '\ea66'; }
.codicon-tag-add:before { content: '\ea66'; }
.codicon-tag-remove:before { content: '\ea66'; }
.codicon-person:before { content: '\ea67'; }
.codicon-person-follow:before { content: '\ea67'; }
.codicon-person-outline:before { content: '\ea67'; }
.codicon-person-filled:before { content: '\ea67'; }
.codicon-git-branch:before { content: '\ea68'; }
.codicon-git-branch-create:before { content: '\ea68'; }
.codicon-git-branch-delete:before { content: '\ea68'; }
.codicon-source-control:before { content: '\ea68'; }
.codicon-mirror:before { content: '\ea69'; }
.codicon-mirror-public:before { content: '\ea69'; }
.codicon-star:before { content: '\ea6a'; }
.codicon-star-add:before { content: '\ea6a'; }
.codicon-star-delete:before { content: '\ea6a'; }
.codicon-star-empty:before { content: '\ea6a'; }
.codicon-comment:before { content: '\ea6b'; }
.codicon-comment-add:before { content: '\ea6b'; }
.codicon-alert:before { content: '\ea6c'; }
.codicon-warning:before { content: '\ea6c'; }
.codicon-search:before { content: '\ea6d'; }
.codicon-search-save:before { content: '\ea6d'; }
.codicon-log-out:before { content: '\ea6e'; }
.codicon-sign-out:before { content: '\ea6e'; }
.codicon-log-in:before { content: '\ea6f'; }
.codicon-sign-in:before { content: '\ea6f'; }
.codicon-eye:before { content: '\ea70'; }
.codicon-eye-unwatch:before { content: '\ea70'; }
.codicon-eye-watch:before { content: '\ea70'; }
.codicon-circle-filled:before { content: '\ea71'; }
.codicon-primitive-dot:before { content: '\ea71'; }
.codicon-close-dirty:before { content: '\ea71'; }
.codicon-debug-breakpoint:before { content: '\ea71'; }
.codicon-debug-breakpoint-disabled:before { content: '\ea71'; }
.codicon-debug-hint:before { content: '\ea71'; }
.codicon-primitive-square:before { content: '\ea72'; }
.codicon-edit:before { content: '\ea73'; }
.codicon-pencil:before { content: '\ea73'; }
.codicon-info:before { content: '\ea74'; }
.codicon-issue-opened:before { content: '\ea74'; }
.codicon-gist-private:before { content: '\ea75'; }
.codicon-git-fork-private:before { content: '\ea75'; }
.codicon-lock:before { content: '\ea75'; }
.codicon-mirror-private:before { content: '\ea75'; }
.codicon-close:before { content: '\ea76'; }
.codicon-remove-close:before { content: '\ea76'; }
.codicon-x:before { content: '\ea76'; }
.codicon-repo-sync:before { content: '\ea77'; }
.codicon-sync:before { content: '\ea77'; }
.codicon-clone:before { content: '\ea78'; }
.codicon-desktop-download:before { content: '\ea78'; }
.codicon-beaker:before { content: '\ea79'; }
.codicon-microscope:before { content: '\ea79'; }
.codicon-vm:before { content: '\ea7a'; }
.codicon-device-desktop:before { content: '\ea7a'; }
.codicon-file:before { content: '\ea7b'; }
.codicon-file-text:before { content: '\ea7b'; }
.codicon-more:before { content: '\ea7c'; }
.codicon-ellipsis:before { content: '\ea7c'; }
.codicon-kebab-horizontal:before { content: '\ea7c'; }
.codicon-mail-reply:before { content: '\ea7d'; }
.codicon-reply:before { content: '\ea7d'; }
.codicon-organization:before { content: '\ea7e'; }
.codicon-organization-filled:before { content: '\ea7e'; }
.codicon-organization-outline:before { content: '\ea7e'; }
.codicon-new-file:before { content: '\ea7f'; }
.codicon-file-add:before { content: '\ea7f'; }
.codicon-new-folder:before { content: '\ea80'; }
.codicon-file-directory-create:before { content: '\ea80'; }
.codicon-trash:before { content: '\ea81'; }
.codicon-trashcan:before { content: '\ea81'; }
.codicon-history:before { content: '\ea82'; }
.codicon-clock:before { content: '\ea82'; }
.codicon-folder:before { content: '\ea83'; }
.codicon-file-directory:before { content: '\ea83'; }
.codicon-symbol-folder:before { content: '\ea83'; }
.codicon-logo-github:before { content: '\ea84'; }
.codicon-mark-github:before { content: '\ea84'; }
.codicon-github:before { content: '\ea84'; }
.codicon-terminal:before { content: '\ea85'; }
.codicon-console:before { content: '\ea85'; }
.codicon-repl:before { content: '\ea85'; }
.codicon-zap:before { content: '\ea86'; }
.codicon-symbol-event:before { content: '\ea86'; }
.codicon-error:before { content: '\ea87'; }
.codicon-stop:before { content: '\ea87'; }
.codicon-variable:before { content: '\ea88'; }
.codicon-symbol-variable:before { content: '\ea88'; }
.codicon-array:before { content: '\ea8a'; }
.codicon-symbol-array:before { content: '\ea8a'; }
.codicon-symbol-module:before { content: '\ea8b'; }
.codicon-symbol-package:before { content: '\ea8b'; }
.codicon-symbol-namespace:before { content: '\ea8b'; }
.codicon-symbol-object:before { content: '\ea8b'; }
.codicon-symbol-method:before { content: '\ea8c'; }
.codicon-symbol-function:before { content: '\ea8c'; }
.codicon-symbol-constructor:before { content: '\ea8c'; }
.codicon-symbol-boolean:before { content: '\ea8f'; }
.codicon-symbol-null:before { content: '\ea8f'; }
.codicon-symbol-numeric:before { content: '\ea90'; }
.codicon-symbol-number:before { content: '\ea90'; }
.codicon-symbol-structure:before { content: '\ea91'; }
.codicon-symbol-struct:before { content: '\ea91'; }
.codicon-symbol-parameter:before { content: '\ea92'; }
.codicon-symbol-type-parameter:before { content: '\ea92'; }
.codicon-symbol-key:before { content: '\ea93'; }
.codicon-symbol-text:before { content: '\ea93'; }
.codicon-symbol-reference:before { content: '\ea94'; }
.codicon-go-to-file:before { content: '\ea94'; }
.codicon-symbol-enum:before { content: '\ea95'; }
.codicon-symbol-value:before { content: '\ea95'; }
.codicon-symbol-ruler:before { content: '\ea96'; }
.codicon-symbol-unit:before { content: '\ea96'; }
.codicon-activate-breakpoints:before { content: '\ea97'; }
.codicon-archive:before { content: '\ea98'; }
.codicon-arrow-both:before { content: '\ea99'; }
.codicon-arrow-down:before { content: '\ea9a'; }
.codicon-arrow-left:before { content: '\ea9b'; }
.codicon-arrow-right:before { content: '\ea9c'; }
.codicon-arrow-small-down:before { content: '\ea9d'; }
.codicon-arrow-small-left:before { content: '\ea9e'; }
.codicon-arrow-small-right:before { content: '\ea9f'; }
.codicon-arrow-small-up:before { content: '\eaa0'; }
.codicon-arrow-up:before { content: '\eaa1'; }
.codicon-bell:before { content: '\eaa2'; }
.codicon-bold:before { content: '\eaa3'; }
.codicon-book:before { content: '\eaa4'; }
.codicon-bookmark:before { content: '\eaa5'; }
.codicon-debug-breakpoint-conditional-unverified:before { content: '\eaa6'; }
.codicon-debug-breakpoint-conditional:before { content: '\eaa7'; }
.codicon-debug-breakpoint-conditional-disabled:before { content: '\eaa7'; }
.codicon-debug-breakpoint-data-unverified:before { content: '\eaa8'; }
.codicon-debug-breakpoint-data:before { content: '\eaa9'; }
.codicon-debug-breakpoint-data-disabled:before { content: '\eaa9'; }
.codicon-debug-breakpoint-log-unverified:before { content: '\eaaa'; }
.codicon-debug-breakpoint-log:before { content: '\eaab'; }
.codicon-debug-breakpoint-log-disabled:before { content: '\eaab'; }
.codicon-briefcase:before { content: '\eaac'; }
.codicon-broadcast:before { content: '\eaad'; }
.codicon-browser:before { content: '\eaae'; }
.codicon-bug:before { content: '\eaaf'; }
.codicon-calendar:before { content: '\eab0'; }
.codicon-case-sensitive:before { content: '\eab1'; }
.codicon-check:before { content: '\eab2'; }
.codicon-checklist:before { content: '\eab3'; }
.codicon-chevron-down:before { content: '\eab4'; }
.codicon-drop-down-button:before { content: '\eab4'; }
.codicon-chevron-left:before { content: '\eab5'; }
.codicon-chevron-right:before { content: '\eab6'; }
.codicon-chevron-up:before { content: '\eab7'; }
.codicon-chrome-close:before { content: '\eab8'; }
.codicon-chrome-maximize:before { content: '\eab9'; }
.codicon-chrome-minimize:before { content: '\eaba'; }
.codicon-chrome-restore:before { content: '\eabb'; }
.codicon-circle-outline:before { content: '\eabc'; }
.codicon-debug-breakpoint-unverified:before { content: '\eabc'; }
.codicon-circle-slash:before { content: '\eabd'; }
.codicon-circuit-board:before { content: '\eabe'; }
.codicon-clear-all:before { content: '\eabf'; }
.codicon-clippy:before { content: '\eac0'; }
.codicon-close-all:before { content: '\eac1'; }
.codicon-cloud-download:before { content: '\eac2'; }
.codicon-cloud-upload:before { content: '\eac3'; }
.codicon-code:before { content: '\eac4'; }
.codicon-collapse-all:before { content: '\eac5'; }
.codicon-color-mode:before { content: '\eac6'; }
.codicon-comment-discussion:before { content: '\eac7'; }
.codicon-compare-changes:before { content: '\eafd'; }
.codicon-credit-card:before { content: '\eac9'; }
.codicon-dash:before { content: '\eacc'; }
.codicon-dashboard:before { content: '\eacd'; }
.codicon-database:before { content: '\eace'; }
.codicon-debug-continue:before { content: '\eacf'; }
.codicon-debug-disconnect:before { content: '\ead0'; }
.codicon-debug-pause:before { content: '\ead1'; }
.codicon-debug-restart:before { content: '\ead2'; }
.codicon-debug-start:before { content: '\ead3'; }
.codicon-debug-step-into:before { content: '\ead4'; }
.codicon-debug-step-out:before { content: '\ead5'; }
.codicon-debug-step-over:before { content: '\ead6'; }
.codicon-debug-stop:before { content: '\ead7'; }
.codicon-debug:before { content: '\ead8'; }
.codicon-device-camera-video:before { content: '\ead9'; }
.codicon-device-camera:before { content: '\eada'; }
.codicon-device-mobile:before { content: '\eadb'; }
.codicon-diff-added:before { content: '\eadc'; }
.codicon-diff-ignored:before { content: '\eadd'; }
.codicon-diff-modified:before { content: '\eade'; }
.codicon-diff-removed:before { content: '\eadf'; }
.codicon-diff-renamed:before { content: '\eae0'; }
.codicon-diff:before { content: '\eae1'; }
.codicon-discard:before { content: '\eae2'; }
.codicon-editor-layout:before { content: '\eae3'; }
.codicon-empty-window:before { content: '\eae4'; }
.codicon-exclude:before { content: '\eae5'; }
.codicon-extensions:before { content: '\eae6'; }
.codicon-eye-closed:before { content: '\eae7'; }
.codicon-file-binary:before { content: '\eae8'; }
.codicon-file-code:before { content: '\eae9'; }
.codicon-file-media:before { content: '\eaea'; }
.codicon-file-pdf:before { content: '\eaeb'; }
.codicon-file-submodule:before { content: '\eaec'; }
.codicon-file-symlink-directory:before { content: '\eaed'; }
.codicon-file-symlink-file:before { content: '\eaee'; }
.codicon-file-zip:before { content: '\eaef'; }
.codicon-files:before { content: '\eaf0'; }
.codicon-filter:before { content: '\eaf1'; }
.codicon-flame:before { content: '\eaf2'; }
.codicon-fold-down:before { content: '\eaf3'; }
.codicon-fold-up:before { content: '\eaf4'; }
.codicon-fold:before { content: '\eaf5'; }
.codicon-folder-active:before { content: '\eaf6'; }
.codicon-folder-opened:before { content: '\eaf7'; }
.codicon-gear:before { content: '\eaf8'; }
.codicon-gift:before { content: '\eaf9'; }
.codicon-gist-secret:before { content: '\eafa'; }
.codicon-gist:before { content: '\eafb'; }
.codicon-git-commit:before { content: '\eafc'; }
.codicon-git-compare:before { content: '\eafd'; }
.codicon-git-merge:before { content: '\eafe'; }
.codicon-github-action:before { content: '\eaff'; }
.codicon-github-alt:before { content: '\eb00'; }
.codicon-globe:before { content: '\eb01'; }
.codicon-grabber:before { content: '\eb02'; }
.codicon-graph:before { content: '\eb03'; }
.codicon-gripper:before { content: '\eb04'; }
.codicon-heart:before { content: '\eb05'; }
.codicon-home:before { content: '\eb06'; }
.codicon-horizontal-rule:before { content: '\eb07'; }
.codicon-hubot:before { content: '\eb08'; }
.codicon-inbox:before { content: '\eb09'; }
.codicon-issue-closed:before { content: '\eba4'; }
.codicon-issue-reopened:before { content: '\eb0b'; }
.codicon-issues:before { content: '\eb0c'; }
.codicon-italic:before { content: '\eb0d'; }
.codicon-jersey:before { content: '\eb0e'; }
.codicon-json:before { content: '\eb0f'; }
.codicon-kebab-vertical:before { content: '\eb10'; }
.codicon-key:before { content: '\eb11'; }
.codicon-law:before { content: '\eb12'; }
.codicon-lightbulb-autofix:before { content: '\eb13'; }
.codicon-link-external:before { content: '\eb14'; }
.codicon-link:before { content: '\eb15'; }
.codicon-list-ordered:before { content: '\eb16'; }
.codicon-list-unordered:before { content: '\eb17'; }
.codicon-live-share:before { content: '\eb18'; }
.codicon-loading:before { content: '\eb19'; }
.codicon-location:before { content: '\eb1a'; }
.codicon-mail-read:before { content: '\eb1b'; }
.codicon-mail:before { content: '\eb1c'; }
.codicon-markdown:before { content: '\eb1d'; }
.codicon-megaphone:before { content: '\eb1e'; }
.codicon-mention:before { content: '\eb1f'; }
.codicon-milestone:before { content: '\eb20'; }
.codicon-mortar-board:before { content: '\eb21'; }
.codicon-move:before { content: '\eb22'; }
.codicon-multiple-windows:before { content: '\eb23'; }
.codicon-mute:before { content: '\eb24'; }
.codicon-no-newline:before { content: '\eb25'; }
.codicon-note:before { content: '\eb26'; }
.codicon-octoface:before { content: '\eb27'; }
.codicon-open-preview:before { content: '\eb28'; }
.codicon-package:before { content: '\eb29'; }
.codicon-paintcan:before { content: '\eb2a'; }
.codicon-pin:before { content: '\eb2b'; }
.codicon-play:before { content: '\eb2c'; }
.codicon-run:before { content: '\eb2c'; }
.codicon-plug:before { content: '\eb2d'; }
.codicon-preserve-case:before { content: '\eb2e'; }
.codicon-preview:before { content: '\eb2f'; }
.codicon-project:before { content: '\eb30'; }
.codicon-pulse:before { content: '\eb31'; }
.codicon-question:before { content: '\eb32'; }
.codicon-quote:before { content: '\eb33'; }
.codicon-radio-tower:before { content: '\eb34'; }
.codicon-reactions:before { content: '\eb35'; }
.codicon-references:before { content: '\eb36'; }
.codicon-refresh:before { content: '\eb37'; }
.codicon-regex:before { content: '\eb38'; }
.codicon-remote-explorer:before { content: '\eb39'; }
.codicon-remote:before { content: '\eb3a'; }
.codicon-remove:before { content: '\eb3b'; }
.codicon-replace-all:before { content: '\eb3c'; }
.codicon-replace:before { content: '\eb3d'; }
.codicon-repo-clone:before { content: '\eb3e'; }
.codicon-repo-force-push:before { content: '\eb3f'; }
.codicon-repo-pull:before { content: '\eb40'; }
.codicon-repo-push:before { content: '\eb41'; }
.codicon-report:before { content: '\eb42'; }
.codicon-request-changes:before { content: '\eb43'; }
.codicon-rocket:before { content: '\eb44'; }
.codicon-root-folder-opened:before { content: '\eb45'; }
.codicon-root-folder:before { content: '\eb46'; }
.codicon-rss:before { content: '\eb47'; }
.codicon-ruby:before { content: '\eb48'; }
.codicon-save-all:before { content: '\eb49'; }
.codicon-save-as:before { content: '\eb4a'; }
.codicon-save:before { content: '\eb4b'; }
.codicon-screen-full:before { content: '\eb4c'; }
.codicon-screen-normal:before { content: '\eb4d'; }
.codicon-search-stop:before { content: '\eb4e'; }
.codicon-server:before { content: '\eb50'; }
.codicon-settings-gear:before { content: '\eb51'; }
.codicon-settings:before { content: '\eb52'; }
.codicon-shield:before { content: '\eb53'; }
.codicon-smiley:before { content: '\eb54'; }
.codicon-sort-precedence:before { content: '\eb55'; }
.codicon-split-horizontal:before { content: '\eb56'; }
.codicon-split-vertical:before { content: '\eb57'; }
.codicon-squirrel:before { content: '\eb58'; }
.codicon-star-full:before { content: '\eb59'; }
.codicon-star-half:before { content: '\eb5a'; }
.codicon-symbol-class:before { content: '\eb5b'; }
.codicon-symbol-color:before { content: '\eb5c'; }
.codicon-symbol-customcolor:before { content: '\eb5c'; }
.codicon-symbol-constant:before { content: '\eb5d'; }
.codicon-symbol-enum-member:before { content: '\eb5e'; }
.codicon-symbol-field:before { content: '\eb5f'; }
.codicon-symbol-file:before { content: '\eb60'; }
.codicon-symbol-interface:before { content: '\eb61'; }
.codicon-symbol-keyword:before { content: '\eb62'; }
.codicon-symbol-misc:before { content: '\eb63'; }
.codicon-symbol-operator:before { content: '\eb64'; }
.codicon-symbol-property:before { content: '\eb65'; }
.codicon-wrench:before { content: '\eb65'; }
.codicon-wrench-subaction:before { content: '\eb65'; }
.codicon-symbol-snippet:before { content: '\eb66'; }
.codicon-tasklist:before { content: '\eb67'; }
.codicon-telescope:before { content: '\eb68'; }
.codicon-text-size:before { content: '\eb69'; }
.codicon-three-bars:before { content: '\eb6a'; }
.codicon-thumbsdown:before { content: '\eb6b'; }
.codicon-thumbsup:before { content: '\eb6c'; }
.codicon-tools:before { content: '\eb6d'; }
.codicon-triangle-down:before { content: '\eb6e'; }
.codicon-triangle-left:before { content: '\eb6f'; }
.codicon-triangle-right:before { content: '\eb70'; }
.codicon-triangle-up:before { content: '\eb71'; }
.codicon-twitter:before { content: '\eb72'; }
.codicon-unfold:before { content: '\eb73'; }
.codicon-unlock:before { content: '\eb74'; }
.codicon-unmute:before { content: '\eb75'; }
.codicon-unverified:before { content: '\eb76'; }
.codicon-verified:before { content: '\eb77'; }
.codicon-versions:before { content: '\eb78'; }
.codicon-vm-active:before { content: '\eb79'; }
.codicon-vm-outline:before { content: '\eb7a'; }
.codicon-vm-running:before { content: '\eb7b'; }
.codicon-watch:before { content: '\eb7c'; }
.codicon-whitespace:before { content: '\eb7d'; }
.codicon-whole-word:before { content: '\eb7e'; }
.codicon-window:before { content: '\eb7f'; }
.codicon-word-wrap:before { content: '\eb80'; }
.codicon-zoom-in:before { content: '\eb81'; }
.codicon-zoom-out:before { content: '\eb82'; }
.codicon-list-filter:before { content: '\eb83'; }
.codicon-list-flat:before { content: '\eb84'; }
.codicon-list-selection:before { content: '\eb85'; }
.codicon-selection:before { content: '\eb85'; }
.codicon-list-tree:before { content: '\eb86'; }
.codicon-debug-breakpoint-function-unverified:before { content: '\eb87'; }
.codicon-debug-breakpoint-function:before { content: '\eb88'; }
.codicon-debug-breakpoint-function-disabled:before { content: '\eb88'; }
.codicon-debug-stackframe-active:before { content: '\eb89'; }
.codicon-debug-stackframe-dot:before { content: '\eb8a'; }
.codicon-debug-stackframe:before { content: '\eb8b'; }
.codicon-debug-stackframe-focused:before { content: '\eb8b'; }
.codicon-debug-breakpoint-unsupported:before { content: '\eb8c'; }
.codicon-symbol-string:before { content: '\eb8d'; }
.codicon-debug-reverse-continue:before { content: '\eb8e'; }
.codicon-debug-step-back:before { content: '\eb8f'; }
.codicon-debug-restart-frame:before { content: '\eb90'; }
.codicon-call-incoming:before { content: '\eb92'; }
.codicon-call-outgoing:before { content: '\eb93'; }
.codicon-menu:before { content: '\eb94'; }
.codicon-expand-all:before { content: '\eb95'; }
.codicon-feedback:before { content: '\eb96'; }
.codicon-group-by-ref-type:before { content: '\eb97'; }
.codicon-ungroup-by-ref-type:before { content: '\eb98'; }
.codicon-account:before { content: '\eb99'; }
.codicon-bell-dot:before { content: '\eb9a'; }
.codicon-debug-console:before { content: '\eb9b'; }
.codicon-library:before { content: '\eb9c'; }
.codicon-output:before { content: '\eb9d'; }
.codicon-run-all:before { content: '\eb9e'; }
.codicon-sync-ignored:before { content: '\eb9f'; }
.codicon-pinned:before { content: '\eba0'; }
.codicon-github-inverted:before { content: '\eba1'; }
.codicon-debug-alt:before { content: '\eb91'; }
.codicon-server-process:before { content: '\eba2'; }
.codicon-server-environment:before { content: '\eba3'; }
.codicon-pass:before { content: '\eba4'; }
.codicon-stop-circle:before { content: '\eba5'; }
.codicon-play-circle:before { content: '\eba6'; }
.codicon-record:before { content: '\eba7'; }
.codicon-debug-alt-small:before { content: '\eba8'; }
.codicon-vm-connect:before { content: '\eba9'; }
.codicon-cloud:before { content: '\ebaa'; }
.codicon-merge:before { content: '\ebab'; }
.codicon-export:before { content: '\ebac'; }
.codicon-graph-left:before { content: '\ebad'; }
.codicon-magnet:before { content: '\ebae'; }
.codicon-notebook:before { content: '\ebaf'; }
.codicon-redo:before { content: '\ebb0'; }
.codicon-check-all:before { content: '\ebb1'; }
.codicon-pinned-dirty:before { content: '\ebb2'; }
.codicon-pass-filled:before { content: '\ebb3'; }
.codicon-circle-large-filled:before { content: '\ebb4'; }
.codicon-circle-large-outline:before { content: '\ebb5'; }
.codicon-combine:before { content: '\ebb6'; }
.codicon-gather:before { content: '\ebb6'; }
.codicon-table:before { content: '\ebb7'; }
.codicon-variable-group:before { content: '\ebb8'; }
.codicon-type-hierarchy:before { content: '\ebb9'; }
.codicon-type-hierarchy-sub:before { content: '\ebba'; }
.codicon-type-hierarchy-super:before { content: '\ebbb'; }
.codicon-git-pull-request-create:before { content: '\ebbc'; }
.codicon-run-above:before { content: '\ebbd'; }
.codicon-run-below:before { content: '\ebbe'; }
.codicon-notebook-template:before { content: '\ebbf'; }
.codicon-debug-rerun:before { content: '\ebc0'; }
.codicon-workspace-trusted:before { content: '\ebc1'; }
.codicon-workspace-untrusted:before { content: '\ebc2'; }
.codicon-workspace-unspecified:before { content: '\ebc3'; }
.codicon-terminal-cmd:before { content: '\ebc4'; }
.codicon-terminal-debian:before { content: '\ebc5'; }
.codicon-terminal-linux:before { content: '\ebc6'; }
.codicon-terminal-powershell:before { content: '\ebc7'; }
.codicon-terminal-tmux:before { content: '\ebc8'; }
.codicon-terminal-ubuntu:before { content: '\ebc9'; }
.codicon-terminal-bash:before { content: '\ebca'; }
.codicon-arrow-swap:before { content: '\ebcb'; }
.codicon-copy:before { content: '\ebcc'; }
.codicon-person-add:before { content: '\ebcd'; }
.codicon-filter-filled:before { content: '\ebce'; }
.codicon-wand:before { content: '\ebcf'; }
.codicon-debug-line-by-line:before { content: '\ebd0'; }
.codicon-inspect:before { content: '\ebd1'; }
.codicon-layers:before { content: '\ebd2'; }
.codicon-layers-dot:before { content: '\ebd3'; }
.codicon-layers-active:before { content: '\ebd4'; }
.codicon-compass:before { content: '\ebd5'; }
.codicon-compass-dot:before { content: '\ebd6'; }
.codicon-compass-active:before { content: '\ebd7'; }
.codicon-azure:before { content: '\ebd8'; }
.codicon-issue-draft:before { content: '\ebd9'; }
.codicon-git-pull-request-closed:before { content: '\ebda'; }
.codicon-git-pull-request-draft:before { content: '\ebdb'; }
.codicon-debug-all:before { content: '\ebdc'; }
.codicon-debug-coverage:before { content: '\ebdd'; }
.codicon-run-errors:before { content: '\ebde'; }
.codicon-folder-library:before { content: '\ebdf'; }
.codicon-debug-continue-small:before { content: '\ebe0'; }
.codicon-beaker-stop:before { content: '\ebe1'; }
.codicon-graph-line:before { content: '\ebe2'; }
.codicon-graph-scatter:before { content: '\ebe3'; }
.codicon-pie-chart:before { content: '\ebe4'; }
.codicon-bracket:before { content: '\eb0f'; }
.codicon-bracket-dot:before { content: '\ebe5'; }
.codicon-bracket-error:before { content: '\ebe6'; }
.codicon-lock-small:before { content: '\ebe7'; }
.codicon-azure-devops:before { content: '\ebe8'; }
.codicon-verified-filled:before { content: '\ebe9'; }
.codicon-newline:before { content: '\ebea'; }
.codicon-layout:before { content: '\ebeb'; }
.codicon-layout-activitybar-left:before { content: '\ebec'; }
.codicon-layout-activitybar-right:before { content: '\ebed'; }
.codicon-layout-panel-left:before { content: '\ebee'; }
.codicon-layout-panel-center:before { content: '\ebef'; }
.codicon-layout-panel-justify:before { content: '\ebf0'; }
.codicon-layout-panel-right:before { content: '\ebf1'; }
.codicon-layout-panel:before { content: '\ebf2'; }
.codicon-layout-sidebar-left:before { content: '\ebf3'; }
.codicon-layout-sidebar-right:before { content: '\ebf4'; }
.codicon-layout-statusbar:before { content: '\ebf5'; }
.codicon-layout-menubar:before { content: '\ebf6'; }
.codicon-layout-centered:before { content: '\ebf7'; }
.codicon-target:before { content: '\ebf8'; }
.codicon-indent:before { content: '\ebf9'; }
.codicon-record-small:before { content: '\ebfa'; }
.codicon-error-small:before { content: '\ebfb'; }
.codicon-arrow-circle-down:before { content: '\ebfc'; }
.codicon-arrow-circle-left:before { content: '\ebfd'; }
.codicon-arrow-circle-right:before { content: '\ebfe'; }
.codicon-arrow-circle-up:before { content: '\ebff'; }
.codicon-dialog-error:before { content: '\ea87'; }
.codicon-dialog-warning:before { content: '\ea6c'; }
.codicon-dialog-info:before { content: '\ea74'; }
.codicon-dialog-close:before { content: '\ea76'; }
.codicon-tree-item-expanded:before { content: '\eab4'; }
.codicon-tree-filter-on-type-on:before { content: '\eb83'; }
.codicon-tree-filter-on-type-off:before { content: '\eb85'; }
.codicon-tree-filter-clear:before { content: '\ea76'; }
.codicon-tree-item-loading:before { content: '\eb19'; }
.codicon-menu-selection:before { content: '\eab2'; }
.codicon-menu-submenu:before { content: '\eab6'; }
.codicon-menubar-more:before { content: '\ea7c'; }
.codicon-scrollbar-button-left:before { content: '\eb6f'; }
.codicon-scrollbar-button-right:before { content: '\eb70'; }
.codicon-scrollbar-button-up:before { content: '\eb71'; }
.codicon-scrollbar-button-down:before { content: '\eb6e'; }
.codicon-toolbar-more:before { content: '\ea7c'; }
.codicon-quick-input-back:before { content: '\ea9b'; }
.codicon-widget-close:before { content: '\ea76'; }
.codicon-goto-previous-location:before { content: '\eaa1'; }
.codicon-goto-next-location:before { content: '\ea9a'; }
.codicon-find-selection:before { content: '\eb85'; }
.codicon-find-collapsed:before { content: '\eab6'; }
.codicon-find-expanded:before { content: '\eab4'; }
.codicon-find-replace:before { content: '\eb3d'; }
.codicon-find-replace-all:before { content: '\eb3c'; }
.codicon-find-previous-match:before { content: '\eaa1'; }
.codicon-find-next-match:before { content: '\ea9a'; }
.codicon-folding-expanded:before { content: '\eab4'; }
.codicon-folding-collapsed:before { content: '\eab6'; }
.codicon-marker-navigation-next:before { content: '\ea9a'; }
.codicon-marker-navigation-previous:before { content: '\eaa1'; }
.codicon-parameter-hints-next:before { content: '\eab4'; }
.codicon-parameter-hints-previous:before { content: '\eab7'; }
.codicon-suggest-more-info:before { content: '\eab6'; }
.codicon-diff-review-insert:before { content: '\ea60'; }
.codicon-diff-review-remove:before { content: '\eb3b'; }
.codicon-diff-review-close:before { content: '\ea76'; }
.codicon-diff-insert:before { content: '\ea60'; }
.codicon-diff-remove:before { content: '\eb3b'; }
.monaco-editor, .monaco-editor-background, .monaco-editor .inputarea.ime-input { background-color: #282828; }
.monaco-editor, .monaco-editor .inputarea.ime-input { color: #d4d4d4; }
.monaco-editor .margin { background-color: #282828; }
.monaco-editor .rangeHighlight { background-color: rgba(255, 255, 255, 0.04); }
.monaco-editor .symbolHighlight { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .mtkw { color: rgba(227, 228, 226, 0.16) !important; }
.monaco-editor .mtkz { color: rgba(227, 228, 226, 0.16) !important; }
.monaco-editor .line-numbers { color: #858585; }
.monaco-editor .line-numbers.active-line-number { color: #c6c6c6; }
.monaco-editor .view-overlays .current-line { border: 2px solid #282828; }
.monaco-editor .margin-view-overlays .current-line-margin { border: 2px solid #282828; }

			.monaco-scrollable-element > .shadow.top {
				box-shadow: #000000 0 6px 6px -6px inset;
			}

			.monaco-scrollable-element > .shadow.left {
				box-shadow: #000000 6px 0 6px -6px inset;
			}

			.monaco-scrollable-element > .shadow.top.left {
				box-shadow: #000000 6px 6px 6px -6px inset;
			}
		

			.monaco-scrollable-element > .scrollbar > .slider {
				background: rgba(121, 121, 121, 0.4);
			}
		

			.monaco-scrollable-element > .scrollbar > .slider:hover {
				background: rgba(100, 100, 100, 0.7);
			}
		

			.monaco-scrollable-element > .scrollbar > .slider.active {
				background: rgba(191, 191, 191, 0.4);
			}
		
.monaco-editor .lines-content .core-guide-indent { box-shadow: 1px 0 0 0 #404040 inset; }
.monaco-editor .lines-content .core-guide-indent-active { box-shadow: 1px 0 0 0 #707070 inset; }
.monaco-editor .bracket-indent-guide.lvl-0 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-1 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-2 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-3 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-4 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-5 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-6 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-7 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-8 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-9 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-10 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-11 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-12 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-13 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-14 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-15 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-16 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-17 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-18 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-19 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-20 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-21 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-22 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-23 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-24 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-25 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-26 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .bracket-indent-guide.lvl-27 { --guide-color: rgba(255, 215, 0, 0.3); --guide-color-active: #ffd700; }
.monaco-editor .bracket-indent-guide.lvl-28 { --guide-color: rgba(218, 112, 214, 0.3); --guide-color-active: #da70d6; }
.monaco-editor .bracket-indent-guide.lvl-29 { --guide-color: rgba(23, 159, 255, 0.3); --guide-color-active: #179fff; }
.monaco-editor .vertical { box-shadow: 1px 0 0 0 var(--guide-color) inset; }
.monaco-editor .horizontal-top { border-top: 1px solid var(--guide-color); }
.monaco-editor .horizontal-bottom { border-bottom: 1px solid var(--guide-color); }
.monaco-editor .vertical.indent-active { box-shadow: 1px 0 0 0 var(--guide-color-active) inset; }
.monaco-editor .horizontal-top.indent-active { border-top: 1px solid var(--guide-color-active); }
.monaco-editor .horizontal-bottom.indent-active { border-bottom: 1px solid var(--guide-color-active); }
.monaco-editor .minimap-slider .minimap-slider-horizontal { background: rgba(121, 121, 121, 0.2); }
.monaco-editor .minimap-slider:hover .minimap-slider-horizontal { background: rgba(100, 100, 100, 0.35); }
.monaco-editor .minimap-slider.active .minimap-slider-horizontal { background: rgba(191, 191, 191, 0.2); }
.monaco-editor .minimap-shadow-visible { box-shadow: #000000 -6px 0 6px -6px inset; }
.monaco-editor .view-ruler { box-shadow: 1px 0 0 0 #5a5a5a inset; }
.monaco-editor .scroll-decoration { box-shadow: #000000 0 6px 6px -6px inset; }
.monaco-editor .focused .selected-text { background-color: #264f78; }
.monaco-editor .selected-text { background-color: #3a3d41; }
.monaco-editor .inputarea.ime-input { caret-color: #aeafad; }
.monaco-editor .cursors-layer .cursor { background-color: #aeafad; border-color: #aeafad; color: #515052; }
.monaco-editor .unexpected-closing-bracket { color: rgba(255, 18, 18, 0.8); }
.monaco-editor .bracket-highlighting-0 { color: #ffd700; }
.monaco-editor .bracket-highlighting-1 { color: #da70d6; }
.monaco-editor .bracket-highlighting-2 { color: #179fff; }
.monaco-editor .bracket-highlighting-3 { color: #ffd700; }
.monaco-editor .bracket-highlighting-4 { color: #da70d6; }
.monaco-editor .bracket-highlighting-5 { color: #179fff; }
.monaco-editor .bracket-highlighting-6 { color: #ffd700; }
.monaco-editor .bracket-highlighting-7 { color: #da70d6; }
.monaco-editor .bracket-highlighting-8 { color: #179fff; }
.monaco-editor .bracket-highlighting-9 { color: #ffd700; }
.monaco-editor .bracket-highlighting-10 { color: #da70d6; }
.monaco-editor .bracket-highlighting-11 { color: #179fff; }
.monaco-editor .bracket-highlighting-12 { color: #ffd700; }
.monaco-editor .bracket-highlighting-13 { color: #da70d6; }
.monaco-editor .bracket-highlighting-14 { color: #179fff; }
.monaco-editor .bracket-highlighting-15 { color: #ffd700; }
.monaco-editor .bracket-highlighting-16 { color: #da70d6; }
.monaco-editor .bracket-highlighting-17 { color: #179fff; }
.monaco-editor .bracket-highlighting-18 { color: #ffd700; }
.monaco-editor .bracket-highlighting-19 { color: #da70d6; }
.monaco-editor .bracket-highlighting-20 { color: #179fff; }
.monaco-editor .bracket-highlighting-21 { color: #ffd700; }
.monaco-editor .bracket-highlighting-22 { color: #da70d6; }
.monaco-editor .bracket-highlighting-23 { color: #179fff; }
.monaco-editor .bracket-highlighting-24 { color: #ffd700; }
.monaco-editor .bracket-highlighting-25 { color: #da70d6; }
.monaco-editor .bracket-highlighting-26 { color: #179fff; }
.monaco-editor .bracket-highlighting-27 { color: #ffd700; }
.monaco-editor .bracket-highlighting-28 { color: #da70d6; }
.monaco-editor .bracket-highlighting-29 { color: #179fff; }
.monaco-editor .squiggly-error { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23f14c4c'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-warning { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%23cca700'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-info { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D'http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg'%20viewBox%3D'0%200%206%203'%20enable-background%3D'new%200%200%206%203'%20height%3D'3'%20width%3D'6'%3E%3Cg%20fill%3D'%233794ff'%3E%3Cpolygon%20points%3D'5.5%2C0%202.5%2C3%201.1%2C3%204.1%2C0'%2F%3E%3Cpolygon%20points%3D'4%2C0%206%2C2%206%2C0.6%205.4%2C0'%2F%3E%3Cpolygon%20points%3D'0%2C2%201%2C3%202.4%2C3%200%2C0.6'%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") repeat-x bottom left; }
.monaco-editor .squiggly-hint { background: url("data:image/svg+xml,%3Csvg%20xmlns%3D%22http%3A%2F%2Fwww.w3.org%2F2000%2Fsvg%22%20height%3D%223%22%20width%3D%2212%22%3E%3Cg%20fill%3D%22rgba(238%2C%20238%2C%20238%2C%200.7)%22%3E%3Ccircle%20cx%3D%221%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%225%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3Ccircle%20cx%3D%229%22%20cy%3D%221%22%20r%3D%221%22%2F%3E%3C%2Fg%3E%3C%2Fsvg%3E") no-repeat bottom left; }
.monaco-editor.showUnused .squiggly-inline-unnecessary { opacity: 0.667; }
.monaco-editor.showDeprecated .squiggly-inline-deprecated { text-decoration: line-through; text-decoration-color: #d4d4d4}
.monaco-editor .bracket-match { background-color: rgba(0, 100, 0, 0.1); }
.monaco-editor .bracket-match { border: 1px solid #888888; }
.monaco-editor .findOptionsWidget { background-color: #252526; }
.monaco-editor .findOptionsWidget { color: #cccccc; }
.monaco-editor .findOptionsWidget { box-shadow: 0 0 8px 2px rgba(0, 0, 0, 0.36); }
.monaco-editor .findMatch { background-color: rgba(234, 92, 0, 0.33); }
.monaco-editor .currentFindMatch { background-color: #515c6a; }
.monaco-editor .findScope { background-color: rgba(58, 61, 65, 0.4); }
.monaco-editor .find-widget { background-color: #252526; }
.monaco-editor .find-widget { box-shadow: 0 0 8px 2px rgba(0, 0, 0, 0.36); }
.monaco-editor .find-widget { color: #cccccc; }
.monaco-editor .find-widget.no-results .matchesCount { color: #f48771; }
.monaco-editor .find-widget .monaco-sash { background-color: #454545; }

		.monaco-editor .find-widget .button:not(.disabled):hover,
		.monaco-editor .find-widget .codicon-find-selection:hover {
			background-color: rgba(90, 93, 94, 0.31) !important;
		}
	
.monaco-editor .find-widget .monaco-inputbox.synthetic-focus { outline-color: #007fd4; }
.monaco-editor .folded-background { background-color: rgba(38, 79, 120, 0.3); }

		.monaco-editor .cldr.codicon.codicon-folding-expanded,
		.monaco-editor .cldr.codicon.codicon-folding-collapsed {
			color: #c5c5c5 !important;
		}
		
.monaco-editor .goto-definition-link { color: #4e94ce !important; }

		.monaco-editor .contentWidgets .codicon.codicon-light-bulb {
			color: #ffcc00;
			background-color: rgba(40, 40, 40, 0.7);
		}

		.monaco-editor .contentWidgets .codicon.codicon-lightbulb-autofix {
			color: #75beff;
			background-color: rgba(40, 40, 40, 0.7);
		}

			.monaco-editor .zone-widget .codicon.codicon-error,
			.markers-panel .marker-icon.codicon.codicon-error,
			.text-search-provider-messages .providerMessage .codicon.codicon-error,
			.extensions-viewlet > .extensions .codicon.codicon-error {
				color: #f14c4c;
			}
		

			.monaco-editor .zone-widget .codicon.codicon-warning,
			.markers-panel .marker-icon.codicon.codicon-warning,
			.extensions-viewlet > .extensions .codicon.codicon-warning,
			.extension-editor .codicon.codicon-warning,
			.text-search-provider-messages .providerMessage .codicon.codicon-warning,
			.preferences-editor .codicon.codicon-warning {
				color: #cca700;
			}
		

			.monaco-editor .zone-widget .codicon.codicon-info,
			.markers-panel .marker-icon.codicon.codicon-info,
			.extensions-viewlet > .extensions .codicon.codicon-info,
			.text-search-provider-messages .providerMessage .codicon.codicon-info,
			.extension-editor .codicon.codicon-info {
				color: #3794ff;
			}
		
.monaco-hover .hover-contents a.code-link span { color: #3794ff; }
.monaco-hover .hover-contents a.code-link span:hover { color: #3794ff; }
.monaco-editor .hoverHighlight { background-color: rgba(38, 79, 120, 0.25); }
.monaco-editor .monaco-hover { background-color: #252526; }
.monaco-editor .monaco-hover { border: 1px solid #454545; }
.monaco-editor .monaco-hover .hover-row:not(:first-child):not(:empty) { border-top: 1px solid rgba(69, 69, 69, 0.5); }
.monaco-editor .monaco-hover hr { border-top: 1px solid rgba(69, 69, 69, 0.5); }
.monaco-editor .monaco-hover hr { border-bottom: 0px solid rgba(69, 69, 69, 0.5); }
.monaco-editor .monaco-hover a { color: #3794ff; }
.monaco-editor .monaco-hover a:hover { color: #3794ff; }
.monaco-editor .monaco-hover { color: #cccccc; }
.monaco-editor .monaco-hover .hover-row .actions { background-color: #2c2c2d; }
.monaco-editor .monaco-hover code { background-color: rgba(10, 10, 10, 0.4); }
.monaco-editor.vs .valueSetReplacement { outline: solid 2px #888888; }
.monaco-editor .detected-link-active { color: #4e94ce !important; }
.monaco-editor .parameter-hints-widget { border: 1px solid #454545; }
.monaco-editor .parameter-hints-widget.multiple .body { border-left: 1px solid rgba(69, 69, 69, 0.5); }
.monaco-editor .parameter-hints-widget .signature.has-docs { border-bottom: 1px solid rgba(69, 69, 69, 0.5); }
.monaco-editor .parameter-hints-widget { background-color: #252526; }
.monaco-editor .parameter-hints-widget a { color: #3794ff; }
.monaco-editor .parameter-hints-widget a:hover { color: #3794ff; }
.monaco-editor .parameter-hints-widget { color: #cccccc; }
.monaco-editor .parameter-hints-widget code { background-color: rgba(10, 10, 10, 0.4); }
.monaco-editor .parameter-hints-widget .parameter.active { color: #18a3ff}
.codicon.codicon-symbol-array { color: #cccccc; }
.codicon.codicon-symbol-boolean { color: #cccccc; }
.codicon.codicon-symbol-class { color: #ee9d28; }
.codicon.codicon-symbol-method { color: #b180d7; }
.codicon.codicon-symbol-color { color: #cccccc; }
.codicon.codicon-symbol-constant { color: #cccccc; }
.codicon.codicon-symbol-constructor { color: #b180d7; }

			.codicon.codicon-symbol-value,.codicon.codicon-symbol-enum { color: #ee9d28; }
.codicon.codicon-symbol-enum-member { color: #75beff; }
.codicon.codicon-symbol-event { color: #ee9d28; }
.codicon.codicon-symbol-field { color: #75beff; }
.codicon.codicon-symbol-file { color: #cccccc; }
.codicon.codicon-symbol-folder { color: #cccccc; }
.codicon.codicon-symbol-function { color: #b180d7; }
.codicon.codicon-symbol-interface { color: #75beff; }
.codicon.codicon-symbol-key { color: #cccccc; }
.codicon.codicon-symbol-keyword { color: #cccccc; }
.codicon.codicon-symbol-module { color: #cccccc; }
.codicon.codicon-symbol-namespace { color: #cccccc; }
.codicon.codicon-symbol-null { color: #cccccc; }
.codicon.codicon-symbol-number { color: #cccccc; }
.codicon.codicon-symbol-object { color: #cccccc; }
.codicon.codicon-symbol-operator { color: #cccccc; }
.codicon.codicon-symbol-package { color: #cccccc; }
.codicon.codicon-symbol-property { color: #cccccc; }
.codicon.codicon-symbol-reference { color: #cccccc; }
.codicon.codicon-symbol-snippet { color: #cccccc; }
.codicon.codicon-symbol-string { color: #cccccc; }
.codicon.codicon-symbol-struct { color: #cccccc; }
.codicon.codicon-symbol-text { color: #cccccc; }
.codicon.codicon-symbol-type-parameter { color: #cccccc; }
.codicon.codicon-symbol-unit { color: #cccccc; }
.codicon.codicon-symbol-variable { color: #75beff; }
.monaco-editor .focused .selectionHighlight { background-color: rgba(173, 214, 255, 0.15); }
.monaco-editor .selectionHighlight { background-color: rgba(173, 214, 255, 0.07); }
.monaco-editor .wordHighlight { background-color: rgba(87, 87, 87, 0.72); }
.monaco-editor .wordHighlightStrong { background-color: rgba(0, 73, 114, 0.72); }
.monaco-editor .accessibilityHelpWidget { background-color: #252526; }
.monaco-editor .accessibilityHelpWidget { color: #cccccc; }
.monaco-editor .accessibilityHelpWidget { box-shadow: 0 2px 8px rgba(0, 0, 0, 0.36); }
.monaco-editor .tokens-inspect-widget { border: 1px solid #454545; }
.monaco-editor .tokens-inspect-widget .tokens-inspect-separator { background-color: #454545; }
.monaco-editor .tokens-inspect-widget { background-color: #252526; }
.monaco-editor .tokens-inspect-widget { color: #cccccc; }
.monaco-diff-editor .diff-review-line-number { color: #858585; }
.monaco-diff-editor .diff-review-shadow { box-shadow: #000000 0 -6px 6px -6px inset; }
.monaco-editor .char-insert, .monaco-diff-editor .char-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .line-insert, .monaco-diff-editor .line-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .inline-added-margin-view-zone { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .gutter-insert, .monaco-diff-editor .gutter-insert { background-color: rgba(155, 185, 85, 0.2); }
.monaco-editor .char-delete, .monaco-diff-editor .char-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-editor .line-delete, .monaco-diff-editor .line-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-editor .inline-deleted-margin-view-zone { background-color: rgba(255, 0, 0, 0.2); }
.monaco-editor .gutter-delete, .monaco-diff-editor .gutter-delete { background-color: rgba(255, 0, 0, 0.2); }
.monaco-diff-editor.side-by-side .editor.modified { box-shadow: -6px 0 5px -5px #000000; }

			.monaco-diff-editor .diffViewport {
				background: rgba(121, 121, 121, 0.4);
			}
		

			.monaco-diff-editor .diffViewport:hover {
				background: rgba(100, 100, 100, 0.7);
			}
		

			.monaco-diff-editor .diffViewport:active {
				background: rgba(191, 191, 191, 0.4);
			}
		

	.monaco-editor .diagonal-fill {
		background-image: linear-gradient(
			-45deg,
			rgba(204, 204, 204, 0.2) 12.5%,
			#0000 12.5%, #0000 50%,
			rgba(204, 204, 204, 0.2) 50%, rgba(204, 204, 204, 0.2) 62.5%,
			#0000 62.5%, #0000 100%
		);
		background-size: 8px 8px;
	}
	
.monaco-editor { --vscode-foreground: #cccccc;
--vscode-errorForeground: #f48771;
--vscode-descriptionForeground: rgba(204, 204, 204, 0.7);
--vscode-icon-foreground: #c5c5c5;
--vscode-focusBorder: #007fd4;
--vscode-textSeparator-foreground: rgba(255, 255, 255, 0.18);
--vscode-textLink-foreground: #3794ff;
--vscode-textLink-activeForeground: #3794ff;
--vscode-textPreformat-foreground: #d7ba7d;
--vscode-textBlockQuote-background: rgba(127, 127, 127, 0.1);
--vscode-textBlockQuote-border: rgba(0, 122, 204, 0.5);
--vscode-textCodeBlock-background: rgba(10, 10, 10, 0.4);
--vscode-widget-shadow: rgba(0, 0, 0, 0.36);
--vscode-input-background: #3c3c3c;
--vscode-input-foreground: #cccccc;
--vscode-inputOption-activeBorder: rgba(0, 122, 204, 0);
--vscode-inputOption-hoverBackground: rgba(90, 93, 94, 0.5);
--vscode-inputOption-activeBackground: rgba(0, 127, 212, 0.4);
--vscode-inputOption-activeForeground: #ffffff;
--vscode-input-placeholderForeground: #a6a6a6;
--vscode-inputValidation-infoBackground: #063b49;
--vscode-inputValidation-infoBorder: #007acc;
--vscode-inputValidation-warningBackground: #352a05;
--vscode-inputValidation-warningBorder: #b89500;
--vscode-inputValidation-errorBackground: #5a1d1d;
--vscode-inputValidation-errorBorder: #be1100;
--vscode-dropdown-background: #3c3c3c;
--vscode-dropdown-foreground: #f0f0f0;
--vscode-dropdown-border: #3c3c3c;
--vscode-checkbox-background: #3c3c3c;
--vscode-checkbox-foreground: #f0f0f0;
--vscode-checkbox-border: #3c3c3c;
--vscode-button-foreground: #ffffff;
--vscode-button-background: #0e639c;
--vscode-button-hoverBackground: #1177bb;
--vscode-button-secondaryForeground: #ffffff;
--vscode-button-secondaryBackground: #3a3d41;
--vscode-button-secondaryHoverBackground: #45494e;
--vscode-badge-background: #4d4d4d;
--vscode-badge-foreground: #ffffff;
--vscode-scrollbar-shadow: #000000;
--vscode-scrollbarSlider-background: rgba(121, 121, 121, 0.4);
--vscode-scrollbarSlider-hoverBackground: rgba(100, 100, 100, 0.7);
--vscode-scrollbarSlider-activeBackground: rgba(191, 191, 191, 0.4);
--vscode-progressBar-background: #0e70c0;
--vscode-editorError-foreground: #f14c4c;
--vscode-editorWarning-foreground: #cca700;
--vscode-editorInfo-foreground: #3794ff;
--vscode-editorHint-foreground: rgba(238, 238, 238, 0.7);
--vscode-sash-hoverBorder: #007fd4;
--vscode-editor-background: #282828;
--vscode-editor-foreground: #d4d4d4;
--vscode-editorWidget-background: #252526;
--vscode-editorWidget-foreground: #cccccc;
--vscode-editorWidget-border: #454545;
--vscode-quickInput-background: #252526;
--vscode-quickInput-foreground: #cccccc;
--vscode-quickInputTitle-background: rgba(255, 255, 255, 0.1);
--vscode-pickerGroup-foreground: #3794ff;
--vscode-pickerGroup-border: #3f3f46;
--vscode-keybindingLabel-background: rgba(128, 128, 128, 0.17);
--vscode-keybindingLabel-foreground: #cccccc;
--vscode-keybindingLabel-border: rgba(51, 51, 51, 0.6);
--vscode-keybindingLabel-bottomBorder: rgba(68, 68, 68, 0.6);
--vscode-editor-selectionBackground: #264f78;
--vscode-editor-inactiveSelectionBackground: #3a3d41;
--vscode-editor-selectionHighlightBackground: rgba(173, 214, 255, 0.15);
--vscode-editor-findMatchBackground: #515c6a;
--vscode-editor-findMatchHighlightBackground: rgba(234, 92, 0, 0.33);
--vscode-editor-findRangeHighlightBackground: rgba(58, 61, 65, 0.4);
--vscode-searchEditor-findMatchBackground: rgba(234, 92, 0, 0.22);
--vscode-editor-hoverHighlightBackground: rgba(38, 79, 120, 0.25);
--vscode-editorHoverWidget-background: #252526;
--vscode-editorHoverWidget-foreground: #cccccc;
--vscode-editorHoverWidget-border: #454545;
--vscode-editorHoverWidget-statusBarBackground: #2c2c2d;
--vscode-editorLink-activeForeground: #4e94ce;
--vscode-editorInlayHint-foreground: rgba(255, 255, 255, 0.8);
--vscode-editorInlayHint-background: rgba(77, 77, 77, 0.6);
--vscode-editorInlayHint-typeForeground: rgba(255, 255, 255, 0.8);
--vscode-editorInlayHint-typeBackground: rgba(77, 77, 77, 0.6);
--vscode-editorInlayHint-parameterForeground: rgba(255, 255, 255, 0.8);
--vscode-editorInlayHint-parameterBackground: rgba(77, 77, 77, 0.6);
--vscode-editorLightBulb-foreground: #ffcc00;
--vscode-editorLightBulbAutoFix-foreground: #75beff;
--vscode-diffEditor-insertedTextBackground: rgba(155, 185, 85, 0.2);
--vscode-diffEditor-removedTextBackground: rgba(255, 0, 0, 0.2);
--vscode-diffEditor-diagonalFill: rgba(204, 204, 204, 0.2);
--vscode-list-focusOutline: #007fd4;
--vscode-list-activeSelectionBackground: #094771;
--vscode-list-activeSelectionForeground: #ffffff;
--vscode-list-inactiveSelectionBackground: #37373d;
--vscode-list-hoverBackground: #2a2d2e;
--vscode-list-dropBackground: #383b3d;
--vscode-list-highlightForeground: #18a3ff;
--vscode-list-focusHighlightForeground: #18a3ff;
--vscode-list-invalidItemForeground: #b89500;
--vscode-list-errorForeground: #f88070;
--vscode-list-warningForeground: #cca700;
--vscode-listFilterWidget-background: #653723;
--vscode-listFilterWidget-outline: rgba(0, 0, 0, 0);
--vscode-listFilterWidget-noMatchesOutline: #be1100;
--vscode-list-filterMatchBackground: rgba(234, 92, 0, 0.33);
--vscode-tree-indentGuidesStroke: #585858;
--vscode-tree-tableColumnsBorder: rgba(204, 204, 204, 0.13);
--vscode-tree-tableOddRowsBackground: rgba(204, 204, 204, 0.04);
--vscode-list-deemphasizedForeground: #8c8c8c;
--vscode-quickInputList-focusForeground: #ffffff;
--vscode-quickInputList-focusBackground: #094771;
--vscode-menu-foreground: #cccccc;
--vscode-menu-background: #252526;
--vscode-menu-selectionForeground: #ffffff;
--vscode-menu-selectionBackground: #094771;
--vscode-menu-separatorBackground: #bbbbbb;
--vscode-toolbar-hoverBackground: rgba(90, 93, 94, 0.31);
--vscode-toolbar-activeBackground: rgba(99, 102, 103, 0.31);
--vscode-editor-snippetTabstopHighlightBackground: rgba(124, 124, 124, 0.3);
--vscode-editor-snippetFinalTabstopHighlightBorder: #525252;
--vscode-breadcrumb-foreground: rgba(204, 204, 204, 0.8);
--vscode-breadcrumb-background: #282828;
--vscode-breadcrumb-focusForeground: #e0e0e0;
--vscode-breadcrumb-activeSelectionForeground: #e0e0e0;
--vscode-breadcrumbPicker-background: #252526;
--vscode-merge-currentHeaderBackground: rgba(64, 200, 174, 0.5);
--vscode-merge-currentContentBackground: rgba(64, 200, 174, 0.2);
--vscode-merge-incomingHeaderBackground: rgba(64, 166, 255, 0.5);
--vscode-merge-incomingContentBackground: rgba(64, 166, 255, 0.2);
--vscode-merge-commonHeaderBackground: rgba(96, 96, 96, 0.4);
--vscode-merge-commonContentBackground: rgba(96, 96, 96, 0.16);
--vscode-editorOverviewRuler-currentContentForeground: rgba(64, 200, 174, 0.5);
--vscode-editorOverviewRuler-incomingContentForeground: rgba(64, 166, 255, 0.5);
--vscode-editorOverviewRuler-commonContentForeground: rgba(96, 96, 96, 0.4);
--vscode-editorOverviewRuler-findMatchForeground: rgba(209, 134, 22, 0.49);
--vscode-editorOverviewRuler-selectionHighlightForeground: rgba(160, 160, 160, 0.8);
--vscode-minimap-findMatchHighlight: #d18616;
--vscode-minimap-selectionOccurrenceHighlight: #676767;
--vscode-minimap-selectionHighlight: #264f78;
--vscode-minimap-errorHighlight: rgba(255, 18, 18, 0.7);
--vscode-minimap-warningHighlight: #cca700;
--vscode-minimap-foregroundOpacity: #000000;
--vscode-minimapSlider-background: rgba(121, 121, 121, 0.2);
--vscode-minimapSlider-hoverBackground: rgba(100, 100, 100, 0.35);
--vscode-minimapSlider-activeBackground: rgba(191, 191, 191, 0.2);
--vscode-problemsErrorIcon-foreground: #f14c4c;
--vscode-problemsWarningIcon-foreground: #cca700;
--vscode-problemsInfoIcon-foreground: #3794ff;
--vscode-charts-foreground: #cccccc;
--vscode-charts-lines: rgba(204, 204, 204, 0.5);
--vscode-charts-red: #f14c4c;
--vscode-charts-blue: #3794ff;
--vscode-charts-yellow: #cca700;
--vscode-charts-orange: #d18616;
--vscode-charts-green: #89d185;
--vscode-charts-purple: #b180d7;
--vscode-editor-lineHighlightBorder: #282828;
--vscode-editor-rangeHighlightBackground: rgba(255, 255, 255, 0.04);
--vscode-editor-symbolHighlightBackground: rgba(234, 92, 0, 0.33);
--vscode-editorCursor-foreground: #aeafad;
--vscode-editorWhitespace-foreground: rgba(227, 228, 226, 0.16);
--vscode-editorIndentGuide-background: #404040;
--vscode-editorIndentGuide-activeBackground: #707070;
--vscode-editorLineNumber-foreground: #858585;
--vscode-editorActiveLineNumber-foreground: #c6c6c6;
--vscode-editorLineNumber-activeForeground: #c6c6c6;
--vscode-editorRuler-foreground: #5a5a5a;
--vscode-editorCodeLens-foreground: #999999;
--vscode-editorBracketMatch-background: rgba(0, 100, 0, 0.1);
--vscode-editorBracketMatch-border: #888888;
--vscode-editorOverviewRuler-border: rgba(127, 127, 127, 0.3);
--vscode-editorGutter-background: #282828;
--vscode-editorUnnecessaryCode-opacity: rgba(0, 0, 0, 0.67);
--vscode-editorGhostText-foreground: rgba(255, 255, 255, 0.34);
--vscode-editorOverviewRuler-rangeHighlightForeground: rgba(0, 122, 204, 0.6);
--vscode-editorOverviewRuler-errorForeground: rgba(255, 18, 18, 0.7);
--vscode-editorOverviewRuler-warningForeground: #cca700;
--vscode-editorOverviewRuler-infoForeground: #3794ff;
--vscode-editorBracketHighlight-foreground1: #ffd700;
--vscode-editorBracketHighlight-foreground2: #da70d6;
--vscode-editorBracketHighlight-foreground3: #179fff;
--vscode-editorBracketHighlight-foreground4: rgba(0, 0, 0, 0);
--vscode-editorBracketHighlight-foreground5: rgba(0, 0, 0, 0);
--vscode-editorBracketHighlight-foreground6: rgba(0, 0, 0, 0);
--vscode-editorBracketHighlight-unexpectedBracket-foreground: rgba(255, 18, 18, 0.8);
--vscode-editorBracketPairGuide-background1: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-background2: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-background3: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-background4: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-background5: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-background6: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground1: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground2: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground3: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground4: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground5: rgba(0, 0, 0, 0);
--vscode-editorBracketPairGuide-activeBackground6: rgba(0, 0, 0, 0);
--vscode-editorUnicodeHighlight-border: #bd9b03;
--vscode-editorOverviewRuler-bracketMatchForeground: #a0a0a0;
--vscode-editor-foldBackground: rgba(38, 79, 120, 0.3);
--vscode-editorGutter-foldingControlForeground: #c5c5c5;
--vscode-peekViewTitle-background: rgba(55, 148, 255, 0.1);
--vscode-peekViewTitleLabel-foreground: #ffffff;
--vscode-peekViewTitleDescription-foreground: rgba(204, 204, 204, 0.7);
--vscode-peekView-border: #3794ff;
--vscode-peekViewResult-background: #252526;
--vscode-peekViewResult-lineForeground: #bbbbbb;
--vscode-peekViewResult-fileForeground: #ffffff;
--vscode-peekViewResult-selectionBackground: rgba(51, 153, 255, 0.2);
--vscode-peekViewResult-selectionForeground: #ffffff;
--vscode-peekViewEditor-background: #001f33;
--vscode-peekViewEditorGutter-background: #001f33;
--vscode-peekViewResult-matchHighlightBackground: rgba(234, 92, 0, 0.3);
--vscode-peekViewEditor-matchHighlightBackground: rgba(255, 143, 0, 0.6);
--vscode-editorMarkerNavigationError-background: #f14c4c;
--vscode-editorMarkerNavigationError-headerBackground: rgba(241, 76, 76, 0.1);
--vscode-editorMarkerNavigationWarning-background: #cca700;
--vscode-editorMarkerNavigationWarning-headerBackground: rgba(204, 167, 0, 0.1);
--vscode-editorMarkerNavigationInfo-background: #3794ff;
--vscode-editorMarkerNavigationInfo-headerBackground: rgba(55, 148, 255, 0.1);
--vscode-editorMarkerNavigation-background: #282828;
--vscode-editorHoverWidget-highlightForeground: #18a3ff;
--vscode-symbolIcon-arrayForeground: #cccccc;
--vscode-symbolIcon-booleanForeground: #cccccc;
--vscode-symbolIcon-classForeground: #ee9d28;
--vscode-symbolIcon-colorForeground: #cccccc;
--vscode-symbolIcon-constantForeground: #cccccc;
--vscode-symbolIcon-constructorForeground: #b180d7;
--vscode-symbolIcon-enumeratorForeground: #ee9d28;
--vscode-symbolIcon-enumeratorMemberForeground: #75beff;
--vscode-symbolIcon-eventForeground: #ee9d28;
--vscode-symbolIcon-fieldForeground: #75beff;
--vscode-symbolIcon-fileForeground: #cccccc;
--vscode-symbolIcon-folderForeground: #cccccc;
--vscode-symbolIcon-functionForeground: #b180d7;
--vscode-symbolIcon-interfaceForeground: #75beff;
--vscode-symbolIcon-keyForeground: #cccccc;
--vscode-symbolIcon-keywordForeground: #cccccc;
--vscode-symbolIcon-methodForeground: #b180d7;
--vscode-symbolIcon-moduleForeground: #cccccc;
--vscode-symbolIcon-namespaceForeground: #cccccc;
--vscode-symbolIcon-nullForeground: #cccccc;
--vscode-symbolIcon-numberForeground: #cccccc;
--vscode-symbolIcon-objectForeground: #cccccc;
--vscode-symbolIcon-operatorForeground: #cccccc;
--vscode-symbolIcon-packageForeground: #cccccc;
--vscode-symbolIcon-propertyForeground: #cccccc;
--vscode-symbolIcon-referenceForeground: #cccccc;
--vscode-symbolIcon-snippetForeground: #cccccc;
--vscode-symbolIcon-stringForeground: #cccccc;
--vscode-symbolIcon-structForeground: #cccccc;
--vscode-symbolIcon-textForeground: #cccccc;
--vscode-symbolIcon-typeParameterForeground: #cccccc;
--vscode-symbolIcon-unitForeground: #cccccc;
--vscode-symbolIcon-variableForeground: #75beff;
--vscode-editorSuggestWidget-background: #252526;
--vscode-editorSuggestWidget-border: #454545;
--vscode-editorSuggestWidget-foreground: #d4d4d4;
--vscode-editorSuggestWidget-selectedForeground: #ffffff;
--vscode-editorSuggestWidget-selectedBackground: #094771;
--vscode-editorSuggestWidget-highlightForeground: #18a3ff;
--vscode-editorSuggestWidget-focusHighlightForeground: #18a3ff;
--vscode-editorSuggestWidgetStatus-foreground: rgba(212, 212, 212, 0.5);
--vscode-editor-wordHighlightBackground: rgba(87, 87, 87, 0.72);
--vscode-editor-wordHighlightStrongBackground: rgba(0, 73, 114, 0.72);
--vscode-editorOverviewRuler-wordHighlightForeground: rgba(160, 160, 160, 0.8);
--vscode-editorOverviewRuler-wordHighlightStrongForeground: rgba(192, 160, 192, 0.8); }

.mtk1 { color: #d4d4d4; }
.mtk2 { color: #282828; }
.mtk3 { color: #6a9955; }
.mtk4 { color: #569cd6; }
.mtk5 { color: #d16969; }
.mtk6 { color: #d7ba7d; }
.mtk7 { color: #b5cea8; }
.mtk8 { color: #ce9178; }
.mtk9 { color: #646695; }
.mtk10 { color: #4ec9b0; }
.mtk11 { color: #dcdcaa; }
.mtk12 { color: #c8c8c8; }
.mtk13 { color: #c586c0; }
.mtk14 { color: #9cdcfe; }
.mtk15 { color: #000080; }
.mtk16 { color: #f44747; }
.mtk17 { color: #6796e6; }
.mtk18 { color: #808080; }
.mtk19 { color: #4fc1ff; }
.mtki { font-style: italic; }
.mtkb { font-weight: bold; }
.mtku { text-decoration: underline; text-underline-position: under; }
.mtks { text-decoration: line-through; }
.mtks.mtku { text-decoration: underline line-through; text-underline-position: under; }</style><link rel="stylesheet" type="text/css" href="./longest-consecutive-sequence_files/2e0e4fec32768a7f.css"><style id="49309">.mkgZQ a{--tw-text-opacity:1;color:rgb(0 122 255/var(--tw-text-opacity))}:is(.BiUzM .mkgZQ a){--tw-text-opacity:1;color:rgb(0 122 255/var(--tw-text-opacity))}
/*# sourceMappingURL=data:application/json;charset=utf-8;base64,eyJ2ZXJzaW9uIjozLCJzb3VyY2VzIjpbIndlYnBhY2s6Ly8uL2NvbXBvbmVudHMvcXVlc3Rpb24tZGV0YWlsL2VkaXRvci90b29sYmFyL3Rvb2xiYXIuaXNvLmNzcyJdLCJuYW1lcyI6W10sIm1hcHBpbmdzIjoiQUFDRSxTQUFBLG1CQUFrQyxDQUFsQywyQ0FBa0MsQ0FBbEMscUJBQUEsbUJBQWtDLENBQWxDLDJDQUFrQyIsInNvdXJjZXNDb250ZW50IjpbIi5sYW5nSW5mbyBhIHsgXG4gIEBhcHBseSB0ZXh0LWJsdWUtcyBkYXJrOnRleHQtYmx1ZS1zXG59Il0sInNvdXJjZVJvb3QiOiIifQ== */</style></head><body class="chakra-ui-dark"><script id="chakra-script">!(function(){try{var a=function(c){var v="(prefers-color-scheme: dark)",h=window.matchMedia(v).matches?"dark":"light",r=c==="system"?h:c,o=document.documentElement,s=document.body,l="chakra-ui-light",d="chakra-ui-dark",i=r==="dark";return s.classList.add(i?d:l),s.classList.remove(i?l:d),o.style.colorScheme=r,o.dataset.theme=r,r},n=a,m="system",e="lc-dark-side",t=localStorage.getItem(e);t?a(t):localStorage.setItem(e,a(m))}catch(a){}})();</script><div id="__next"><script>!function(){try{var d=document.documentElement,c=d.classList;c.remove('light','dark');var e=localStorage.getItem('lc-dark-side');if('system'===e||(!e&&true)){var t='(prefers-color-scheme: dark)',m=window.matchMedia(t);if(m.media!==t||m.matches){d.style.colorScheme = 'dark';c.add('dark')}else{d.style.colorScheme = 'light';c.add('light')}}else if(e){c.add(e|| '')}if(e==='light'||e==='dark')d.style.colorScheme=e}catch(e){}}()</script><div class="flex min-w-[360px] flex-col text-label-1 dark:text-dark-label-1 h-[100vh]"><div class="h-[100vh] bg-gray-2 dark:bg-dark-layer-bg"><div class="flex h-full w-full flex-col"><nav class="z-nav-1 relative flex h-[50px] w-full shrink-0 items-center px-5 bg-layer-1 dark:bg-dark-layer-1"><div class="flex w-full justify-between"><div class="flex w-full items-center justify-between"><div class="flex"><ul class="relative flex h-[50px] items-end"><a href="https://leetcode.com/" class="mr-2 self-center"><div class="mb-0.5 pl-1"><div class="hidden h-5 dark:flex"><img src="./longest-consecutive-sequence_files/logo-dark-c96c407d175e36c81e236fcfdd682a0b.png" class="h-full" alt="LeetCode Logo"></div><div class="flex h-5 dark:hidden"><img src="./longest-consecutive-sequence_files/logo-ff2b712834cf26bf50a5de58ee27bcef.png" class="h-full" alt="LeetCode Logo"></div></div></a><div class="relative hidden lc-lg:block" id="rootItem"><li class="relative border-opacity-0 dark:border-opacity-0 flex items-center pb-3 text-base leading-[22px]
   cursor-pointer text-label-2 dark:text-dark-label-2 hover:text-label-1 dark:hover:text-dark-label-1"></li><hr class="border-divider-2 dark:border-dark-divider-2 h-0.5 rounded-[1px] border-none bg-gray-8 dark:bg-white shadow-level2 dark:shadow-dark-level2 invisible"></div></ul><div class="lc-md:flex hidden items-center"><div class="group flex cursor-pointer items-center text-lc-icon-secondary dark:text-dark-lc-icon-secondary hover:text-lc-icon-primary dark:hover:text-dark-lc-icon-primary rounded-[5px] py-[3px] pl-2 pr-[10px] hover:bg-lc-fill-01 dark:hover:bg-dark-lc-fill-01"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="20" height="20" fill="none" class="cursor-pointer"><path d="M21.5984 4.7998H8.39844M21.5984 9.59981H13.1984M21.5984 19.1998H8.39844M2.39844 7.19981L7.19844 11.9998L2.39844 16.7998M21.5984 14.3998H13.1984" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path></svg><div class="ml-[10px] max-w-[170px] truncate font-medium text-lc-text-secondary dark:text-dark-lc-text-secondary group-hover:text-lc-text-primary dark:group-hover:text-dark-lc-text-primary">Problem List</div></div><div class="ml-3 flex items-center space-x-2"><a class="group flex cursor-pointer group-hover:text-lc-icon-primary dark:group-hover:text-dark-lc-icon-primary h-6 w-6 rounded border-[1.5px] text-gray-6 dark:text-dark-gray-6 border-divider-3 dark:border-dark-divider-3 hover:text-gray-8 dark:hover:text-dark-gray-8 hover:bg-lc-fill-01 dark:hover:bg-dark-lc-fill-01" href="https://leetcode.com/problems/rotate-array"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="16" height="16" fill="currentColor" class="m-auto items-center"><path fill-rule="evenodd" d="M14.707 16.293a1 1 0 01-1.414 1.414l-5-5a1 1 0 010-1.414l5-5a1 1 0 111.414 1.414L10.414 12l4.293 4.293z" clip-rule="evenodd"></path></svg></a><a class="group flex cursor-pointer group-hover:text-lc-icon-primary dark:group-hover:text-dark-lc-icon-primary h-6 w-6 rounded border-[1.5px] text-gray-6 dark:text-dark-gray-6 border-divider-3 dark:border-dark-divider-3 hover:text-gray-8 dark:hover:text-dark-gray-8 hover:bg-lc-fill-01 dark:hover:bg-dark-lc-fill-01" href="https://leetcode.com/problems/maximum-subarray"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="16" height="16" fill="currentColor" class="m-auto items-center"><path fill-rule="evenodd" d="M9.293 7.707a1 1 0 011.414-1.414l5 5a1 1 0 010 1.414l-5 5a1 1 0 01-1.414-1.414L13.586 12 9.293 7.707z" clip-rule="evenodd"></path></svg></a></div><a href="https://leetcode.com/problems/find-eventual-safe-states" class="flex cursor-pointer items-center justify-center text-lc-icon-secondary dark:text-dark-lc-icon-secondary hover:text-lc-icon-primary dark:hover:text-dark-lc-icon-primary ml-5 h-4 w-4 rounded"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="16" height="16" fill="none"><path d="M2.39844 18.2958H5.37948C6.5421 18.2958 7.63315 17.7344 8.30892 16.7883L9.33239 15.3554M20.8542 5.64436H17.8732C16.7106 5.64436 15.6195 6.20583 14.9438 7.1519L13.7984 8.75535M19.0965 3.00781L21.5984 5.64436L19.0965 8.2809M19.0965 15.7187L21.5984 18.3553L19.0965 20.9918M2.39844 6.05141H5.37948C6.5421 6.05141 7.63315 6.61288 8.30892 7.55895L14.9438 16.8477C15.6195 17.7938 16.7106 18.3553 17.8732 18.3553H20.8542" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path></svg></a></div></div><div class="relative ml-4 flex items-center space-x-4"><a href="https://leetcode.com/subscribe/?ref=lp_pl&amp;source=nav-premium" class="no-underline hover:text-blue-s dark:hover:text-dark-blue-s truncate"><div class="hidden lg:block bg-fill-3 dark:bg-dark-fill-3 hover:bg-fill-2 dark:hover:bg-dark-fill-2 mr-3 cursor-pointer rounded px-3 py-1.5 transition-colors"><span class="text-brand-orange" style="font-family: TypoRound;">Premium</span></div></a><div class="lc-lg:block hidden"><div class="flex cursor-pointer items-center rounded hover:bg-fill-3 dark:hover:bg-dark-fill-3"><div class="css-0"><div class="flex items-center justify-center h-8 p-1 text-gray-6 dark:text-dark-gray-6 hover:text-gray-7 dark:hover:text-dark-gray-7"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-6 w-6"><path fill-rule="evenodd" d="M12 4a9 9 0 110 18 9 9 0 010-18zm0 2a7 7 0 100 14 7 7 0 000-14zm0 1.634a1 1 0 01.993.883l.007.117-.001 3.774 2.111 1.162a1 1 0 01.445 1.253l-.05.105a1 1 0 01-1.254.445l-.105-.05-2.628-1.447a1 1 0 01-.51-.756L11 13V8.634a1 1 0 011-1zM16.235 2.4a1 1 0 011.296-.269l.105.07 4 3 .095.08a1 1 0 01-1.19 1.588l-.105-.069-4-3-.096-.081a1 1 0 01-.105-1.319zM7.8 2.4a1 1 0 01-.104 1.319L7.6 3.8l-4 3a1 1 0 01-1.296-1.518L2.4 5.2l4-3a1 1 0 011.4.2z" clip-rule="evenodd"></path></svg></div></div></div></div><a class="group flex items-center hover:bg-fill-3 dark:hover:bg-dark-fill-3 rounded p-1 relative" id="popover-trigger-:r5:" aria-haspopup="dialog" aria-expanded="false" aria-controls="popover-content-:r5:" href="https://leetcode.com/problems/search-in-rotated-sorted-array/"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 18 18" width="1em" height="1em" fill="currentColor" class="h-[24px] w-[24px] group-hover:text-gray-7 dark:group-hover:text-dark-gray-7 text-gray-6 dark:text-dark-gray-6"><path fill-rule="evenodd" d="M7.19 1.564a.75.75 0 01.729.069c2.137 1.475 3.373 3.558 3.981 5.002l.641-.663a.75.75 0 011.17.115c1.633 2.536 1.659 5.537.391 7.725-1.322 2.282-3.915 2.688-5.119 2.688-1.177 0-3.679-.203-5.12-2.688-.623-1.076-.951-2.29-.842-3.528.109-1.245.656-2.463 1.697-3.54.646-.67 1.129-1.592 1.468-2.492.337-.895.51-1.709.564-2.105a.75.75 0 01.44-.583zm.784 2.023c-.1.368-.226.773-.385 1.193-.375.997-.947 2.13-1.792 3.005-.821.851-1.205 1.754-1.282 2.63-.078.884.153 1.792.647 2.645C6.176 14.81 7.925 15 8.983 15c1.03 0 2.909-.366 3.822-1.94.839-1.449.97-3.446.11-5.315l-.785.812a.75.75 0 01-1.268-.345c-.192-.794-1.04-2.948-2.888-4.625z" clip-rule="evenodd"></path></svg><span class="mx-1 text-sm font-medium text-label-3 dark:text-dark-label-3 group-hover:text-label-2 dark:group-hover:text-dark-label-2">0</span></a><div class="chakra-popover__popper css-1qq679y" style="visibility: hidden; position: fixed; min-width: max-content; inset: 0px auto auto 0px;"><section id="popover-content-:r5:" tabindex="-1" role="tooltip" class="chakra-popover__content css-ymmpz4" style="transform-origin: var(--popper-transform-origin); opacity: 0; visibility: hidden; transform: scale(0.95) translateZ(0px);" aria-describedby="popover-body-:r5:"><div id="popover-body-:r5:" class="chakra-popover__body css-1yk19u4"><div class="dark:bg-dark-fill-2 rounded px-3 py-2"><div><div class="flex items-center"><img src="./longest-consecutive-sequence_files/2023-08.png" alt="DCC Badge" class="mr-4 h-8 w-8 object-cover opacity-60 mix-blend-luminosity"><span>Solve today's Daily Challenge to refresh your streak!</span></div></div></div></div></section></div><div class="relative" data-headlessui-state=""><button class="flex items-center focus:outline-none" id="headlessui-popover-button-:r6:" type="button" aria-expanded="false" data-headlessui-state="" fdprocessedid="zzd6rd"><div id="navbar_user_avatar" class="relative ml-1"><div class="h-6 w-6"><img src="./longest-consecutive-sequence_files/avatar_1681814008.png" alt="avatar" class="h-full w-full rounded-full object-cover"></div></div></button></div></div></div></div></nav><div class="flex w-full flex-grow overflow-y-hidden"><div id="qd-content" class="bg-gray-2 dark:bg-dark-layer-bg flex h-full w-full min-w-[800px] p-2"><div class="h-full flex-col ssg__qd-splitter-primary-w" style="width: calc(48.6979% - 4px);"><div class="relative flex h-full flex-col"><div class="min-h-0 flex-grow" style="height: 100%;"><div class="flex h-full flex-col rounded bg-layer-1 dark:bg-dark-layer-1"><div><div class="bg-layer-2 dark:bg-dark-layer-2 border-fill-3 dark:border-dark-fill-3 flex h-9 w-full items-center justify-between rounded-t border-b px-4"><div class="flex h-full flex-row gap-8"><a href="https://leetcode.com/problems/longest-consecutive-sequence/description"><div class="relative flex h-full select-none items-center whitespace-nowrap text-xs font-medium text-label-2 dark:text-dark-label-2 hover:text-label-1 dark:hover:text-dark-label-1"><span>Description</span></div></a><a href="https://leetcode.com/problems/longest-consecutive-sequence/editorial"><div class="relative flex h-full select-none items-center whitespace-nowrap text-xs font-medium text-label-2 dark:text-dark-label-2 hover:text-label-1 dark:hover:text-dark-label-1"><span><div class="flex items-center gap-1.5"><div class="opacity-100 translate-x-0"><div class="h-3 w-3 text-brand-orange dark:text-dark-brand-orange"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-full w-full"><path fill-rule="evenodd" d="M7 8v2H6a3 3 0 00-3 3v6a3 3 0 003 3h12a3 3 0 003-3v-6a3 3 0 00-3-3h-1V8A5 5 0 007 8zm8 0v2H9V8a3 3 0 116 0zm-3 6a2 2 0 100 4 2 2 0 000-4z" clip-rule="evenodd"></path></svg></div></div><span>Editorial</span></div></span></div></a><a href="https://leetcode.com/problems/longest-consecutive-sequence/solutions"><div class="relative flex h-full select-none items-center whitespace-nowrap text-xs font-medium text-label-2 dark:text-dark-label-2 hover:text-label-1 dark:hover:text-dark-label-1"><span>Solutions (6.8K)</span></div></a><a href="https://leetcode.com/problems/longest-consecutive-sequence/submissions"><div class="relative flex h-full select-none items-center whitespace-nowrap text-xs text-label-1 dark:text-dark-label-1 font-medium hover:text-label-1 dark:hover:text-dark-label-1"><span>Submissions</span><div class="bg-gray-7 dark:bg-dark-gray-7 absolute -bottom-[1px] h-[2px] w-full"></div></div></a></div></div></div><div class="flex h-full w-full overflow-y-auto rounded-b"><div class="flex h-full w-full flex-col overflow-auto" style="min-width: 765px;"><div class="flex flex-col gap-6 px-5 pb-4 pt-6"><div class="flex flex-col gap-4"><div class="flex items-center gap-4"><div class="text-green-s dark:text-dark-green-s flex flex-1 items-center gap-2 text-[16px] font-medium leading-6"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-5 w-5"><path fill-rule="evenodd" d="M20 12.005v-.828a1 1 0 112 0v.829a10 10 0 11-5.93-9.14 1 1 0 01-.814 1.826A8 8 0 1020 12.005zM8.593 10.852a1 1 0 011.414 0L12 12.844l8.293-8.3a1 1 0 011.415 1.413l-9 9.009a1 1 0 01-1.415 0l-2.7-2.7a1 1 0 010-1.414z" clip-rule="evenodd"></path></svg><span data-e2e-locator="submission-result">Accepted</span></div><a href="https://leetcode.com/problems/longest-consecutive-sequence/editorial?source=submission-ac"><button class="whitespace-nowrap focus:outline-none bg-fill-3 dark:bg-dark-fill-3 hover:bg-fill-2 dark:hover:bg-dark-fill-2 flex items-center justify-center gap-1 rounded px-3 py-1 text-xs font-medium leading-[16px] text-brand-orange dark:text-dark-brand-orange" fdprocessedid="mslwf"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="mr-1 h-3.5 w-3.5"><path fill-rule="evenodd" d="M11 20c0-.918-.758-1.667-1.7-1.667H3a1 1 0 01-1-1V4a1 1 0 011-1h5.4A4.61 4.61 0 0112 4.72 4.61 4.61 0 0115.6 3H21a1 1 0 011 1v13.333a1 1 0 01-1 1h-6.3c-.942 0-1.7.75-1.7 1.667 0 1.333-2 1.333-2 0zm2-12.444v9.186a3.712 3.712 0 011.7-.409H20V5h-4.4C14.161 5 13 6.147 13 7.556zm-2 0C11 6.147 9.839 5 8.4 5H4v11.333h5.3c.613 0 1.19.148 1.7.41V7.556z" clip-rule="evenodd"></path></svg>Editorial</button></a><a href="https://leetcode.com/problems/longest-consecutive-sequence/post-solution?submissionId=1016029610" target="_blank" rel="noreferrer"><button class="whitespace-nowrap focus:outline-none text-label-r bg-green-s dark:bg-dark-green-s hover:bg-green-3 dark:hover:bg-dark-green-3 flex items-center justify-center gap-1 rounded px-3 py-1 text-xs font-medium leading-[16px]" fdprocessedid="i5eoo"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-4 w-4"><path fill-rule="evenodd" d="M13 11h7a1 1 0 110 2h-7v7a1 1 0 11-2 0v-7H4a1 1 0 110-2h7V4a1 1 0 112 0v7z" clip-rule="evenodd"></path></svg>Solution</button></a></div><div class="flex w-full flex-wrap gap-4"><div class="min-w-[263px] flex-1"><div class="flex flex-col rounded-lg border p-4 text-xs border-divider-3 dark:border-dark-divider-3"><div class="flex"><div class="flex-1 text-sm leading-[22px] text-label-2 dark:text-dark-label-2">Runtime</div><a class="text-label-3 dark:text-dark-label-3 text-xs leading-[20px] hover:text-label-2 dark:hover:text-dark-label-2">Details</a></div><div class="mt-3"><span class="mr-1 text-lg font-semibold leading-[22px] text-label-1 dark:text-dark-label-1">306</span><span class="text-xs leading-[20px] text-label-2 dark:text-dark-label-2">ms</span></div><div class="mt-2"><span class="mr-1.5 font-medium text-green-s dark:text-dark-green-s">Beats 98.82%</span><span>of users with Python</span></div></div></div><div class="min-w-[263px] flex-1"><div class="flex flex-col rounded-lg border p-4 text-xs border-divider-3 dark:border-dark-divider-3"><div class="flex"><div class="flex-1 text-sm leading-[22px] text-label-2 dark:text-dark-label-2">Memory</div><a class="text-label-3 dark:text-dark-label-3 text-xs leading-[20px] hover:text-label-2 dark:hover:text-dark-label-2">Details</a></div><div class="mt-3"><span class="mr-1 text-lg font-semibold leading-[22px] text-label-1 dark:text-dark-label-1">30.33</span><span class="text-xs leading-[20px] text-label-2 dark:text-dark-label-2">mb</span></div><div class="mt-2"><span class="mr-1.5 font-medium text-green-s dark:text-dark-green-s">Beats 82.43%</span><span>of users with Python</span></div></div></div></div><div class="flex flex-col items-start gap-3"><div class="text-label-3 dark:text-dark-label-3 text-md font-medium">Next question</div><a class="no-underline bg-fill-3 dark:bg-dark-fill-3 hover:bg-fill-2 dark:hover:bg-dark-fill-2 text-label-1 dark:text-dark-label-1 hover:text-label-1 dark:hover:text-dark-label-1 flex items-center gap-2 rounded py-1 px-3 text-md font-medium" href="https://leetcode.com/problems/maximum-subarray/"><div class="h-[5px] w-[5px] rounded-full bg-olive dark:bg-dark-olive"></div>53. Maximum Subarray</a></div><div class="flex flex-col gap-3 mt-2"><div class="text-label-3 dark:text-dark-label-3 text-md font-medium">More challenges</div><div class="flex flex-wrap gap-3"><a target="_blank" rel="noopener noreferrer" class="no-underline bg-fill-3 dark:bg-dark-fill-3 hover:bg-fill-2 dark:hover:bg-dark-fill-2 text-label-1 dark:text-dark-label-1 hover:text-label-1 dark:hover:text-dark-label-1 flex items-center gap-2 rounded py-1 px-3 text-md font-medium" href="https://leetcode.com/problems/binary-tree-longest-consecutive-sequence/description/"><div class="h-[5px] w-[5px] rounded-full bg-yellow dark:bg-dark-yellow"></div>298. Binary Tree Longest Consecutive Sequence</a><a target="_blank" rel="noopener noreferrer" class="no-underline bg-fill-3 dark:bg-dark-fill-3 hover:bg-fill-2 dark:hover:bg-dark-fill-2 text-label-1 dark:text-dark-label-1 hover:text-label-1 dark:hover:text-dark-label-1 flex items-center gap-2 rounded py-1 px-3 text-md font-medium" href="https://leetcode.com/problems/find-three-consecutive-integers-that-sum-to-a-given-number/description/"><div class="h-[5px] w-[5px] rounded-full bg-yellow dark:bg-dark-yellow"></div>2177. Find Three Consecutive Integers That Sum to a Given Number</a><a target="_blank" rel="noopener noreferrer" class="no-underline bg-fill-3 dark:bg-dark-fill-3 hover:bg-fill-2 dark:hover:bg-dark-fill-2 text-label-1 dark:text-dark-label-1 hover:text-label-1 dark:hover:text-dark-label-1 flex items-center gap-2 rounded py-1 px-3 text-md font-medium" href="https://leetcode.com/problems/maximum-consecutive-floors-without-special-floors/description/"><div class="h-[5px] w-[5px] rounded-full bg-yellow dark:bg-dark-yellow"></div>2274. Maximum Consecutive Floors Without Special Floors</a></div></div></div><hr class="border-divider-3 dark:border-dark-divider-3"></div><div class="z-base-1 sticky top-0 ml-[1px] w-[calc(100%_-_2px)] bg-layer-1 dark:bg-dark-layer-1"><div class="mx-3 flex items-center px-4 pb-3 pt-5"><div class="relative shrink-0" data-headlessui-state="" style="width: 140px;"><div><button class="group flex w-full flex-nowrap items-center outline-0 transition-colors duration-300 focus:bg-transparent text-label-3 dark:text-dark-label-3 hover:text-label-1 dark:hover:text-dark-label-1 rounded-lg" id="headlessui-menu-button-:rvn:" type="button" aria-haspopup="true" aria-expanded="false" data-headlessui-state="" fdprocessedid="qr5ot"><div class="truncate">Status</div><div class="w-4.5 h-4.5 pointer-events-none transition duration-300 text-label-3 dark:text-dark-label-3 flex items-center mx-1 group-hover:text-label-1 dark:group-hover:text-dark-label-1"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-4 w-4" aria-hidden="true"><path fill-rule="evenodd" d="M16.293 9.293a1 1 0 111.414 1.414l-5 5a1 1 0 01-1.414 0l-5-5a1 1 0 011.414-1.414L12 13.586l4.293-4.293z" clip-rule="evenodd"></path></svg></div></button></div></div><div class="relative shrink-0" data-headlessui-state="" style="width: 110px;"><div><button class="group flex w-full flex-nowrap items-center outline-0 transition-colors duration-300 focus:bg-transparent text-label-3 dark:text-dark-label-3 hover:text-label-1 dark:hover:text-dark-label-1 rounded-lg" id="headlessui-menu-button-:rvq:" type="button" aria-haspopup="true" aria-expanded="false" data-headlessui-state="" fdprocessedid="cm9el"><div class="truncate">Language</div><div class="w-4.5 h-4.5 pointer-events-none transition duration-300 text-label-3 dark:text-dark-label-3 flex items-center mx-1 group-hover:text-label-1 dark:group-hover:text-dark-label-1"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-4 w-4" aria-hidden="true"><path fill-rule="evenodd" d="M16.293 9.293a1 1 0 111.414 1.414l-5 5a1 1 0 01-1.414 0l-5-5a1 1 0 011.414-1.414L12 13.586l4.293-4.293z" clip-rule="evenodd"></path></svg></div></button></div></div><div class="shrink-0 text-label-3 dark:text-dark-label-3" style="width: 90px;">Runtime</div><div class="shrink-0 text-label-3 dark:text-dark-label-3" style="width: 90px;">Memory</div><div class="shrink-0 text-label-3 dark:text-dark-label-3" style="width: 110px;">Time</div><div class="flex flex-1 items-center justify-between" style="min-width: 110px;"><div class="text-label-3 dark:text-dark-label-3">Notes</div><div class="relative flex flex-1 justify-end" data-headlessui-state=""><div><button class="group flex w-full items-center outline-0 transition-colors duration-300 focus:bg-transparent text-label-3 dark:text-dark-label-3 hover:text-label-1 dark:hover:text-dark-label-1 rounded-lg" id="headlessui-menu-button-:rvt:" type="button" aria-haspopup="true" aria-expanded="false" data-headlessui-state="" fdprocessedid="037c9"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-4 w-4"><path fill-rule="evenodd" d="M7.174 5.619a8.064 8.064 0 011.635-.946l.29-1.158A2 2 0 0111.039 2h1.922a2 2 0 011.94 1.515l.29 1.158c.584.252 1.132.57 1.635.946l1.15-.329a2 2 0 012.282.923l.961 1.665a2 2 0 01-.342 2.437l-.86.832a8.151 8.151 0 010 1.888l.86.83a2 2 0 01.342 2.438l-.96 1.665a2 2 0 01-2.283.923l-1.15-.329a8.063 8.063 0 01-1.635.946l-.29 1.158a2 2 0 01-1.94 1.515H11.04a2 2 0 01-1.94-1.515l-.29-1.158a8.064 8.064 0 01-1.635-.946l-1.15.329a2 2 0 01-2.282-.923l-.961-1.665a2 2 0 01.342-2.437l.86-.831a8.158 8.158 0 010-1.889l-.86-.83a2 2 0 01-.342-2.438l.96-1.665a2 2 0 012.283-.923l1.15.329zm-1.7 1.594l-.961 1.665 1.57 1.518-.114.982a6.157 6.157 0 000 1.425l.114.982-1.57 1.518.96 1.665 2.104-.601.794.593c.38.284.793.523 1.23.711l.908.392.53 2.118h1.922l.53-2.118.909-.392a6.07 6.07 0 001.23-.711l.793-.593 2.103.601.961-1.665-1.57-1.518.114-.982a6.172 6.172 0 000-1.425l-.114-.982 1.57-1.518-.96-1.665-2.104.601-.794-.593a6.067 6.067 0 00-1.23-.71l-.908-.392L12.96 4H11.04l-.53 2.119-.909.391a6.064 6.064 0 00-1.23.711l-.793.593-2.103-.601zM12 16a4 4 0 100-8 4 4 0 000 8zm0-2a2 2 0 110-4 2 2 0 010 4z" clip-rule="evenodd"></path></svg></button></div></div></div></div><hr class="border-divider-2 dark:border-dark-divider-2 mx-4"></div><div class="h-full px-4"><div class="group flex h-[40px] cursor-pointer items-center justify-between rounded-lg px-3 py-[9px] transition-colors hover:bg-fill-3 dark:hover:bg-dark-fill-3 max-w-[765px]"><div class="flex h-full w-full flex-shrink-0 items-center"><div class="flex flex-shrink-0 flex-col justify-between" style="width: 140px;"><div class="flex items-center gap-1.5"><div class="truncate text-green-s dark:text-dark-green-s"><span class="text-green-s dark:text-dark-green-s text-[14px] font-medium">Accepted</span></div></div></div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 110px;">Python</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">306 ms</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">30.3 MB</div><div class="flex flex-shrink-0 items-center" style="width: 110px;"><span class="text-sm text-label-2 dark:text-dark-label-2">2 minutes ago</span></div><div class="text-label-2 dark:text-dark-label-2 relative h-[22px] w-full max-w-[400px] overflow-hidden overflow-ellipsis whitespace-nowrap pr-2 text-sm leading-[22px]" style="max-width: 612.8px;"></div><div class="hidden w-full flex-1 items-center justify-end space-x-2 whitespace-nowrap group-hover:flex text-blue-s dark:text-dark-blue-s" style="max-width: 612.8px;"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor"><path fill-rule="evenodd" d="M13 11h7a1 1 0 110 2h-7v7a1 1 0 11-2 0v-7H4a1 1 0 110-2h7V4a1 1 0 112 0v7z" clip-rule="evenodd"></path></svg><span>Notes</span></div></div></div><div class="group flex h-[40px] cursor-pointer items-center justify-between rounded-lg px-3 py-[9px] transition-colors hover:bg-fill-3 dark:hover:bg-dark-fill-3 max-w-[765px] bg-fill-4 dark:bg-dark-fill-4"><div class="flex h-full w-full flex-shrink-0 items-center"><div class="flex flex-shrink-0 flex-col justify-between" style="width: 140px;"><div class="flex items-center gap-1.5"><div class="truncate text-red-s dark:text-dark-red-s"><span class="text-red-s dark:text-dark-red-s text-[14px] font-medium">Runtime Error</span></div></div></div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 110px;">Python</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">N/A</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">N/A</div><div class="flex flex-shrink-0 items-center" style="width: 110px;"><span class="text-sm text-label-2 dark:text-dark-label-2">2 minutes ago</span></div><div class="text-label-2 dark:text-dark-label-2 relative h-[22px] w-full max-w-[400px] overflow-hidden overflow-ellipsis whitespace-nowrap pr-2 text-sm leading-[22px]" style="max-width: 612.8px;"></div><div class="w-full flex-1 items-center justify-end space-x-2 whitespace-nowrap text-blue-s dark:text-dark-blue-s hidden group-hover:hidden" style="max-width: 612.8px;"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor"><path fill-rule="evenodd" d="M13 11h7a1 1 0 110 2h-7v7a1 1 0 11-2 0v-7H4a1 1 0 110-2h7V4a1 1 0 112 0v7z" clip-rule="evenodd"></path></svg><span>Notes</span></div></div></div><div class="group flex h-[40px] cursor-pointer items-center justify-between rounded-lg px-3 py-[9px] transition-colors hover:bg-fill-3 dark:hover:bg-dark-fill-3 max-w-[765px]"><div class="flex h-full w-full flex-shrink-0 items-center"><div class="flex flex-shrink-0 flex-col justify-between" style="width: 140px;"><div class="flex items-center gap-1.5"><div class="truncate text-red-s dark:text-dark-red-s"><span class="text-red-s dark:text-dark-red-s text-[14px] font-medium">Wrong Answer</span></div></div></div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 110px;">Python</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">N/A</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">N/A</div><div class="flex flex-shrink-0 items-center" style="width: 110px;"><span class="text-sm text-label-2 dark:text-dark-label-2">5 minutes ago</span></div><div class="text-label-2 dark:text-dark-label-2 relative h-[22px] w-full max-w-[400px] overflow-hidden overflow-ellipsis whitespace-nowrap pr-2 text-sm leading-[22px]" style="max-width: 612.8px;"></div><div class="w-full flex-1 items-center justify-end space-x-2 whitespace-nowrap text-blue-s dark:text-dark-blue-s hidden group-hover:hidden" style="max-width: 612.8px;"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor"><path fill-rule="evenodd" d="M13 11h7a1 1 0 110 2h-7v7a1 1 0 11-2 0v-7H4a1 1 0 110-2h7V4a1 1 0 112 0v7z" clip-rule="evenodd"></path></svg><span>Notes</span></div></div></div><div class="group flex h-[40px] cursor-pointer items-center justify-between rounded-lg px-3 py-[9px] transition-colors hover:bg-fill-3 dark:hover:bg-dark-fill-3 max-w-[765px] bg-fill-4 dark:bg-dark-fill-4"><div class="flex h-full w-full flex-shrink-0 items-center"><div class="flex flex-shrink-0 flex-col justify-between" style="width: 140px;"><div class="flex items-center gap-1.5"><div class="truncate text-green-s dark:text-dark-green-s"><span class="text-green-s dark:text-dark-green-s text-[14px] font-medium">Accepted</span></div></div></div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 110px;">Python</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">1623 ms</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">30.5 MB</div><div class="flex flex-shrink-0 items-center" style="width: 110px;"><span class="text-sm text-label-2 dark:text-dark-label-2">11 minutes ago</span></div><div class="text-label-2 dark:text-dark-label-2 relative h-[22px] w-full max-w-[400px] overflow-hidden overflow-ellipsis whitespace-nowrap pr-2 text-sm leading-[22px]" style="max-width: 612.8px;"></div><div class="hidden w-full flex-1 items-center justify-end space-x-2 whitespace-nowrap group-hover:flex text-blue-s dark:text-dark-blue-s" style="max-width: 612.8px;"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor"><path fill-rule="evenodd" d="M13 11h7a1 1 0 110 2h-7v7a1 1 0 11-2 0v-7H4a1 1 0 110-2h7V4a1 1 0 112 0v7z" clip-rule="evenodd"></path></svg><span>Notes</span></div></div></div><div class="group flex h-[40px] cursor-pointer items-center justify-between rounded-lg px-3 py-[9px] transition-colors hover:bg-fill-3 dark:hover:bg-dark-fill-3 max-w-[765px]"><div class="flex h-full w-full flex-shrink-0 items-center"><div class="flex flex-shrink-0 flex-col justify-between" style="width: 140px;"><div class="flex items-center gap-1.5"><div class="truncate text-red-s dark:text-dark-red-s"><span class="text-red-s dark:text-dark-red-s text-[14px] font-medium">Wrong Answer</span></div></div></div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 110px;">Python</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">N/A</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">N/A</div><div class="flex flex-shrink-0 items-center" style="width: 110px;"><span class="text-sm text-label-2 dark:text-dark-label-2">21 minutes ago</span></div><div class="text-label-2 dark:text-dark-label-2 relative h-[22px] w-full max-w-[400px] overflow-hidden overflow-ellipsis whitespace-nowrap pr-2 text-sm leading-[22px]" style="max-width: 612.8px;"></div><div class="w-full flex-1 items-center justify-end space-x-2 whitespace-nowrap text-blue-s dark:text-dark-blue-s hidden group-hover:hidden" style="max-width: 612.8px;"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor"><path fill-rule="evenodd" d="M13 11h7a1 1 0 110 2h-7v7a1 1 0 11-2 0v-7H4a1 1 0 110-2h7V4a1 1 0 112 0v7z" clip-rule="evenodd"></path></svg><span>Notes</span></div></div></div><div class="group flex h-[40px] cursor-pointer items-center justify-between rounded-lg px-3 py-[9px] transition-colors hover:bg-fill-3 dark:hover:bg-dark-fill-3 max-w-[765px] bg-fill-4 dark:bg-dark-fill-4"><div class="flex h-full w-full flex-shrink-0 items-center"><div class="flex flex-shrink-0 flex-col justify-between" style="width: 140px;"><div class="flex items-center gap-1.5"><div class="truncate text-red-s dark:text-dark-red-s"><span class="text-red-s dark:text-dark-red-s text-[14px] font-medium">Wrong Answer</span></div></div></div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 110px;">Python</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">N/A</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">N/A</div><div class="flex flex-shrink-0 items-center" style="width: 110px;"><span class="text-sm text-label-2 dark:text-dark-label-2">22 minutes ago</span></div><div class="text-label-2 dark:text-dark-label-2 relative h-[22px] w-full max-w-[400px] overflow-hidden overflow-ellipsis whitespace-nowrap pr-2 text-sm leading-[22px]" style="max-width: 612.8px;"></div><div class="w-full flex-1 items-center justify-end space-x-2 whitespace-nowrap text-blue-s dark:text-dark-blue-s hidden group-hover:hidden" style="max-width: 612.8px;"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor"><path fill-rule="evenodd" d="M13 11h7a1 1 0 110 2h-7v7a1 1 0 11-2 0v-7H4a1 1 0 110-2h7V4a1 1 0 112 0v7z" clip-rule="evenodd"></path></svg><span>Notes</span></div></div></div><div class="group flex h-[40px] cursor-pointer items-center justify-between rounded-lg px-3 py-[9px] transition-colors hover:bg-fill-3 dark:hover:bg-dark-fill-3 max-w-[765px]"><div class="flex h-full w-full flex-shrink-0 items-center"><div class="flex flex-shrink-0 flex-col justify-between" style="width: 140px;"><div class="flex items-center gap-1.5"><div class="truncate text-red-s dark:text-dark-red-s"><span class="text-red-s dark:text-dark-red-s text-[14px] font-medium">Wrong Answer</span></div></div></div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 110px;">Python</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">N/A</div><div class="flex flex-shrink-0 items-center text-label-2 dark:text-dark-label-2" style="width: 90px;">N/A</div><div class="flex flex-shrink-0 items-center" style="width: 110px;"><span class="text-sm text-label-2 dark:text-dark-label-2">29 minutes ago</span></div><div class="text-label-2 dark:text-dark-label-2 relative h-[22px] w-full max-w-[400px] overflow-hidden overflow-ellipsis whitespace-nowrap pr-2 text-sm leading-[22px]" style="max-width: 612.8px;"></div><div class="w-full flex-1 items-center justify-end space-x-2 whitespace-nowrap text-blue-s dark:text-dark-blue-s hidden group-hover:hidden" style="max-width: 612.8px;"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor"><path fill-rule="evenodd" d="M13 11h7a1 1 0 110 2h-7v7a1 1 0 11-2 0v-7H4a1 1 0 110-2h7V4a1 1 0 112 0v7z" clip-rule="evenodd"></path></svg><span>Notes</span></div></div></div><div class="h-[1px] w-full"></div></div></div></div></div></div></div></div><div class="group flex h-full items-center justify-center transition hover:bg-blue-s dark:hover:bg-dark-blue-s w-2 hover:cursor-col-resize"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 2 14" width="2" height="14" fill="currentColor" class="text-gray-5 dark:text-dark-gray-5 transition -translate-y-6 group-hover:text-white dark:group-hover:text-white"><circle r="1" transform="matrix(4.37114e-08 -1 -1 -4.37114e-08 1 1)"></circle><circle r="1" transform="matrix(4.37114e-08 -1 -1 -4.37114e-08 1 7)"></circle><circle r="1" transform="matrix(4.37114e-08 -1 -1 -4.37114e-08 1 13)"></circle></svg></div><div class="h-full flex-col ssg__qd-splitter-secondary-w" style="width: calc(51.3021% - 4px);"><div class="relative flex h-full flex-col"><div class="min-h-0 flex-grow" style=""><div class="flex h-full flex-col rounded bg-layer-1 dark:bg-dark-layer-1"><div class="flex h-full flex-col"><div class="relative flex h-full flex-col overflow-hidden rounded" id="editor"><div class="text-label-r dark:text-dark-label-r bg-gray-5 z-base-1 dark:bg-dark-gray-5 fixed right-0 top-[215px] flex h-10 w-8 cursor-pointer items-center justify-center rounded"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="none" class="h-5 w-5"><path d="M14.9996 2.3999V5.9999C14.9996 6.66264 15.5369 7.1999 16.1996 7.1999H19.7996M17.9996 4.1999C17.4655 3.72204 16.9113 3.15528 16.5614 2.78718C16.3286 2.54224 16.007 2.3999 15.669 2.3999H6.59931C5.27383 2.3999 4.19932 3.47441 4.19931 4.79989L4.19922 19.1998C4.19921 20.5253 5.27372 21.5998 6.59921 21.5998L17.3993 21.5999C18.7247 21.5999 19.7992 20.5254 19.7993 19.2L19.7996 6.47773C19.7996 6.1709 19.6825 5.87594 19.4696 5.65503C19.0758 5.24655 18.4182 4.57442 17.9996 4.1999Z" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round"></path></svg></div><div class="flex h-9 items-center pr-4 bg-layer-2 dark:bg-dark-layer-2 border-fill-3 dark:border-dark-fill-3 rounded-t border-b"><div class="mr-auto flex flex-nowrap items-center gap-3"><div><div class="relative notranslate"><button class="flex cursor-pointer items-center rounded text-left focus:outline-none whitespace-nowrap text-label-2 dark:text-dark-label-2 bg-transparent dark:bg-dark-transparent hover:bg-transparent dark:hover:bg-transparent hover:text-label-1 dark:hover:text-dark-label-1 active:bg-transparent dark:active:bg-dark-transparent ml-2 px-2 py-1.5 pr-1 font-medium text-xs group" id="headlessui-listbox-button-:r3j:" type="button" aria-haspopup="true" aria-expanded="false" data-headlessui-state="" fdprocessedid="nibwtj"><div class="flex items-center"><svg xmlns="http://www.w3.org/2000/svg" viewBox="4 4 16 16" width="1em" height="1em" fill="currentColor" class="text-gray-6 dark:text-dark-gray-6 group-hover:text-gray-7 dark:group-hover:text-dark-gray-7 h-4 w-4"><path fill-rule="evenodd" d="M13.741 7.314a.95.95 0 00-.627-.272.95.95 0 00-.627.272.833.833 0 00-.246.614c0 .246.082.45.246.614a.85.85 0 00.627.245.85.85 0 00.627-.245.833.833 0 00.246-.614.832.832 0 00-.246-.614zm-.34 2.919c-.01-.273-.178-.41-.505-.41-.4.092-.914.36-1.541.805-.628.446-.969.696-1.023.75-.055.055-.082.091-.082.11l.082.136c.036.09.063.14.082.15.018.01.054-.004.109-.04l.627-.41c.564-.364.732-.16.505.614-.228.772-.505 1.94-.832 3.505-.055.709.127 1.013.545.913.419-.1.746-.231.982-.395l1.364-.955c.055-.036.073-.072.055-.109l-.11-.19c-.036-.037-.072-.055-.109-.055l-.027.027c-.218.145-.45.29-.695.436-.246.146-.405.146-.478 0-.036-.218.064-.754.3-1.609l.682-2.564c.055-.2.077-.436.068-.71z" clip-rule="evenodd"></path></svg><div>Python</div></div><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="pointer-events-none ml-2 w-3 h-3 text-gray-6 dark:text-dark-gray-6 group-hover:text-gray-7 dark:group-hover:text-dark-gray-7" aria-hidden="true"><path fill-rule="evenodd" d="M4.929 7.913l7.078 7.057 7.064-7.057a1 1 0 111.414 1.414l-7.77 7.764a1 1 0 01-1.415 0L3.515 9.328a1 1 0 011.414-1.414z" clip-rule="evenodd"></path></svg></button></div></div><div class="bg-divider-2 dark:bg-dark-divider-2 w-px h-3"></div><div class="flex items-center"><button class="rounded px-3 py-1.5 font-medium items-center whitespace-nowrap focus:outline-none inline-flex group pl-0 text-xs text-label-2 dark:text-dark-label-2 hover:text-label-1 dark:hover:text-dark-label-1" fdprocessedid="534g1"><div class="mr-1 flex h-4 w-4 items-center justify-center"><div class="h-1 w-1 rounded-full transition-all bg-gray-6 dark:bg-dark-gray-6 group-hover:bg-brand-orange dark:group-hover:bg-dark-brand-orange"></div></div>Auto</button></div></div><div class="overflow-hidden ml-2 my-2"><div class="flex flex-wrap !flex-nowrap" style="margin: -4px;"><div class="flex items-center" style="margin: 4px;"><button class="rounded px-3 py-1.5 font-medium items-center whitespace-nowrap focus:outline-none inline-flex group ml-auto !p-1" fdprocessedid="srw16g"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-4 w-4 text-gray-6 dark:text-dark-gray-6 group-hover:text-gray-7 dark:group-hover:text-dark-gray-7"><path fill-rule="evenodd" d="M12 16.945l-5.331 4.798C6.025 22.323 5 21.866 5 21V5a3 3 0 013-3h8a3 3 0 013 3v16c0 .866-1.025 1.323-1.669.743L12 16.945zm5 1.81V5a1 1 0 00-1-1H8a1 1 0 00-1 1v13.755l4.331-3.898a1 1 0 011.338 0L17 18.755z" clip-rule="evenodd"></path></svg></button></div><div class="flex items-center" style="margin: 4px;"><button class="rounded px-3 py-1.5 font-medium items-center whitespace-nowrap focus:outline-none inline-flex group ml-auto !p-1" fdprocessedid="7rr23p"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-4 w-4 text-gray-6 dark:text-dark-gray-6 group-hover:text-gray-7 dark:group-hover:text-dark-gray-7"><path fill-rule="evenodd" d="M3.64 10.98c.147 0 .312-.022.495-.066.183-.044.348-.12.495-.23.147-.11.271-.269.374-.474.103-.205.154-.462.154-.77V5.084c0-.499.077-.928.231-1.287.154-.36.363-.66.627-.902s.565-.422.902-.539c.337-.117.69-.176 1.056-.176H9.58v1.848H8.37c-.425 0-.693.14-.803.418-.11.279-.165.58-.165.902v4.136c0 .425-.08.788-.242 1.09-.161.3-.352.545-.572.736-.22.19-.455.337-.704.44-.25.103-.462.161-.638.176v.044c.176.015.389.062.638.143.25.08.484.216.704.407.22.19.41.447.572.77.161.323.242.74.242 1.254v4.004c0 .323.055.623.165.902.11.279.378.418.803.418h1.21v1.848H7.974c-.367 0-.719-.059-1.056-.176a2.573 2.573 0 01-.902-.539 2.586 2.586 0 01-.627-.902c-.154-.36-.231-.788-.231-1.287V14.61c0-.352-.051-.638-.154-.858a1.494 1.494 0 00-.374-.517 1.18 1.18 0 00-.495-.253 2.143 2.143 0 00-.495-.066V10.98zm16.72 2.04c-.161 0-.33.022-.506.066a1.184 1.184 0 00-.484.253 1.494 1.494 0 00-.374.517c-.103.22-.154.506-.154.858v4.202c0 .499-.077.928-.231 1.287-.154.36-.363.66-.627.902a2.573 2.573 0 01-.902.54c-.337.116-.69.175-1.056.175H14.42v-1.848h1.21c.425 0 .693-.14.803-.418.11-.279.165-.58.165-.902v-4.004c0-.513.08-.931.242-1.254.161-.323.352-.58.572-.77.22-.19.455-.326.704-.407.25-.08.462-.128.638-.143v-.044a2.225 2.225 0 01-.638-.176 2.567 2.567 0 01-.704-.44c-.22-.19-.41-.436-.572-.737-.161-.3-.242-.664-.242-1.089V5.452c0-.323-.055-.623-.165-.902-.11-.279-.378-.418-.803-.418h-1.21V2.284h1.606c.367 0 .719.059 1.056.176.337.117.638.297.902.539.264.242.473.543.627.902.154.36.231.788.231 1.287v4.356c0 .308.051.565.154.77.103.205.227.363.374.473.147.11.308.187.484.231.176.044.345.066.506.066v1.936z" clip-rule="evenodd"></path></svg></button></div><div class="flex items-center" style="margin: 4px;"><button class="rounded px-3 py-1.5 font-medium items-center whitespace-nowrap focus:outline-none inline-flex group ml-auto !p-1" fdprocessedid="82gwji"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-4 w-4 text-gray-6 dark:text-dark-gray-6 group-hover:text-gray-7 dark:group-hover:text-dark-gray-7"><path fill-rule="evenodd" d="M5.725 9.255h2.843a1 1 0 110 2H3.2a1 1 0 01-1-1V4.887a1 1 0 012 0v3.056l2.445-2.297a9.053 9.053 0 11-2.142 9.415 1 1 0 011.886-.665 7.053 7.053 0 1010.064-8.515 7.063 7.063 0 00-8.417 1.202L5.725 9.255z" clip-rule="evenodd"></path></svg></button></div><div class="flex items-center" style="margin: 4px;"><button class="rounded font-medium items-center whitespace-nowrap focus:outline-none inline-flex group ml-auto p-1" fdprocessedid="jd0wyp"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-4 w-4 text-gray-6 dark:text-dark-gray-6 group-hover:text-gray-7 dark:group-hover:text-dark-gray-7"><path fill-rule="evenodd" d="M15.667 10.333v3.334h1.666a3.667 3.667 0 11-3.666 3.666v-1.666h-3.334v1.666a3.667 3.667 0 11-3.666-3.666h1.666v-3.334H6.667a3.667 3.667 0 113.666-3.666v1.666h3.334V6.667a3.667 3.667 0 113.666 3.666h-1.666zm-5.334 0v3.334h3.334v-3.334h-3.334zm-2-2V6.667a1.667 1.667 0 10-1.666 1.666h1.666zm-1.666 7.334a1.667 1.667 0 101.666 1.666v-1.666H6.667zm9 1.666a1.667 1.667 0 101.666-1.666h-1.666v1.666zm1.666-9a1.667 1.667 0 10-1.666-1.666v1.666h1.666z" clip-rule="evenodd"></path></svg></button></div><div class="flex items-center" style="margin: 4px;"><button class="rounded px-3 py-1.5 font-medium items-center whitespace-nowrap focus:outline-none inline-flex group ml-auto !p-1" fdprocessedid="mg9zlx"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-4 w-4 text-gray-6 dark:text-dark-gray-6 group-hover:text-gray-7 dark:group-hover:text-dark-gray-7"><path fill-rule="evenodd" d="M7.174 5.619a8.064 8.064 0 011.635-.946l.29-1.158A2 2 0 0111.039 2h1.922a2 2 0 011.94 1.515l.29 1.158c.584.252 1.132.57 1.635.946l1.15-.329a2 2 0 012.282.923l.961 1.665a2 2 0 01-.342 2.437l-.86.832a8.151 8.151 0 010 1.888l.86.83a2 2 0 01.342 2.438l-.96 1.665a2 2 0 01-2.283.923l-1.15-.329a8.063 8.063 0 01-1.635.946l-.29 1.158a2 2 0 01-1.94 1.515H11.04a2 2 0 01-1.94-1.515l-.29-1.158a8.064 8.064 0 01-1.635-.946l-1.15.329a2 2 0 01-2.282-.923l-.961-1.665a2 2 0 01.342-2.437l.86-.831a8.158 8.158 0 010-1.889l-.86-.83a2 2 0 01-.342-2.438l.96-1.665a2 2 0 012.283-.923l1.15.329zm-1.7 1.594l-.961 1.665 1.57 1.518-.114.982a6.157 6.157 0 000 1.425l.114.982-1.57 1.518.96 1.665 2.104-.601.794.593c.38.284.793.523 1.23.711l.908.392.53 2.118h1.922l.53-2.118.909-.392a6.07 6.07 0 001.23-.711l.793-.593 2.103.601.961-1.665-1.57-1.518.114-.982a6.172 6.172 0 000-1.425l-.114-.982 1.57-1.518-.96-1.665-2.104.601-.794-.593a6.067 6.067 0 00-1.23-.71l-.908-.392L12.96 4H11.04l-.53 2.119-.909.391a6.064 6.064 0 00-1.23.711l-.793.593-2.103-.601zM12 16a4 4 0 100-8 4 4 0 000 8zm0-2a2 2 0 110-4 2 2 0 010 4z" clip-rule="evenodd"></path></svg></button></div><div class="flex items-center" style="margin: 4px;"><button class="rounded px-3 py-1.5 font-medium items-center whitespace-nowrap focus:outline-none inline-flex group ml-auto !p-1" fdprocessedid="bp7jwf"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-4 w-4 text-gray-6 dark:text-dark-gray-6 group-hover:text-gray-7 dark:group-hover:text-dark-gray-7"><path fill-rule="evenodd" d="M6.414 19H10a1 1 0 110 2H4a1 1 0 01-1-1v-6a1 1 0 112 0v3.586l4.293-4.293a1 1 0 011.414 1.414L6.414 19zM17.586 5H14a1 1 0 110-2h6a1 1 0 011 1v6a1 1 0 11-2 0V6.414l-4.293 4.293a1 1 0 01-1.414-1.414L17.586 5z" clip-rule="evenodd"></path></svg></button></div></div></div></div><div class="flex flex-1 flex-col overflow-hidden pb-2" data-track-load="code_editor" translate="no"><div class="flex-1 overflow-hidden"><div class="h-full w-full [&amp;_.scroll-decoration]:!shadow-none [&amp;_.monaco-editor]:!bg-transparent [&amp;_.monaco-editor-background]:!bg-transparent [&amp;_.margin]:!bg-transparent [&amp;_.inputarea.ime-input]:!bg-transparent" data-keybinding-context="1" data-mode-id="python"><div class="monaco-editor no-user-select  showUnused showDeprecated vs-dark" role="code" data-uri="inmemory://model/1" style="width: 775px; height: 526px;"><div data-mprt="3" class="overflow-guard" style="width: 775px; height: 526px;"><div class="margin" role="presentation" aria-hidden="true" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; height: 526px; width: 56px;"><div class="glyph-margin" style="left: 0px; width: 18px; height: 526px;"></div><div class="margin-view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="margin-view-overlays focused" role="presentation" aria-hidden="true" style="position: absolute; width: 56px; font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 13px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 18px; letter-spacing: 0px; height: 526px;"><div style="position:absolute;top:80px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">5</div></div><div style="position:absolute;top:98px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">6</div></div><div style="position:absolute;top:116px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">7</div></div><div style="position:absolute;top:134px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">8</div></div><div style="position:absolute;top:152px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">9</div></div><div style="position:absolute;top:170px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">10</div></div><div style="position:absolute;top:188px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">11</div></div><div style="position:absolute;top:206px;width:100%;height:18px;"><div class="current-line current-line-margin-both" style="width:56px; height:18px;"></div><div class="active-line-number line-numbers" style="left:18px;width:21px;">12</div></div><div style="position:absolute;top:224px;width:100%;height:18px;"><div class="cldr codicon codicon-folding-expanded" style="left:39px;width:17px;"></div><div class="line-numbers" style="left:18px;width:21px;">13</div></div><div style="position:absolute;top:242px;width:100%;height:18px;"><div class="cldr codicon codicon-folding-expanded" style="left:39px;width:17px;"></div><div class="line-numbers" style="left:18px;width:21px;">14</div></div><div style="position:absolute;top:260px;width:100%;height:18px;"><div class="cldr codicon codicon-folding-expanded" style="left:39px;width:17px;"></div><div class="line-numbers" style="left:18px;width:21px;">15</div></div><div style="position:absolute;top:278px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">16</div></div><div style="position:absolute;top:296px;width:100%;height:18px;"><div class="cldr codicon codicon-folding-expanded" style="left:39px;width:17px;"></div><div class="line-numbers" style="left:18px;width:21px;">17</div></div><div style="position:absolute;top:314px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">18</div></div><div style="position:absolute;top:332px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">19</div></div><div style="position:absolute;top:350px;width:100%;height:18px;"><div class="cldr codicon codicon-folding-expanded" style="left:39px;width:17px;"></div><div class="line-numbers" style="left:18px;width:21px;">20</div></div><div style="position:absolute;top:44px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">3</div></div><div style="position:absolute;top:62px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">4</div></div><div style="position:absolute;top:8px;width:100%;height:18px;"><div class="cldr codicon codicon-folding-expanded" style="left:39px;width:17px;"></div><div class="line-numbers" style="left:18px;width:21px;">1</div></div><div style="position:absolute;top:26px;width:100%;height:18px;"><div class="cldr codicon codicon-folding-expanded" style="left:39px;width:17px;"></div><div class="line-numbers" style="left:18px;width:21px;">2</div></div><div style="position:absolute;top:368px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">21</div></div><div style="position:absolute;top:386px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">22</div></div><div style="position:absolute;top:404px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">23</div></div><div style="position:absolute;top:422px;width:100%;height:18px;"><div class="line-numbers" style="left:18px;width:21px;">24</div></div></div></div><div class="monaco-scrollable-element editor-scrollable vs-dark" role="presentation" data-mprt="5" style="position: absolute; overflow: hidden; left: 56px; height: 526px; width: 719px;"><div class="lines-content monaco-editor-background" style="position: absolute; overflow: hidden; width: 1e+06px; height: 1e+06px; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; left: 0px;"><div class="view-overlays focused" role="presentation" aria-hidden="true" style="position: absolute; height: 0px; width: 719px;"><div style="position:absolute;top:80px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:98px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:116px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:134px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:152px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:170px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:188px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:206px;width:100%;height:18px;"><div class="current-line" style="width:719px; height:18px;"></div><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div><div class="cdr selectionHighlight" style="left:107px;width:29px;height:18px;"></div></div><div style="position:absolute;top:224px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:242px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:57.1875px;height:18px;width:7.1484375px"></div><div class="cdr selectionHighlight" style="left:193px;width:29px;height:18px;"></div></div><div style="position:absolute;top:260px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:57.1875px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:85.78125px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:278px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:57.1875px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:85.78125px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:114.375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:296px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:57.1875px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:85.78125px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:314px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:57.1875px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:85.78125px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:114.375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:332px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:57.1875px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:85.78125px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:114.375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:350px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:57.1875px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:44px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:62px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:8px;width:100%;height:18px;"></div><div style="position:absolute;top:26px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:368px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:57.1875px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:85.78125px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:386px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent vertical" style="left:57.1875px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:404px;width:100%;height:18px;"><div class="core-guide core-guide-indent vertical" style="left:0px;height:18px;width:7.1484375px"></div><div class="core-guide core-guide-indent-active vertical" style="left:28.59375px;height:18px;width:7.1484375px"></div></div><div style="position:absolute;top:422px;width:100%;height:18px;"></div></div><div role="presentation" aria-hidden="true" class="view-rulers"></div><div class="view-zones" role="presentation" aria-hidden="true" style="position: absolute;"></div><div class="view-lines monaco-mouse-cursor-text" role="presentation" aria-hidden="true" data-mprt="7" style="position: absolute; font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 13px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 18px; letter-spacing: 0px; width: 719px; height: 526px;"><div style="top:80px;height:18px;" class="view-line"><span><span class="mtk8">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:rtype:&nbsp;int</span></span></div><div style="top:98px;height:18px;" class="view-line"><span><span class="mtk8">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"""</span></span></div><div style="top:116px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span></span></div><div style="top:134px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;nums&nbsp;=&nbsp;</span><span class="mtk10">sorted</span><span class="mtk1">(</span><span class="mtk9">set</span><span class="mtk1">(nums))</span></span></div><div style="top:152px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span></span></div><div style="top:170px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cur_max&nbsp;=&nbsp;</span><span class="mtk7">0</span></span></div><div style="top:188px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cur_count&nbsp;=&nbsp;</span><span class="mtk7">0</span></span></div><div style="top:206px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;prev&nbsp;=&nbsp;</span><span class="mtk4">None</span></span></div><div style="top:224px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk11">for</span><span class="mtk1">&nbsp;i&nbsp;</span><span class="mtk4">in</span><span class="mtk1">&nbsp;nums:</span></span></div><div style="top:242px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk11">if</span><span class="mtk1">&nbsp;prev&nbsp;</span><span class="mtk4">is</span><span class="mtk1">&nbsp;</span><span class="mtk4">not</span><span class="mtk1">&nbsp;</span><span class="mtk4">None</span><span class="mtk1">:</span></span></div><div style="top:260px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk11">if</span><span class="mtk1">&nbsp;prev+</span><span class="mtk7">1</span><span class="mtk1">&nbsp;==&nbsp;i:</span></span></div><div style="top:278px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cur_count&nbsp;+=&nbsp;</span><span class="mtk7">1</span></span></div><div style="top:296px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk11">else</span><span class="mtk1">:</span></span></div><div style="top:314px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cur_max&nbsp;=&nbsp;</span><span class="mtk10">max</span><span class="mtk1">(cur_max,&nbsp;cur_count)</span></span></div><div style="top:332px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cur_count&nbsp;=&nbsp;</span><span class="mtk7">1</span></span></div><div style="top:350px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk11">else</span><span class="mtk1">:</span></span></div><div style="top:44px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk8">"""</span></span></div><div style="top:62px;height:18px;" class="view-line"><span><span class="mtk8">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;:type&nbsp;nums:&nbsp;List[int]</span></span></div><div style="top:8px;height:18px;" class="view-line"><span><span class="mtk4">class</span><span class="mtk1">&nbsp;</span><span class="mtk10">Solution</span><span class="mtk1">(</span><span class="mtk10">object</span><span class="mtk1">):</span></span></div><div style="top:26px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk4">def</span><span class="mtk1">&nbsp;</span><span class="mtk10">longestConsecutive</span><span class="mtk1">(</span><span class="mtk13">self</span><span class="mtk1">,&nbsp;</span><span class="mtk13">nums</span><span class="mtk1">):</span></span></div><div style="top:368px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;cur_count&nbsp;+=&nbsp;</span><span class="mtk7">1</span></span></div><div style="top:386px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;prev&nbsp;=&nbsp;i</span></span></div><div style="top:404px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span><span class="mtk11">return</span><span class="mtk1">&nbsp;</span><span class="mtk10">max</span><span class="mtk1">(cur_max,&nbsp;cur_count)</span></span></div><div style="top:422px;height:18px;" class="view-line"><span><span class="mtk1">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</span></span></div></div><div data-mprt="1" class="contentWidgets" style="position: absolute; top: 0px;"></div><div role="presentation" aria-hidden="true" class="cursors-layer cursor-line-style cursor-solid"><div class="cursor monaco-mouse-cursor-text " style="height: 18px; top: 206px; left: 136px; font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 13px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 18px; letter-spacing: 0px; display: block; visibility: hidden; width: 1.6px;"></div></div></div><div role="presentation" aria-hidden="true" class="invisible scrollbar horizontal" style="position: absolute; width: 705px; height: 12px; left: 0px; bottom: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; height: 12px; transform: translate3d(0px, 0px, 0px); contain: strict; width: 705px;"></div></div><canvas class="decorationsOverviewRuler" aria-hidden="true" width="17" height="657" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; top: 0px; right: 0px; width: 14px; height: 526px; display: block;"></canvas><div role="presentation" aria-hidden="true" class="invisible scrollbar vertical fade" style="position: absolute; width: 14px; height: 526px; right: 0px; top: 0px;"><div class="slider" style="position: absolute; top: 0px; left: 0px; width: 14px; transform: translate3d(0px, 0px, 0px); contain: strict; height: 526px;"></div></div></div><div role="presentation" aria-hidden="true" style="width: 775px;" class=""></div><textarea data-mprt="6" class="inputarea monaco-mouse-cursor-text" wrap="off" autocorrect="off" autocapitalize="off" autocomplete="off" spellcheck="false" aria-label="Editor content;Press Alt+F1 for Accessibility Options." tabindex="0" role="textbox" aria-roledescription="editor" aria-multiline="true" aria-haspopup="false" aria-autocomplete="both" style="font-family: Consolas, &quot;Courier New&quot;, monospace; font-weight: normal; font-size: 13px; font-feature-settings: &quot;liga&quot; 0, &quot;calt&quot; 0; line-height: 18px; letter-spacing: 0px; top: 206px; left: 192px; width: 1px; height: 1px;"></textarea><div style="position: absolute; top: 0px; left: 0px; width: 0px; height: 0px;" class="monaco-editor-background textAreaCover margin"></div><div data-mprt="4" class="overlayWidgets" style="width: 775px;"><div class="accessibilityHelpWidget" role="dialog" aria-hidden="true" widgetid="editor.contrib.accessibilityHelpWidget" style="display: none; position: absolute;"><div role="document"></div></div><div widgetid="editor.contrib.quickInputWidget" style="position: absolute; top: 0px; right: 50%;"></div></div><div data-mprt="8" class="minimap slider-mouseover" role="presentation" aria-hidden="true" style="position: absolute; left: 0px; width: 0px; height: 526px;"><div class="minimap-shadow-hidden" style="height: 526px;"></div><canvas width="0" height="657" style="position: absolute; left: 0px; width: 0px; height: 526px;"></canvas><canvas class="minimap-decorations-layer" width="0" height="657" style="position: absolute; left: 0px; width: 0px; height: 526px;"></canvas><div class="minimap-slider" style="position: absolute; transform: translate3d(0px, 0px, 0px); contain: strict; width: 0px;"><div class="minimap-slider-horizontal" style="position: absolute; width: 0px; height: 0px;"></div></div></div></div><div data-mprt="2" class="overflowingContentWidgets"></div></div></div></div><div class="text-label-2 dark:text-dark-label-2 bg-gray-2 dark:bg-dark-gray-2"></div></div><div class="absolute right-[25px] bottom-[20px] z-overlay"><a aria-label="feedback" href="https://leetcode.com/discuss/general-discussion/2238519/Share-your-feedback-to-the-new-question-detail-page" target="_blank" rel="noreferrer"><div class="shadow-level1 dark:shadow-dark-level1 bg-layer-1 dark:bg-dark-layer-1 cursor-pointer group h-12 w-12 rounded-lg flex mb-3 last:mb-0"><div class="hover:bg-fill-4 dark:hover:bg-dark-fill-4 h-full w-full rounded-lg flex"><div class="w-6 m-auto"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-full w-full text-blue-s dark:text-dark-blue-s"><path fill-rule="evenodd" d="M20.494 16.249a9.5 9.5 0 01-8.491 5.25 9.38 9.38 0 01-3.939-.855l-4.376.838a1 1 0 01-1.17-1.17l.838-4.376a9.377 9.377 0 01-.856-3.937 9.498 9.498 0 015.25-8.492A9.378 9.378 0 0112 2.5l.555.001c4.825.266 8.678 4.119 8.945 8.999v.497a9.381 9.381 0 01-1.006 4.252zM4.76 19.24l3.252-.622a1 1 0 01.64.09A7.382 7.382 0 0012 19.5a7.5 7.5 0 006.706-4.147A7.386 7.386 0 0019.5 12l.002-.445c-.21-3.807-3.25-6.847-7.002-7.055h-.502a7.385 7.385 0 00-3.35.794A7.5 7.5 0 004.5 12.002a7.38 7.38 0 00.793 3.347 1 1 0 01.09.639L4.76 19.24zM7.9 9.35c0 .718.58 1.3 1.294 1.3h.012c.715 0 1.294-.582 1.294-1.3 0-.718-.58-1.3-1.294-1.3h-.012c-.715 0-1.294.582-1.294 1.3zm6.893 1.3a1.297 1.297 0 01-1.293-1.3c0-.718.58-1.3 1.293-1.3h.014c.714 0 1.293.582 1.293 1.3 0 .718-.58 1.3-1.294 1.3h-.012zm.915 3.708a5.244 5.244 0 01-7.416 0 1 1 0 111.414-1.415 3.244 3.244 0 004.588 0 1 1 0 011.414 1.415z" clip-rule="evenodd"></path></svg></div></div></div></a><button class="bg-gray-1 dark:bg-dark-gray-1 hover:bg-gray-3 dark:hover:bg-dark-gray-3 border-fill-3 dark:border-dark-fill-3 absolute -top-1 -right-1 flex h-4.5 w-4.5 items-center justify-center group rounded-full border" fdprocessedid="9jtgg"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="text-gray-5 dark:text-dark-gray-5 group-hover:text-gray-6 dark:group-hover:text-dark-gray-6 h-3 w-3"><path fill-rule="evenodd" d="M13.414 12L19 17.586A1 1 0 0117.586 19L12 13.414 6.414 19A1 1 0 015 17.586L10.586 12 5 6.414A1 1 0 116.414 5L12 10.586 17.586 5A1 1 0 1119 6.414L13.414 12z" clip-rule="evenodd"></path></svg></button></div></div></div></div></div><div class="group flex w-full flex-col items-center justify-center transition hover:cursor-row-resize hover:bg-blue-s dark:hover:bg-dark-blue-s h-0 mt-2 ssg__qd-console-position--right"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 14 2" width="14" height="2" fill="currentColor" class="transition text-gray-5 dark:text-dark-gray-5 group-hover:text-white dark:group-hover:text-white"><circle r="1" transform="matrix(-1 0 0 1 1 1)"></circle><circle r="1" transform="matrix(-1 0 0 1 7 1)"></circle><circle r="1" transform="matrix(-1 0 0 1 13 1)"></circle></svg></div><div class="ssg__qd-console-position--right" style=""><div class="flex h-full flex-col"><div class="flex h-full w-full flex-col rounded bg-layer-1 dark:bg-dark-layer-1"><div class="shrink-0"><div class="relative flex h-11 w-full bg-layer-2 dark:bg-dark-layer-2 rounded"><div class="min-h-[322px] rounded-lg z-overlay-1 bg-layer-2 dark:bg-dark-layer-2 shadow-level3 dark:shadow-dark-level3 bottom-12 right-1 w-[376px] absolute hidden"><div><div class="text-label-1 dark:text-dark-label-1 flex items-center px-4 pt-4 text-base font-medium"><span class="flex flex-1 items-center"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 18 18" width="1em" height="1em" fill="currentColor"><path stroke-linejoin="round" stroke-width="1.5" d="M11.353 1l1.525 4.122L17 6.647l-4.122 1.525-1.525 4.122-1.525-4.122-4.122-1.525 4.122-1.525L11.353 1zM4.294 10.412l1.332 1.961 1.962 1.333-1.962 1.332L4.294 17l-1.332-1.962L1 13.706l1.962-1.332 1.332-1.962z"></path></svg><span class="ml-2"><div class="flex items-center space-x-2"><span>LeetWiz</span><span class="bg-fill-4 dark:bg-dark-fill-4 text-label-4 dark:text-dark-label-4 css-1upj3ax"><span class="css-1ny2kle">Beta</span></span></div></span></span><span><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="cursor-pointer text-gray-6 dark:text-dark-gray-6 hover:text-label-1 dark:hover:text-dark-label-1"><path fill-rule="evenodd" d="M13.414 12L19 17.586A1 1 0 0117.586 19L12 13.414 6.414 19A1 1 0 015 17.586L10.586 12 5 6.414A1 1 0 116.414 5L12 10.586 17.586 5A1 1 0 1119 6.414L13.414 12z" clip-rule="evenodd"></path></svg></span></div><div class="mt-3 max-h-[500px] overflow-y-auto overflow-x-hidden px-4"><div class="mb-4 flex flex-col space-y-4"><div class="rounded py-[7px] px-3 bg-fill-4 dark:bg-dark-fill-4 text-label-1 dark:text-dark-label-1 ml-[90px]"><div class="FN9Jv"><p>Why am I getting this error?</p></div></div><div class="hidden"><div class="flex w-full max-w-full items-center space-x-2"><div class="self-start"><div class="rounded-lg px-1 pt-0.5 pb-1.5 bg-blue-1 dark:bg-dark-blue-1"><div class="h-7 w-7 text-blue-s dark:text-dark-blue-s"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 28 28" width="100%" height="100%" fill="currentColor"><path d="M21.5833 10.5H6.41667C5.77233 10.5 5.25 11.0223 5.25 11.6667V23.3333C5.25 23.9777 5.77233 24.5 6.41667 24.5H21.5833C22.2277 24.5 22.75 23.9777 22.75 23.3333V11.6667C22.75 11.0223 22.2277 10.5 21.5833 10.5Z" fill="currentColor"></path><path d="M9.91667 16.3333C10.561 16.3333 11.0833 15.811 11.0833 15.1667C11.0833 14.5223 10.561 14 9.91667 14C9.27233 14 8.75 14.5223 8.75 15.1667C8.75 15.811 9.27233 16.3333 9.91667 16.3333Z" fill="white" fill-opacity="0.8"></path><path d="M18.0846 16.3333C18.729 16.3333 19.2513 15.811 19.2513 15.1667C19.2513 14.5223 18.729 14 18.0846 14C17.4403 14 16.918 14.5223 16.918 15.1667C16.918 15.811 17.4403 16.3333 18.0846 16.3333Z" fill="white" fill-opacity="0.8"></path><path d="M11.6667 18.6667C11.0223 18.6667 10.5 19.189 10.5 19.8333C10.5 20.4777 11.0223 21 11.6667 21V18.6667ZM16.3333 21C16.9777 21 17.5 20.4777 17.5 19.8333C17.5 19.189 16.9777 18.6667 16.3333 18.6667V21ZM11.6667 21H16.3333V18.6667H11.6667V21Z" fill="white" fill-opacity="0.8"></path><path d="M14 5.83334V10.5" stroke="currentColor" stroke-linecap="round" stroke-linejoin="round"></path><path d="M2.33203 15.1667V19.8333" stroke="currentColor" stroke-linecap="round" stroke-linejoin="round"></path><path d="M25.668 15.1667V19.8333" stroke="currentColor" stroke-linecap="round" stroke-linejoin="round"></path><path d="M13.9987 5.83333C14.643 5.83333 15.1654 5.311 15.1654 4.66667C15.1654 4.02233 14.643 3.5 13.9987 3.5C13.3544 3.5 12.832 4.02233 12.832 4.66667C12.832 5.311 13.3544 5.83333 13.9987 5.83333Z" fill="currentColor"></path></svg></div></div></div><div class="animate-pulse"><div class="text-label-4 dark:text-dark-label-4">Analyzing code...</div></div></div></div></div></div></div></div><div class="mx-4 my-[10px] flex w-full"><div class="flex flex-1 flex-nowrap items-center gap-4"><button data-e2e-locator="console-console-button" class="rounded px-3 py-1.5 font-medium items-center whitespace-nowrap focus:outline-none inline-flex text-label-3 dark:text-dark-label-3 hover:text-label-2 dark:hover:text-dark-label-2 bg-transparent dark:bg-dark-transparent active:bg-transparent dark:active:bg-dark-transparent hover:bg-transparent dark:hover:bg-transparent group pl-0 pr-2 text-[13px] leading-[18px]" fdprocessedid="eoctg8">Console<div class="ml-1 transform transition"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="text-gray-6 dark:text-dark-gray-6 group-hover:text-gray-7 dark:group-hover:text-dark-gray-7 h-4 w-4 text-[20px]"><path fill-rule="evenodd" d="M16.293 14.707a1 1 0 001.414-1.414l-5-5a1 1 0 00-1.414 0l-5 5a1 1 0 101.414 1.414L12 10.414l4.293 4.293z" clip-rule="evenodd"></path></svg></div></button></div><div class="flex flex-row items-center justify-center"><img src="./longest-consecutive-sequence_files/dark-judging-723b3c3e728a574bc2a2d4b89a10d4d7.gif" alt="Judging..." class="mr-2 h-8 w-8 hidden"><img src="./longest-consecutive-sequence_files/dark-pending-f313d6fe32951fb6b4d48ad3ee4f3821.gif" alt="Pending..." class="mr-2 h-8 w-8 hidden"></div><div class="relative ml-auto flex items-center gap-3"><button class="rounded font-medium items-center whitespace-nowrap focus:outline-none inline-flex p-1.5 opacity-50 hover:bg-fill-3 dark:hover:bg-dark-fill-3 cursor-pointer" fdprocessedid="q7yblp"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="text-gray-6 dark:text-dark-gray-6 w-4 h-4"><path fill-rule="evenodd" d="M12 4a2 2 0 00-2 2h4a2 2 0 00-2-2zm3.924 2.384A.997.997 0 0016 6a4 4 0 00-8 0c0 .136.027.265.076.384a5.015 5.015 0 00-1.97 1.48A3.002 3.002 0 014 5a1 1 0 00-2 0 5.001 5.001 0 003.182 4.659A5.005 5.005 0 005 11v1H3a1 1 0 100 2h2v1c0 .425.038.84.11 1.244A5 5 0 002 20.874a1 1 0 102 0c0-1.208.715-2.251 1.746-2.726A7 7 0 0012 22a7 7 0 006.254-3.852A3.002 3.002 0 0120 20.874a1 1 0 102 0 5 5 0 00-3.11-4.63c.072-.404.11-.82.11-1.244v-1h2a1 1 0 100-2h-2v-1c0-.465-.063-.914-.182-1.341A5.001 5.001 0 0022 5a1 1 0 10-2 0 3.002 3.002 0 01-2.105 2.865 5.015 5.015 0 00-1.971-1.481zM17 11a3 3 0 00-3-3h-1v11.9a5.002 5.002 0 004-4.9v-4zm-6 8.9V8h-1a3 3 0 00-3 3v4a5.002 5.002 0 004 4.9z" clip-rule="evenodd"></path></svg></button><button data-e2e-locator="console-run-button" class="py-1.5 font-medium items-center whitespace-nowrap focus:outline-none inline-flex bg-fill-3 dark:bg-dark-fill-3 hover:bg-fill-2 dark:hover:bg-dark-fill-2 text-label-2 dark:text-dark-label-2 h-[28px] select-none rounded px-5 text-[13px] leading-[18px]" fdprocessedid="d9yo5y">Run</button><button data-e2e-locator="console-submit-button" class="py-1.5 font-medium items-center whitespace-nowrap focus:outline-none inline-flex text-label-r bg-green-s dark:bg-dark-green-s hover:bg-green-3 dark:hover:bg-dark-green-3 h-[28px] select-none rounded px-5 text-[13px] leading-[18px]" fdprocessedid="rcosyi">Submit</button></div></div></div></div></div></div></div></div></div></div></div></div></div></div><span></span></div><script id="__NEXT_DATA__" type="application/json">{"props":{"pageProps":{"isRobotVisit":false,"dehydratedState":{"mutations":[],"queries":[]},"_nextI18Next":{"initialI18nStore":{"en":{"common":{"404":{"title":"Page Not Found - LeetCode","pageNotFound":"Page Not Found","message":"Sorry, but we can't find the page you are looking for..."},"meta":{"title":"","description":"","keywords":""},"ok":"OK","cancel":"Cancel","confirm":"Confirm","update":"Update","submit":"Submit","save":"Save","netFailed":"Debugger failed to connect","header":{"logo":{"url":"","description":""},"title":{"problemset-all":""},"action":{"login":{"text":"","url":""}}},"conjunctions":{"and":"and","or":"or"},"pages":{"leetcode":"LeetCode","explore":"Explore","problems":"Problems","interview":{"interview":"Interview","onlineInterview":"Online Interview","assessment":"Assessment"},"contest":"Contest","discuss":"Discuss","store":{"store":"Store","redeem":"Redeem","premium":"Premium","shop":"Micro-shop"},"admin":{"admin":"Admin","library":"Library","review":"Review","operations":"User Management","scores":"Points","contribute":"Contribution","backend":"Administration","internalContest":"Internal Contest Dashboard","contestDashboard":"Contest Dashboard","contestAdmin":"Contest Cheating Dashboard","emailBatch":"Email Batch","dangerZone":"Danger Zone","dbTestcase":"DB Testcase Converter","tagManagement":"Tag Management","questionFeedback":"Question Feedback"},"mobileApp":"Mobile App","playground":"Playground","signIn":"Sign in","register":"Register","signOut":"Sign Out"},"userMenu":{"renew":"Renew","getPremium":"Access all features with our Premium subscription!","orders":"Orders","translateQuestions":"Display problems in Chinese","unmockUser":"Unmock User","revertToOldVersion":"Revert to old version","categories":{"myList":"My Lists","notebook":"Notebook","submissions":"Submissions","session":"Session","points":"Points","progress":"Progress"}},"streakCounter":{"finished":"Well done! Come back for tomorrow's challenge!","unfinished":"Solve today's Daily Challenge to refresh your streak!","buyTimeTravelTicket":"Buy Time Travel Ticket","missedOneDayThisMonth":"You missed 1 day this month. ","missedDaysThisMonth":"You missed {{count}} days this month. "},"playground":{"playground":"Playground","myPlaygrounds":"My Playgrounds","remainingPlaygrounds":"Remaining","renew":"Renew","templates":{"consoleApplication":"Console Application","empty":"New Playground","frontend":"Frontend","machineLearning":"Machine Learning"}},"links":{"premium":"/subscribe/","discuss":"/discuss/","assessment":"/assessment/","shop":"https://detail.youzan.com/show/goods/newest?alias=271n43vr9hen7","onlineInterview":"https://interview.leetcode.com/interview/","profileArticles":"/submissions/","orders":"/store/orders/","explore":"/explore/","admin":{"scores":"/points/admin","operations":"/user_management"},"playground":"/playground"},"pagination":{"perpage":"/ page"},"expand":"Expand","collapse":"Collapse","difficulty":{"easy":"Easy","medium":"Medium","hard":"Hard"},"easterEgg":{"rewardMessage":"Congratulations! You just found 10 LeetCoins. Happy LeetCoding!"},"markdown":{"heading":"heading","quote":"Quote"},"mentions":{"users":"Users","problems":"Problems"},"confirmModal":{"title":"Are you sure?","confirmBtn":"Confirm","cancelBtn":"Cancel"},"saving":"Saving...","saved":"Saved","autoSaved":"Save automatically","loginRequired":"Sign in required","verifiedRequired":"You need to verify your email","phoneVerifiedRequired":"Your need to verify your phone","maybeVerifiedRequired":"You need to verify your email","dailyCheckIn":"+1 Daily Check-in","copy":"Copy","copied":"Copied!","survey":{"veryDissatisfied":"Very Dissatisfied","verySatisfied":"Very Satisfied","next":"Next","continue":"Continue","submit":"Submit","questionNo":"Question {{current}} of {{total}}","thanksMsg":"🎉 Thanks for your feedback!"},"qdNav":{"backTitle":"Problem List","expandPanel":"Expand Panel","preQuestion":"Prev Question","nextQuestion":"Next Question","pickOne":"Pick one"},"premiumModal":{"learnMore":"Learn more","subscribe":"Subscribe"}},"problems":{"meta":{"title":"{{title}} - LeetCode","description":"Can you solve this real interview question? {{title}} - {{content}}","ogImage":"https://leetcode.com/static/images/LeetCode_Sharing.png","defaultDescription":"Level up your coding skills and quickly land a job. This is the best place to expand your knowledge and get prepared for your next interview."},"tabs":{"description":"Description","editorial":"Editorial","discussion":"Discussion","solutions":"Solutions","submissions":"Submissions","submissionOverview":"Submission Overview","code":"Code","testcase":"Testcase","result":"Result","debugger":"Debugger","settings":"Settings","disabledTooltips":{"editorial":"Editorial is not available for this question."}},"lockedQuestion":{"subscribeToUnlock":"Subscribe to unlock.","subscribeToUnlockMessage":"Thanks for using LeetCode! To view this question you must subscribe to premium.","subscribe":"Subscribe"},"feedback":{"feedback":"Feedback","revertToOld":"Revert to last version"},"satisfactionSurvey":{"submitBtnText":"Get LeetCoins"},"panel":{"recommend":"Recommend","description":"Recent hot questions we've picked for you."},"dynamicLayout":{"maximize":"Maximize","exit":"Exit","moveTabset":"{{name}} and {{count}} tabs"},"settings":{"settings":"Settings","layout":{"categoryTitle":"Layout","resetToDefaultLayout":"Reset to default layout","reset":"Reset"},"editor":{"categoryTitle":"Editor","fontSize":"Font size","keyBinding":"Key binding","keyBindingVim":"Vim","keyBindingEmacs":"Emacs","keyBindingStandard":"Standard","tabSize":"Tab size","spaces":"{{count}} spaces"},"shortcuts":{"categoryTitle":"Shortcuts","or":"or","runCode":"Run code","submit":"Submit","closeTab":"Close tab","maximizePanel":"Maximize / Exit Maximize Panel","debug":"Debug","debugStop":"Debug: Stop","debugSkipForward":"Debug: Skip Forward","debugStepOver":"Debug: Step over","debugStepIn":"Debug: Step in","debugStepOut":"Debug: Step out","debugRestart":"Debug: Restart","editorIndent":"Editor: To indent one level","editorIndentFew":"Editor: To indent one fewer levels","editorMoveLines":"Editor: To move lines up/down","editorCut":"Editor: Delete line and copy to buffer","editorToggleComment":"Editor: Comment/uncomment current selection","editorUndo":"Editor: Undo action","editorRedo":"Editor: Redo action"}}},"console":{"meta":{"title":"Question Detail"},"console":"Console","run":"Run","to":"to","or":"or","submit":"Submit","execute":"Execute","resetTestcases":"Reset Testcases","debug":"Debug","testcase":"Testcase","testcaseCount":"{{ count }}/{{ max }} testcases","debugger":"Debugger","testcaseNumber":"Case {{ number }}","cloneCurrentTestcase":"Clone current testcase","switchToRawEditor":"Use raw testcase editor","switchToTabEditor":"Use tab-based testcase editor","switchConsoleToLeft":"Move console to the left side of the page","switchConsoleToRight":"Move console to the right side of the page","testcasePlaceholder":"Enter Testcase","shellTestcaseBlocker":"You don’t need to set testcases for Shell problems.","showFullTree":"Click to view the entire tree","fullTreeTooBig":"Data is too large to display","sourceMode":"Source Mode","sourceModeText":"You can now edit all your testcases in one text editor.","noThanks":"No thanks","tryNow":"Try now","inconsistentResults":"Getting inconsistent results?","inconsistentResultsContent":"You might be using global/static variables or C/C++. The system executes all testcases using the same program instance. Global/static variables affect the program state from one test case to another.","gotIt":"Got it","readMore":"Read more","result":{"result":"Result","stdout":"Stdout","noResult":"You must run your code first","slowdown":{"premium":"You have attempted to run code too soon. Please try again in a few seconds.","first":"You have attempted to run code too soon. Please try again in a few seconds, or","second":"Subscribe","third":"to reduce wait time."},"networkError":"Unknown network error. Please try reloading page.","serverError":"Unknown server error. Please contact our support team.","compileError":"Compile Error","runtimeError":"Runtime Error","copyCompileError":"Copy error message to clipboard","copyContent":"Copy content to clipboard","copied":"Successfully copied to clipboard!","viewAll":"View all","viewLess":"View less","outputLimitExceeded":"Output Limit Exceeded","timeLimitExceeded":"Time Limit Exceeded","memoryLimitExceeded":"Memory Limit Exceeded","timeout":"Server Request Timeout","internalError":"Internal Error","accepted":"Accepted","wrongAnswer":"Wrong Answer","invalidTestcase":"Invalid Testcase","runtime":"Runtime","input":"Input","output":"Output","expected":"Expected","contribution":"Contribute a testcase","pending":"Pending...","premiumPending":"Pending...","judging":"Judging...","debugging":"Debugging...","speedUp":"Speed Up","lastExecutedInput":"Last Executed Input","testcasesPassed":"testcases passed","useTestcaseAsInput":"Use Testcase","cantUseTestcaseAsInput":"Max # of testcases reached","maxTestcaseCountReached":"Max of {{ count }} testcases reached","debugger":"Debugger","moreLine_one":"more line","moreLine_other":"more lines"},"ai":{"title":"LeetWiz","beta":"Beta","analyzingCode":"Analyzing code...","codeErrorHint":"Why am I getting this error?","fullName":"LeetWiz - Your AI helper","shortName":"LeetWiz","description":"Need some help? Try out our new AI assistant, LeetWiz! LeetWiz helps you progress and stay focused on what is important. It will help you identify the cause of runtime/compile errors and provide hints to help you fix them.","fixedError":"You seem to have fixed your runtime/compile error. Keep in mind I only support helping with runtime errors or compile errors for now 😊","morePremiumFeatures":"More premium features"},"info":{"info":"Info","content":"\u003c0\u003eAre 'Run' results inconsistent with 'Submit' results? If you are using global/static variables or C/C++, please check\u003c/0\u003e \u003c1\u003ethis\u003c/1\u003e \u003c0\u003eout.\u003c/0\u003e","ok":"Okay","howToCreateBinaryTreeTestcases":"How to create binary tree testcases","howToCreateDatabaseTestcases":"How to create database testcases"},"visualizer":{"dataTooLarge":"Data too large to be displayed, input would be truncated.","parseFailed":"Failed to parse your input, please check again.","dataNotSupported":"This doesn't support visualization.","outputDataTypeNotSupported":"Output data type doesn't support visualization","initFailed":"Failed to init the canvas, please refresh the page and try again."},"verifyEmail":"verify email","nonVerifyMsg":"Please verify email to run the code","signToRunOrSubmit":"You need to Login/Sign up to {{action}}","signToRunAndSubmit":"You need to \u003c0\u003eLogin / Sign up\u003c/0\u003e to run or submit","verifyToRunAndSubmit":"You need to \u003c0\u003everify email\u003c/0\u003e to execute or submit your code","notAvailableDuringDebugging":"Not available during debugging","notAvailableDuringExecuting":"Not available during executing"},"code-editor":{"commonConfirmTitle":"Are you sure?","fullScreen":"Full screen","exitFullScreen":"Exit full screen","autocomplete":{"button":"Auto","lspTooltip":"Intelligent code completion based on static code analysis.","basicTooltip":"Basic code completion.","basicWithLspError":"Basic code completion. Double-click to retry intelligent code completion.","lspConnectionError":"Intelligent code complete connection failed","lspNotSupportedTooltip":"The language is not supported by our platform","needToLoginTooltip":"Login to use autocomplete","notPremiumTooltip":"Upgrade to premium to use autocomplete"},"langInfo":"Language Information","settings":{"name":"Settings","fontSize":"Font size","fontSizeDesc":"Choose your preferred font size for the code editor.","theme":"Theme","themeDesc":"Tired of the white background? Try different styles and syntax highlighting.","themeDark":"Dark","themeLight":"Light","themeSystem":"System","keyBinding":"Key binding","keyBindingDesc":"Want to practice Vim or Emacs? We have these key binding options available for you.","keyBindingVim":"Vim","keyBindingEmacs":"Emacs","keyBindingStandard":"Standard","tabSize":"Tab size","tabSizeDesc":"Choose the width of a tab character.","spaces":"{{count}} spaces"},"shortcuts":{"name":"Editor Shortcuts","run":"Run code","submit":"Submit","debug":"Debug code","indent":"To indent one level","indentFew":"To indent one fewer levels","moveLines":"To move lines up/down","cut":"Delete line and copy to buffer","toggleComment":"Comment/uncomment current selection","undo":"Undo action","redo":"Redo action","note":"Note"},"reset":{"tip":"Reset to default code definition","confirmContent":"Your current code will be discarded and reset to the default code!","resetServer":"Continue to work on your code from {{time}}","restore":"Restore"},"history":{"title":"{{lang}} Submission Notes","tip":"Submission Notes","description":"Only the code submitted in the current language will be displayed; When you select and confirm the selection, your current code will be overwritten by the code you selected.","status":"Status","runtime":"Runtime","memory":"Memory","time":"Time","topic":"Topic","notes":"Notes","noNotes":"You haven't added notes to any submissions yet!"},"timer":{"start":"Start timer","hide":"Hide timer","show":"Show timer","reset":"Reset timer"},"debugger":{"loginToDebug":"You need to Login / Sign up to debug","name":"Debugger","stdout":"Standard output","input":"Input","enterTip":"Click on line number to add breakpoints","exit":"Exit","start":"Start Debug","stop":"Stop Debug","startShort":"Debug","stopShort":"Stop","watch":"Watch Expressions","local":"Local Variables","watchHolder":"Please enter the watch expressions value","controlStart":"Start Debug","controlForward":"Skip forward","controlStepOver":"Step over","controlStepOut":"Step out","controlStepIn":"Step in","controlReset":"Restart","exited":"Debugger session exited, terminate it?","startToWatch":"Start debugging session to see watch expressions","watchTip":"You need to Start debugging to add value","startViewVars":"Start debugging session to see local variables","noVars":"No local variables detected","startViewOutput":"Start the debugging session to check output here","noOutput":"No output yet...","edited":"Code has been modified, please restart the debugger","cantAddTestcase":"You have reached maximum number of testcases","langNotSupported":"{{lang}} doesn't support debugger","expressionsNotSupported":"{{lang}} not supported","notPremium":"Upgrade to premium to use debugger","oneClickDebug":"One Click Debug"},"markDownPlaceholder":"Type here...(Markdown is enabled)","retrieveCode":{"tip":"Retrieve last submitted code","confirmContent":"Your code will be discarded and replaced with your last submission's code!","noData":"You haven't submitted any code!"}},"description":{"status":{"tried":"Attempted","ac":"Solved"},"ok":"OK","somethingWentWrong":"Something went wrong","thanksForVoting":"Thanks for voting!","companies":"Companies","pastSixMonths":"0 - 6 months","pastYear":"6 months - 1 year","pastTwoYears":"1 year - 2 years","hint":"Hint","showHints":"Show Hints","moreActions":"More Actions","feedback":"Feedback","showEnglish":"Show English Translation","showChinese":"Show Chinese Translation","addToListError":"Something went wrong. Please try again.","feedbackForm":{"optionRequiredError":"Please select at least one option.","title":"Feedback","alternative":"You may also \u003c0\u003esubmit via Github\u003c/0\u003e to get feedback in real time.","cancel":"Cancel","submit":"Submit","issuesEncountered":"Issues Encountered","problem":"Problem","additionalFeedback":"Additional Feedback","description":"We try to keep our questions to the highest quality possible. Could you please tell us why you disliked this question?","somethingWentWrong":"Something went wrong","options":{"unclearDescription":"Description or examples are unclear or incorrect","unclearDifficulty":"Difficulty is inaccurate","unclearTestCases":"Testcases are missing or incorrect","runtimeStrict":"Runtime is too strict","edgeCases":"Edge cases are too frustrating to solve","other":"Other","otherPlaceholder":"Additional feedback"}},"accepted":"Accepted","submissions":"Submissions","acRate":"Acceptance Rate","copyright":"Copyright ©️ {{year}} LeetCode All rights reserved","yes":"Yes","no":"No","add2":"Add","seenBefore":"Seen this question in a real interview before?","whichCompany":"Which Company?","whichTimePeriod":"When did you encounter this question?","whichStage":"Which interview stage?","thanksForFeedback":"🎉 Thank you for your feedback!","relatedTopics":"Related Topics","add":"Add","remove":"Remove","createNewList":"Create a new list","nameListPlaceholder":"Enter a list name","cancel":"Cancel","save":"Save","setAsPrivate":"Set as Private","addToList":"Add to List","sqlSchema":"SQL Schema","pandasSchema":"Pandas Schema","confirm":"Confirm","favoriteSignInError":"Sign in to access your lists","feedbackSignInError":"Sign in to give feedback","likeSignInError":"Sign in to like or dislike this question","mysqlCopySuccess":"Successfully copied to clipboard","shareQuestionDescription":"Check out this coding interview problem on LeetCode!","viewMyLists":"View my Lists","searchPlaceholder":"Search...","similarQuestions":"Similar Questions","discussion":"Discussion ({{commentCount}})"},"submissions":{"runtime":"Runtime","memory":"Memory","beat":"Beats","noData":"No data","noSubmission":"Submission does not exist","noCode":"There is no code here","copied":"Copied","pending":"Pending...","success":{"accept":"Accepted","timeTaken":"Time taken: {{time}}","nextQuestion":"Next question","moreChallenges":"More challenges","second_short":"s","minute_short":"m","hour_one":"hr","hour_other":"hrs","solution":"Solution","beatsPercentage":"Beats {{percent}}%","ofUsersWithLanguage":"of users with {{language}}"},"details":{"myCode":"My Submitted Code","otherCode":"My Submitted Code","sampleCode":"Sample {{metric}} submission","backToMyCode":"Back to my position","chartHintForAction":"Click on the chart to check sample codes","fetchingCodeFromServer":"Fetching code from server..."},"buttons":{"close":"Close","details":"Details","solution":"Solution"},"filters":{"allStatuses":"All statuses","allLanguages":"All languages","status":"Status","language":"Language","time":"Time","runtime":"Runtime","memory":"Memory","notes":"Notes"},"notes":{"label":"Notes","placeholder":"Write your notes here"},"relatedTags":{"label":"Related Tags","placeholder":"Select tags","startTyping":"Start typing to find a tag","noResults":"No tags found"},"chart":{"runtimeDescription":"Accepted Solutions Runtime Distribution (%)","memoryDescription":"Accepted Solutions Memory Distribution (%)","runtimeShortDescription":"Distribution (%)","memoryShortDescription":"Distribution (%)","youAreHere":"You are here!","hintForAction":"Click the distribution chart to view more details","runtime":"Runtime","memory":"Memory","percentLabel":"{{percent}}% of solutions used","runtimeValueLabel":"{{value}} ms of runtime","memoryValueLabel":"{{value}} MB of memory","noData":"Sorry, there are not enough accepted submissions to show data"},"nonSignedIn":{"signInTitle":"🔥 Join LeetCode to Code!","signInInfo":"View your Submission records here","signInButton":"Register or Sign In"},"failedSubmission":{"runtimeError":"Runtime Error","compileError":"Compile Error","lastTestcase":"Last Executed Input"}},"feature-guide":{"layout":"Drag the divider to resize the window based on your preference!","timer":"\u003c0\u003eTimer:\u003c/0\u003e Use the new timer feature to record how much time you spend solving a question!","debugger":"\u003c0\u003eDebugger:\u003c/0\u003e Use the debugger feature to make debugging easy peasy.","problemSwitch":"Quickly navigate to the \u003c0\u003eprevious/next question\u003c/0\u003e here","problemList":"Quickly navigate to the \u003c0\u003eprevious page\u003c/0\u003e here","discussion":"Post any ideas in the \u003c0\u003eDiscussion\u003c/0\u003e. If you want to share a solution, share it under the solution tab!","solution":"Share your solution with other users, and find LeetCode's official solution alongside other users' solutions here.","back":"Back","skip":"Skip","next":"Next","ok":"OK","title":"🎉 Introducing our new question page!"},"feature-guide-dynamic":{"back":"Back","skip":"Skip","next":"Next","explore":"Explore","step1":{"title":"Introducing Dynamic Layout","des":"We value and support every different ways of thinking and learning.","tip":""},"step2":{"title":"Move","des":"Not satisfied with the default? It’s time to start design for your own way of learning.","tip":"Press and hold on tabs or panes to move and revise layout"},"step3":{"title":"Resize","des":"Limited screen space? Now you can control how to better utilize the space and focus on what really matters.","tip":"Press and hold on the gap between panes to revise size"},"step4":{"title":"Maximize","des":"Too much distractions? Double-click to cut out the noise and get a more immersive experience.","tip":"Double-click on the top of pane to enter maximized mode"},"step5":{"title":"New Toolbar","des":"Home to all the core functions, the new toolbar will continue to grow stronger. Please stay tuned.","tip":""}},"solutions":{"filter":{"searchPlaceholder":"Search...","tags":{"all":"All","mySolution":"My Solution"},"sortBy":{"placeholder":"Sort by","hot":"Hot","most_posts":"Most Posts","most_relevant":"Most Relevant","most_votes":"Most Votes","newest_to_oldest":"Most Recent","oldest_to_newest":"Oldest to Newest","recent_activity":"Recent Activity","hot_short":"Hot","newest_to_oldest_short":"Recent","most_votes_short":"Votes","most_relevant_short":"Relevant"}},"solution":"Solution","writeSolution":"Solution","continueSolution":"Solution","videoSolutionTooltip":"Video Solution","premiumOnlyTooltip":"Premium Solution","tags":{"official":"Official","pinned":"Pinned","favorite":"My Favorite","mySolution":"My Solution"},"post":{"invalidSolutionTitle":"Unable to load the solution","invalidSolutionDescription":"Please try exploring other solutions","prevLabel":"Previous","nextLabel":"Next","isAdmin":"Admin","reputationTooltip":"Reputation","share":"Share","addToCollection":"Favorite","isInCollection":"Favorite","votes":"({{votesCount}} votes)","shareCopySuccess":"Copied link to clipboard","addToFavoriteSuccess":"Added to favorite solutions","removeFromFavoriteSuccess":"Removed from favorite solutions","feedbackTooltip":"Feedback","backToTop":"Back to top","genericError":"Something went wrong","signInVoteError":"You must sign in to vote","verifyVoteError":"You must verify your email to vote","rateSuccess":"Thanks for rating this solution!","upvote":"Upvote","comments":"Comments","more":{"error":"Something went wrong","cancel":"Cancel","edit":"Edit","subscribe":"Subscribe","subscribeMessage":"Subscribed","unsubscribe":"Unsubscribe","unsubscribeMessage":"Unsubscribed","delete":"Delete","deleteMessage":"Deleted","deleteConfirmText":"Are you sure you want to delete this post?","deleteConfirmBtn":"Delete","restore":"Restore","restoreMessage":"Restored","restoreConfirmText":"Are you sure you want to restore this post?","restoreConfirmBtn":"Restore","report":"Report","reportMessage":"Reported","pin":"Pin","pinMessage":"Pinned","pinConfirmText":"Are you sure you want to pin this post?","pinConfirmBtn":"Pin","unpin":"Unpin","unpinMessage":"Unpinned","unpinConfirmText":"Are you sure you want to unpin this post?","unpinConfirmBtn":"Unpin","hide":"Hide","hideMessage":"Hid the post","hideConfirmText":"Are you sure you want to hide this post?","hideConfirmBtn":"Hide","hideFromTrending":"Hide from trending","hideFromTrendingMessage":"Hid post from trending","hideFromTrendingConfirmText":"Are you sure you want to hide this post from trending?","hideFromTrendingConfirmBtn":"Hide from trending","show":"Show","showMessage":"Showed the post","showConfirmText":"Are you sure you want to show this post to everyone?","showConfirmBtn":"Show","moveToDiscussion":"Move to Discussion","moveToDiscussionMessage":"Moved to Discussion","moveToDiscussionConfirmText":"Are you sure you want to move this post to Discussion?","moveToDiscussionConfirmBtn":"Move to Discussion"}},"searchResult":{"commentPrefix":" comment","replyPrefix":" reply to ","colon":": "},"noDirectResultsHint":"No results. Here are some related threads.","noResults":"There aren't any solution topics here yet!","noMoreResults":"No more results","backToTop":"Back to top","report":{"reportModalTitle":"Report this content","contentPlaceholder":"Additional feedback","cancel":"Cancel","confirm":"Confirm","advertising":"Spam advertising","sexual":"Sexual content","violent":"Violent content","terrorism":"Promotes terrorism","illegal":"Illegal content","abuse":"Abuse others","nonEnglish":"Non English content","other":"Others","reportSuccess":"Report submitted!","reportError":"Couldn't submit the report, please try again"},"blocker":{"subscribeToUnlock":"Subscribe to unlock.","subscribeSubTitle":"Thanks for using LeetCode! To view this solution you must subscribe to premium.","subscribe":"Subscribe"},"switchToRightTooltip":"Move to right","switchToLeftTooltip":"Move to left","switchFirstTimePopoverContent":"Click \"Switch Layout\" to move the solution panel right or left.","switchFirstTimePopoverBtn":"Got it"},"comments":{"edited":"(Edited)","tooShort":"Comment is too short","noComments":"No comments yet.","reply":"Reply","mentionInputPlaceholder":"Tag a user or a problem","user":"Users","problem":"Problems","mdRules":{"inlineCode":"your inline code...","codeBlock":"code block","link":"leetcode","href":"https://leetcode.com"},"pinnedBy":"Pinned by {{pinnedBy}}","share":"Share","edit":"Edit","shareCopySuccess":"Copied link to clipboard","hideReplies":"Hide Replies","showReplies":"Show {{num}} Replies","cancel":"Cancel","confirm":"Confirm","preview":"Preview","comment":"Comment","typeCommentHere":"Type comment here... (Markdown supported)","comments":"Comments","sortBy":"Sort by","newestToOldest":"Newest to Oldest","oldestToNewest":"Oldest to Newest","mostVotes":"Most Votes","best":"Best","editor":"Editor","youMust":"You must","verifyYourEmail":"verify your email","first":"first","readMore":"Read more","somethingWentWrong":"Something went wrong","areYouSure":"Are you sure?","confirmDeleteComment":"Are you sure you want to delete this comment?","confirmRestoreComment":"Are you sure you want to restore this comment?","confirmHideComment":"Are you sure you want to hide this comment from non-authors?","confirmShowComment":"Are you sure you want to show this comment to everyone?","confirmPinComment":"Are you sure you want to pin this comment?","confirmUnpinComment":"Are you sure you want to unpin this comment?","reward":"Reward","delete":"Delete","hide":"Hide","show":"Show","askQuestion":"Ask Question","feedback":"Feedback","tips":"Tips","chooseAType":"Choose a type","showMoreReplies":"Show more replies","hideSuccess":"Comment hidden from non-authors.","showSuccess":"Comment now visible to everyone.","pinSuccess":"Comment has been pinned.","unpinSuccess":"Comment has been unpinned.","deleteSuccess":"Comment Successfully Deleted","restore":"Restore","restoreSuccess":"Comment Successfully Restored","hidden":"Hidden","report":"Report","pin":"Pin","pinned":"Pinned","unpin":"Unpin","hideComment":"Hide Comment","showComment":"Show Comment","move":"Move to Solution","moveTitle":"Title:","moveTitlePlaceholder":"Enter title here","moveSuccess":"Comment successfully moved","genericError":"Something went wrong","postSuccess":"Comment successfully posted"},"post-solution":{"meta":{"newTitle":"{{title}} - LeetCode - New Solution","editTitle":"{{title}} - LeetCode - Edit Solution"},"filterTopic":"Filter topics","publishSolution":"Solution","publishSolutionTooltip":"Submit at least 1 AC to publish a solution","restore":"Restore from draft","overwriteWithLastAc":"Overwrite with the latest AC submission","generatedWithSources":{"lastAc":"Generated from the latest AC submission","submission":"Generated from the chosen submission","draft":"Restored from draft"},"editingSolution":"Editing the existing solution","blockCode":"Code Block","tag":"Tag","related":"Related","selectATag":"Please select at least one tag","post":"Post","publishError":"Could not publish solution","imgUploadSuccuss":"Upload successfully","imgUploadError":"Upload failure","guideTooltip":"Markdown Guide","saved":"Saved"},"new-study-plan":{"detail":{"metadata":{"title":"{{plan}} - Study Plan - LeetCode","description":"Level up your coding skills and quickly land a job. This is the best place to expand your knowledge and get prepared for your next interview.","notFound":"Not Found"},"weekTextAbbr":{"sun":"SUN","mon":"MON","tue":"TUE","wed":"WED","thu":"THU","fri":"FRI","sat":"SAT"},"weekText":{"sun":"Sunday","mon":"Monday","tue":"Tuesday","wed":"Wednesday","thu":"Thursday","fri":"Friday","sat":"Saturday"},"myPlan":"My Plan","problemLeft":"problem left","problemsLeft":"problems left","notification":"Notification","setUpSp":"Set up a study plan","solvedText":"Solved","problem":"problem","problems":"problems","learnMore":"Learn More","you":"You","weeklyRanking":"Weekly Ranking","weeklyRankingToolTip":"The ranking is based on the number of solved problems in this problem list this week, and the leaderboard is updated hourly (no ranking is calculated if no problems are solved this week).","solvePrev":"I commit to solve","solveNext":"problems on every","startTitle":"New Study Plan","confirmStartText":"Once you save it, you cannot make any modifications. Start now?","quitTypeTipPrev":"Quit the study plan by typing ","quitTypeTipNext":" below.","subscribeToUnlock":"Subscribe to unlock","subscribeToUnlockContent":"Thanks for using LeetCode! To view this study plan you must subscribe to premium.","start":"Start","share":"Share","backToExplore":"Back to Plan List","goCurrentPage":"retry this study plan","premiumTip":"Premium Study Plan","copyLink":"Copy Link","copiedSuccess":"Copied to clipboard","more":"More","quit":"Quit","back":"Back","quitTitle":"Are you sure?","quitContent":"When you quit your study plan, all problem solved statues will be reset and you can't restore progress. Are you sure you want to quit?","showTags":"Show tags","summary":"Summary","showMore":"Show More","showLess":"Show Less","award":"Award","awardCongratulation":"Congratulations! You have already earned this badge.","related":"Related","viewMore":"View More","todo":"Todo","attempted":"Attempted","solved":"Solved","markAsSolved":"Mark As Solved","markAsSolvedTip":"You have been solved this question in other place, do you want to “Mark as solved” here?","difficulty":"Difficulty","congratulation":"🎉 Congratulations!","solvedAllProblemsText":"You just solved all the problems from {{title}}!","checkBadge":"Check out the badge on your","profilePage":"Profile page","wearGlory":"and wear the glory!","checkMyStudyPlan":"Check My Study Plan","joinSuccessfully":"Join Successfully","quitSuccessfully":"Quit Successfully","setSuccessfully":"Set Successfully","errorTip":"Something wrong, please try again.","quitTip":"When you quit your study plan, all problem solved statues will be reset and you can't restore progress.","pastSolved":"Past Solved","solution":"Solution"},"list":{"metadata":{"title":"Study Plan - LeetCode","desc":"Start a study plan that's tailored to your needs to maximize your learning potential. Track your progress and make consistent growth!"},"title":"Study Plan","ongoing":"Ongoing","myPlan":"My Study Plan","featured":"Featured","showMore":"Show More","revertOldPlan":"Revert to the old study plan","revertOldPlanTipTitle":"🌟 Revert to the old version","revertOldPlanTipDesc":"You can click this button to revert to the old study plan","cancel":"Cancel","iSee":"I see"},"myStudyPlan":{"metadata":{"title":"LeetCode - The World's Leading Online Programming Learning Platform","desc":"Level up your coding skills and quickly land a job. This is the best place to expand your knowledge and get prepared for your next interview."},"title":"My Study Plan","ongoing":"Ongoing","history":"History","noOngoingPlan":"You don’t have the ongoing plan","noHistoryPlan":"You don’t have the history plan"},"common":{"studyPlan":"Study Plan","tryNow":"Try it now!","noTanks":"No, thanks","newPlan":"✨ Brand New Study Plan!","newPlanDesc":"Join a new study plan to maximize your learning potential. Track your progress and focus on the daily questions to make consistent growth","seeAll":"See all","totalProgress":"Total Progress","progress":"Progress","completed":"Completed","giveUp":"Give up","ongoing":"Ongoing","ongoingStudyPlan":"Ongoing Study Plan","later":"Later","joinInQDTitle":"Start this study plan?","joinInQD":"Join the study plan to maximize your learning potential. Track your progress and focus on the daily questions to make consistent growth","doNotRemind":"Do not remind me today","exploreButton":"Explore Study Plan","notFoundText":"Sorry, this page could not be found, please check your spelling or explore a new study plan"},"survey":{"submit":"Submit"}}},"zh":{"common":{"404":{"title":"力扣","pageNotFound":"页面不存在","message":"抱歉！我们找不到您想访问的页面..."},"meta":{"title":"","description":"","keywords":""},"ok":"好","cancel":"取消","confirm":"确认","update":"更新","submit":"提交","save":"保存","netFailed":"网络错误","header":{"logo":{"url":"","description":""},"title":{"problemset-all":""},"action":{"login":{"text":"","url":""}}},"conjunctions":{"and":"and","or":"或"},"pages":{"leetcode":"LeetCode","explore":"学习","problems":"题库","interview":{"interview":"求职","onlineInterview":"在线面试","assessment":"Assessment"},"contest":"竞赛","discuss":"讨论","store":{"store":"商店","redeem":"力扣周边","premium":"Plus 会员","shop":"精品商城"},"admin":{"admin":"管理员","library":"题库","translation":"翻译","operations":"运营管理","scores":"点数","contribute":"贡献","backend":"后台管理","twoStepVerification":"二步验证","internalContest":"Internal Contest Dashboard","contestAdmin":"Contest Cheating Dashboard","dangerZone":"Danger Zone","review":"Review","contestDashboard":"Contest Dashboard"},"mobileApp":"下载 App","playground":"Playground","myPlayground":"我的 Playground","signIn":"登录","register":"注册","signOut":"退出"},"userMenu":{"renew":"续订","getPremium":"升级 Plus 会员享专属特权","orders":"订单","resume":"个人资料","translateQuestions":"题目以中文展示","translateQuestionsEn":"题目以英文显示","enterprise":"企业招聘","revertToOldVersion":"回到旧版","categories":{"myList":"收藏夹","notebook":"笔记本","submissions":"我的题解","session":"进度管理","points":"积分","progress":"做题分析"},"unmockUser":"Unmock User","account":"个人设置"},"streakCounter":{"finished":"干的好！明天再来挑战！","unfinished":"解决今天的「每日 1 题」，刷新你的连胜记录！","buyTimeTravelTicket":"购买补签卡","missedOneDayThisMonth":"这个月你错过了 1 天.","missedDaysThisMonth":"这个月你错过了 {{count}} 天."},"playground":{"playground":"Playground","remainingPlaygrounds":"数量","renew":"升级","myPlaygrounds":"我的 Playgrounds","templates":{"consoleApplication":"控制台程序","empty":"空白 Playground","frontend":"前端程序","machineLearning":"机器学习"}},"links":{"admin":{"scores":"/library/scores","translation":"/contribution/translation/question/admin/","operations":"/management"},"premium":"/premium","discuss":"/circle","interview":"/company","shop":"https://detail.youzan.com/show/goods/newest?alias=271n43vr9hen7","onlineInterview":"https://leetcode.cn/interview","profileArticles":"/profile/articles","orders":"/order","explore":"/leetbook","resume":"/profile/info/","playground":"/playground","assessment":"/assessment/","account":"/profile/account"},"pagination":{"perpage":" 条/页"},"expand":"展开","collapse":"收起","difficulty":{"easy":"简单","medium":"中等","hard":"困难"},"data":{"question":{"difficulty":{"easy":"简单","medium":"中等","hard":"困难"}}},"markdown":{"heading":"heading","quote":"Quote"},"mentions":{"users":"用户","problems":"题目"},"confirmModal":{"title":"确定执行此操作?","confirmBtn":"确定","cancelBtn":"取消"},"saving":"保存中...","saved":"保存成功","autoSaved":"已自动保存","loginRequired":"您尚未登录","verifiedRequired":"请绑定手机号或者邮箱后继续操作","phoneVerifiedRequired":"请绑定手机号后继续操作","maybeVerifiedRequired":"请绑定手机号后继续操作","copy":"复制","copied":"已复制","dailyCheckIn":"+1 Daily Check-in (Please translate)","//maybeVerifiedRequired":"maybeVerifiedRequired means email in LCUS and phone in LCCN","easterEgg":{"rewardMessage":"恭喜您获得了 10 积分，Happy LeetCoding!"},"survey":{"veryDissatisfied":"非常不满意","verySatisfied":"非常满意","next":"下一题","continue":"继续","submit":"提交","questionNo":"问卷题目 {{current}}/{{total}}","thanksMsg":"🎉 感谢您的反馈!"},"qdNav":{"backTitle":"题库","expandPanel":"展开面板","preQuestion":"上一题","nextQuestion":"下一题","pickOne":"随机一题"},"premiumModal":{"learnMore":"了解更多权益","subscribe":"升级 Plus 会员"}},"problems":{"meta":{"title":"{{title}} - 力扣（LeetCode）","description":"{{title}} - {{content}}","ogImage":"https://static.leetcode-cn.com/cn-legacy-assets/images/LeetCode_Sharing.png","defaultDescription":"备战技术面试？力扣提供海量技术面试资源，帮助你高效提升编程技能,轻松拿下世界 IT 名企 Dream Offer。"},"tabs":{"description":"题目描述","editorial":"官方题解","discussion":"讨论","solutions":"题解","submissions":"提交记录","submissionOverview":"提交记录概述","code":"代码","testcase":"测试用例","result":"执行结果","debugger":"调试器","settings":"设置","disabledTooltips":{"editorial":"Editorial is not available for this question."}},"feedback":{"feedback":"反馈","revertToOld":"回退到上一个版本"},"lockedQuestion":{"subscribe":"升级 Plus 会员","subscribeToUnlockMessage":"感谢使用力扣！您需要升级为 Plus 会员来解锁该题目","subscribeToUnlock":"该题目是 Plus 会员专享题"},"satisfactionSurvey":{"submitBtnText":"提交"},"panel":{"recommend":"为你推荐","description":"为你精选近期热门题目"},"dynamicLayout":{"maximize":"放大","exit":"退出放大","moveTabset":"{{name}} 等 {{count}} 个 tab"},"settings":{"settings":"设置","layout":{"categoryTitle":"布局","resetToDefaultLayout":"重置为默认布局","reset":"重置"},"editor":{"categoryTitle":"代码编辑器","fontSize":"字体大小","keyBinding":"键位绑定","keyBindingVim":"Vim","keyBindingEmacs":"Emacs","keyBindingStandard":"Standard","tabSize":"Tab 长度","spaces":"{{count}} 个空格"},"shortcuts":{"categoryTitle":"快捷键","or":"或","runCode":"执行代码","submit":"提交解答","closeTab":"关闭 tab","maximizePanel":"放大 / 退出放大面板","debug":"调试","debugStop":"调试: 停止调试","debugSkipForward":"调试: 继续","debugStepOver":"调试: 单步跳过","debugStepIn":"调试: 单步调试","debugStepOut":"调试: 单步跳出","debugRestart":"调试: 重启","editorIndent":"代码编辑器: 行缩进","editorIndentFew":"代码编辑器: 行减少缩进","editorMoveLines":"代码编辑器: 上下移动行","editorCut":"代码编辑器: 剪切","editorToggleComment":"代码编辑器: 切换行注释","editorUndo":"代码编辑器: 撤销","editorRedo":"代码编辑器: 重做"}}},"console":{"meta":{"title":"题目详情"},"console":"控制台","run":"运行","submit":"提交","resetTestcases":"重置测试用例","debug":"调试","testcase":"测试用例","debugger":"调试器","testcaseNumber":"Case {{ number }}","cloneCurrentTestcase":"克隆当前用例","testcaseCount":"{{ count }}/{{ max }} 个测试用例","switchToRawEditor":"使用文本编辑器编写用例","switchToTabEditor":"使用标签效果编辑器编写用例","switchConsoleToLeft":"控制台置于左侧","switchConsoleToRight":"控制台置于右侧","testcasePlaceholder":"请输入测试用例","shellTestcaseBlocker":"Shell 题目无需设置测试用例","sourceMode":"Source Mode","sourceModeText":"你可以在文本编辑器里编写测试用例了","noThanks":"知道了","tryNow":"立即使用","inconsistentResults":"执行跟提交结果不一致?","inconsistentResultsContent":"您的程序可能使用了全局变量或者自定义的类内变量，需要您避免申明类内静态变量以及全局变量，或者手动初始化。","gotIt":"明白了","readMore":"阅读更多","result":{"result":"执行结果","stdout":"标准输出","noResult":"请先执行代码","slowdown":{"premium":"你的提交过于频繁，请稍候重试","first":"你的提交过于频繁，请稍候重试，或","second":"升级 Plus 会员","third":"，可减少等待时间"},"networkError":"网络错误，请稍后刷新页面重试","serverError":"未知的服务器错误，请联系我们的团队进行技术支持。","compileError":"编译出错","runtimeError":"执行出错","copyCompileError":"复制错误信息","copied":"已复制","viewAll":"查看全部","viewLess":"收起","outputLimitExceeded":"超出输出限制","timeLimitExceeded":"超出时间限制","memoryLimitExceeded":"超出内存限制","timeout":"请求超时","internalError":"内部错误","accepted":"通过","wrongAnswer":"解答错误","invalidTestcase":"测试用例非有效值","runtime":"执行用时","input":"输入","output":"输出","expected":"预期结果","contribution":"贡献测试用例","pending":"运行中...","premiumPending":"极速判题中...","judging":"判题中...","debugging":"调试中...","speedUp":"开启极速判题","lastExecutedInput":"最后执行的输入","testcasesPassed":"个通过的测试用例","useTestcaseAsInput":"添加到测试用例","cantUseTestcaseAsInput":"测试用例数达到最大限制","maxTestcaseCountReached":"测试用例数达到上限 {{ count }} 个","debugger":"调试器","copyContent":"已复制到剪切板","moreLine_one":"更多","moreLine_other":"更多","ai":{"title":"LeetWiz","beta":"Beta","analyzingCode":"分析代码...","codeErrorHint":"为什么我会遇到这个 错误？","fullName":"LeetWiz - 一款AI助手","shortName":"LeetWiz","description":"忘记加分号了吗? LeetWiz 帮助你专注于重要的事情，让你不断进步. 它会帮助你找出运行代码/编译错误的原因，并提供解决方法.","fixedError":"您似乎已经修复了运行时/编译错误。请记住，我目前只支持帮助解决运行代码错误或编译错误 😊","morePremiumFeatures":"更多高級功能"}},"info":{"info":"注意","content":"\u003c0\u003e执行代码与提交代码的结果不同？如果您在C/C++的代码中使用了全局变量，请看\u003c/0\u003e \u003c1\u003e这里\u003c/1\u003e","ok":"确定","howToCreateBinaryTreeTestcases":"如何创建二叉树测试用例？","howToCreateDatabaseTestcases":"如何创建数据库测试用例？"},"execute":"Execute","to":"to","fullTreeTooBig":"数据太大，无法展示","or":"or","showFullTree":"点击查看完整的二叉树","visualizer":{"dataTooLarge":"数据量过大，只展示部分","parseFailed":"生成错误，请检查格式是否正确","dataNotSupported":"不支持可视化","outputDataTypeNotSupported":"输出类型不支持可视化","initFailed":"画布初始化失败，请刷新页面重试"},"verifyEmail":"请绑定邮箱后继续操作","signToRunOrSubmit":"{{action}}需要登录","signToRunAndSubmit":"运行和提交代码需要\u003c0\u003e登录\u003c/0\u003e","verifyToRunAndSubmit":"您的手机号尚未绑定，\u003c0\u003e前往验证\u003c/0\u003e！ ","notAvailableDuringDebugging":"调试状态不可用","notAvailableDuringExecuting":"代码执行中不可用","nonVerifyMsg":"请绑定手机号后继续操作"},"code-editor":{"commonConfirmTitle":"操作确认","fullScreen":"全屏","exitFullScreen":"退出全屏","autocomplete":{"button":"智能模式","lspTooltip":"智能补全/语法检查","lspConnectionError":"连接失败","lspNotSupportedTooltip":"该语言暂不支持智能补全 / 语法检查","needToLoginTooltip":"登录来使用自动补全","notPremiumTooltip":"升级 Plus 会员使用自动补全"},"langInfo":"了解语言环境","settings":{"name":"代码编辑器设置","fontSize":"字体设置","fontSizeDesc":"调整适合你的字体大小。","theme":"主题设置","themeDesc":"切换不同的代码编辑器主题，选择适合你的语法高亮。","themeDark":"Dark","themeLight":"Light","themeSystem":"System","keyBinding":"键位绑定","keyBindingDesc":"想要练习使用 Vim 或者 Emacs？你可以在这里切换这些预设的键位绑定。","keyBindingVim":"Vim","keyBindingEmacs":"Emacs","keyBindingStandard":"Standard","tabSize":"Tab 长度","tabSizeDesc":"选择你想要的 Tab 长度，默认设置为4个空格。","spaces":"{{count}}"},"shortcuts":{"name":"编辑器快捷键","run":"执行代码","submit":"提交解答","debug":"调试","indent":"行缩进","indentFew":"行减少缩进","moveLines":"上下移动行","cut":"剪切","toggleComment":"切换行注释","undo":"撤销","redo":"重做","note":"笔记"},"reset":{"tip":"还原到默认的代码模版","confirmContent":"您将放弃所有更改并初始化代码！","resetServer":"您的代码已在 {{time}} 保存在云端,","restore":"恢复"},"history":{"title":"添加了备注的 {{lang}} 提交记录","tip":"获取备注过的提交记录","description":"仅展示当前语言下提交的代码；选中并确认后，当前代码编辑区的全部内容将会被替换。","status":"结果","runtime":"执行用时","memory":"消耗内存","time":"时间","topic":"标签","notes":"备注","noNotes":"暂无提交记录！"},"timer":{"start":"开始计时","hide":"隐藏","show":"展示","reset":"重置"},"debugger":{"loginToDebug":"启用调试功能需要登录","name":"调试器","stdout":"标准输出","input":"输入","enterTip":"点击行号添加断点","exit":"退出调试","start":"开始调试","stop":"停止调试","startShort":"调试","stopShort":"停止","watch":"监听表达式","local":"本地变量","watchHolder":"请输入需要监听的变量，按回车确认","controlStart":"开始调试","controlForward":"继续","controlStepOver":"单步跳过","controlStepOut":"单步跳出","controlStepIn":"单步调试","controlReset":"重置","exited":"已经有一个调试会话在运行，是否将其终止？","startToWatch":"开启调试后查看表达式","watchTip":"开启调试才可添加表达式","startViewVars":"开启调试查看本地变量","noVars":"暂无变量","startViewOutput":"开启调试查看输出","noOutput":"暂无输出...","edited":"代码已变更，需要重启调试","cantAddTestcase":"您已達到最大測試用例數","langNotSupported":"{{lang}}暂不支持调试功能","expressionsNotSupported":"{{lang}} 不支持","notPremium":"升级 Plus 会员使用调试功能","oneClickDebug":"一键调试"},"markDownPlaceholder":"请输入...(支持使用 Markdown)","retrieveCode":{"tip":"还原到最新提交的代码","confirmContent":"您将放弃所有更改并以最新提交的代码替换当前代码编辑区的全部内容！","noData":"您尚未提交过任何代码！"}},"description":{"status":{"tried":"尝试过","ac":"已解答"},"somethingWentWrong":"网络错误","thanksForVoting":"感谢反馈！","companies":"相关企业","pastSixMonths":"0 - 6 个月","pastYear":"6 个月 - 1 年","pastTwoYears":"1 年 - 2 年","hint":"提示","showHints":"显示提示","moreActions":"更多操作","feedback":"反馈","showEnglish":"切换为英文","showChinese":"切换为中文","feedbackForm":{"title":"反馈","alternative":"您也可以通过 \u003c0\u003eGitHub 快速反馈通道\u003c/0\u003e 进行提交","cancel":"取消","submit":"提交","issuesEncountered":"遇到问题","problem":"题目","somethingWentWrong":"网络错误","additionalFeedback":"额外的反馈","description":"我们将致力于提高题目质量，你不喜欢的理由是什么？","options":{"unclearDescription":"描述和示例不清楚或不正确","unclearDifficulty":"难度不准确","unclearTestCases":"测试用例缺失或不正确","runtimeStrict":"时间要求太严格","edgeCases":"边界情况太多","other":"其他","otherPlaceholder":"额外的反馈"},"optionRequiredError":"至少选择一个选项."},"accepted":"通过次数","submissions":"提交次数","acRate":"通过率","copyright":"© {{year}} 领扣网络（上海）有限公司","yes":"是","no":"否","add2":"添加","seenBefore":"请问您在哪类招聘中遇到此题？","whichCompany":"请问您应聘的哪家公司？","whichPosition":"请问您应聘的岗位类型？","whichTimePeriod":"您是在什么时候遇到该题的？","whichStage":"请问您进行了哪种形式的面试？","thanksForFeedback":"🎉 谢谢您的反馈！","relatedTopics":"相关标签","add":"加入","remove":"移除","createNewList":"创建新列表","nameListPlaceholder":"请输入列表标题","cancel":"取消","save":"保存","setAsPrivate":"设为私有","addToList":"加入收藏夹","sqlSchema":"SQL Schema","pandasSchema":"Pandas Schema","confirm":"确定","favoriteSignInError":"登录后才能收藏题目","changeLanguageError":"登录后才能切换语言","feedbackSignInError":"登录后才能反馈问题","likeSignInError":"登录后才能点赞","mysqlCopySuccess":"已复制到剪贴板","shareQuestionDescription":"分享题目","viewMyLists":"查看我的收藏夹","searchPlaceholder":"搜索","ok":"OK","addToListError":"Something went wrong. Please try again.","similarQuestions":"相似题目"},"submissions":{"runtime":"时间","memory":"内存","beat":"击败","noData":"暂无数据","noSubmission":"暂无数据","copied":"已复制","success":{"accept":"通过","timeTaken":"用时: {{time}}","nextQuestion":"下一题","moreChallenges":"更多挑战","second_short":"s","minute_short":"m","hour_one":"hr","hour_other":"hrs","solution":"写题解","beatsPercentage":"击败 {{percent}}%","ofUsersWithLanguage":"使用 {{language}} 的用户"},"details":{"myCode":"我提交的代码","otherCode":"他提交的代码","sampleCode":"{{metric}} 的代码示例","backToMyCode":"返回我的位置","chartHintForAction":"点击查看代码","fetchingCodeFromServer":"加载中..."},"buttons":{"close":"关闭","details":"详情","solution":"写题解"},"filters":{"allStatuses":"所有状态","allLanguages":"所有语言","time":"时间","status":"所有状态","language":"所有语言","runtime":"执行用时","memory":"消耗内存","notes":"备注"},"notes":{"label":"备注","placeholder":"添加备注，例如「暴力解法」、「方法一」等"},"relatedTags":{"label":"相关标签","placeholder":"选择标签","startTyping":"搜索标签","noResults":"暂无标签"},"chart":{"runtimeDescription":"执行用时 (%)","memoryDescription":"消耗内存 (%)","youAreHere":"你在这里","hintForAction":"点击图片查看分布详情","runtime":"执行用时分布","memory":"消耗内存分布","percentLabel":"{{percent}}% 的用户使用了类似解法","runtimeValueLabel":"Runtime: {{value}} ms","memoryValueLabel":"Memory: {{value}} MB","noData":"加载中，暂无数据","memoryShortDescription":"Distribution (%)","runtimeShortDescription":"Distribution (%)"},"nonSignedIn":{"signInTitle":"🔥 登录力扣开始写代码","signInInfo":"这里会展示你的提交记录 ","signInButton":"登录/注册"},"noCode":"There is no code here","pending":"Pending...","failedSubmission":{"runtimeError":"执行出错信息","compileError":"编译出错信息","lastTestcase":"最后执行的输入"}},"feature-guide":{"layout":"支持上下、左右拖拽调整布局","timer":"\u003c0\u003e计时器：\u003c/0\u003e 现在可以在做题过程中使用计时器了！","debugger":"\u003c0\u003e调试器：\u003c/0\u003e 我们将 Debugger 移动到了这里","problemSwitch":"这里可以快速切换到 \u003c0\u003e上一题/下一题\u003c/0\u003e ","problemList":"这里可以快速返回\u003c0\u003e题目列表\u003c/0\u003e","discussion":"新的 \u003c0\u003e“讨论”，\u003c/0\u003e 您可以发布任何想法","solution":"将 \u003c0\u003e“评论”\u003c/0\u003e 的名字修改为新的 \u003c0\u003e“题解” 名\u003c/0\u003e","back":"返回","skip":"跳过","next":"下一步","ok":"确定","title":"🎉 我们的新界面"},"feature-guide-dynamic":{"back":"返回","skip":"跳过","next":"下一步","explore":"探索","step1":{"title":"全新灵动布局","des":"我们珍视每一种独特的思考与学习方式，并致力于提供个性化的支持。","tip":""},"step2":{"title":"自定义布局","des":"不满意默认布局？从此页面内容由你定义，让编码与学习事半功倍。","tip":"拖拽标签页或标签面板以定义布局"},"step3":{"title":"自定义尺寸","des":"屏幕空间受限？现在由你掌控如何利用空间，聚焦真正重要的内容。","tip":"拖拽标签面板间的空隙以改变尺寸"},"step4":{"title":"沉浸式全屏","des":"干扰信息过多？轻松双击即可隔绝干扰，遁入沉浸。","tip":"双击面板顶部进入全屏模式"},"step5":{"title":"全局工具栏","des":"承载聚合力扣核心功能，并将持续拓展，敬请期待。","tip":""}},"solutions":{"filter":{"searchPlaceholder":"搜索","tags":{"all":"不限","mySolution":"我的"},"sortBy":{"placeholder":"排序","hot":"热度最高","most_posts":"发布数量","most_relevant":"默认排序","most_votes":"点赞最多","newest_to_oldest":"最新发布","oldest_to_newest":"最早发布","recent_activity":"默认排序","recent_activity_short":"默认排序","hot_short":"热度最高","newest_to_oldest_short":"最新发布","oldest_to_newest_short":"最早发布","most_votes_short":"点赞最多","most_relevant_short":"默认排序"}},"solution":"题解","writeSolution":"写题解","continueSolution":"继续写题解","tags":{"official":"官方","pinned":"精选","favorite":"收藏","mySolution":"我的题解"},"post":{"invalidSolutionTitle":"题解不存在","invalidSolutionDescription":"请查看其他题解","prevLabel":"上一篇题解","nextLabel":"下一篇题解","isAdmin":"管理员","reputationTooltip":"声望","share":"分享","addToCollection":"收藏","isInCollection":"已收藏","votes":"({{votesCount}} votes)","shareCopySuccess":"分享链接复制到剪切板","addToFavoriteSuccess":"添加成功","removeFromFavoriteSuccess":"移除成功","feedbackTooltip":"反馈","backToTop":"回到顶部","genericError":"未知错误","upvote":"有用","comments":"评论","more":{"error":"网络错误","cancel":"取消","edit":"编辑","subscribe":"Subscribe","subscribeMessage":"Subscribed","unsubscribe":"Unsubscribe","unsubscribeMessage":"Unsubscribed","delete":"删除","deleteMessage":"删除成功","deleteConfirmText":"确定删除?","deleteConfirmBtn":"删除","restore":"Restore","restoreMessage":"Restored","restoreConfirmText":"Are you sure you want to restore this post?","restoreConfirmBtn":"Restore","report":"举报","reportMessage":"举报成功","pin":"Pin","pinMessage":"Pinned","pinConfirmText":"Are you sure you want to pin this post?","pinConfirmBtn":"Pin","unpin":"Unpin","unpinMessage":"Unpinned","unpinConfirmText":"Are you sure you want to unpin this post?","unpinConfirmBtn":"Unpin","hide":"Hide","hideMessage":"Hid the post","hideConfirmText":"Are you sure you want to hide this post?","hideConfirmBtn":"Hide","hideFromTrending":"Hide from trending","hideFromTrendingMessage":"Hid post from trending","hideFromTrendingConfirmText":"Are you sure you want to hide this post from trending?","hideFromTrendingConfirmBtn":"Hide from trending","show":"Show","showMessage":"Showed the post","showConfirmText":"Are you sure you want to show this post to everyone?","showConfirmBtn":"Show","moveToDiscussion":"Move to Discussion","moveToDiscussionMessage":"Moved to Discussion","moveToDiscussionConfirmText":"Are you sure you want to move this post to Discussion?","moveToDiscussionConfirmBtn":"Move to Discussion"},"rateSuccess":"Thanks for rating this solution!"},"searchResult":{"commentPrefix":" comment","replyPrefix":" reply to ","colon":": "},"noDirectResultsHint":"No result. Show you some related content","noResults":"暂无相关题解内容","noMoreResults":"已经到底了","backToTop":"回到顶部","report":{"reportModalTitle":"举报","contentPlaceholder":"其他","cancel":"取消","confirm":"确认","advertising":"骚扰广告","sexual":"黄色内容","violent":"暴力内容","terrorism":"恐怖言论","illegal":"违法内容","politics":"政治言论","abuse":"辱骂他人","fake":"造谣传谣","nonEnglish":"Non English content","other":"其他","reportSuccess":"提交成功","reportError":"提交遇到问题，请稍后再试！"},"blocker":{"subscribeToUnlock":"Subscribe to unlock.","subscribeSubTitle":"Thanks for using LeetCode! To view this solution you must subscribe to premium.","subscribe":"Subscribe"},"videoSolutionTooltip":"Video Solution","premiumOnlyTooltip":"Premium Solution","switchToRightTooltip":"移到右边","switchToLeftTooltip":"移到左边","switchFirstTimePopoverContent":"您可以通过点击 “切换视图” 的按钮将题解文章的视图进行左右切换","switchFirstTimePopoverBtn":"明白了"},"comments":{"edited":"(编辑过)","tooShort":"评论过短","noComments":"暂无评论","reply":"回复","mentionInputPlaceholder":"用户或题目","user":"用户","problem":"题目","mdRules":{"inlineCode":"行内代码...","codeBlock":"code block","link":"leetcode","href":"https://leetcode.cn"},"pinnedBy":"被 {{pinnedBy}} 置顶","share":"分享","edit":"编辑","shareCopySuccess":"已复制到剪切板","hideReplies":"隐藏回复","showReplies":"展示 {{num}} 条回复","cancel":"取消","confirm":"确定","preview":"预览","comment":"评论","typeCommentHere":"请输入评论...","comments":"评论","sortBy":"排序","newestToOldest":"最新","oldestToNewest":"最早","mostVotes":"赞成数","best":"最热","editor":"编辑","youMust":"您需要先","verifyYourEmail":"绑定邮箱","first":"first","readMore":"展开全部","somethingWentWrong":"未知错误","areYouSure":"操作确认","confirmDeleteComment":"确定删除该条评论？","confirmRestoreComment":"确定恢复该条评论？","confirmHideComment":"确定将该条评论灰色屏蔽？","confirmShowComment":"确定将该条评论取消灰色屏蔽？","confirmPinComment":"确定置顶该评论？","confirmUnpinComment":"确定移除置顶？","reward":"赞赏","delete":"删除","hide":"隐藏","show":"展示","askQuestion":"问问题","feedback":"反馈","tips":"提示","chooseAType":"请选择一个类型","showMoreReplies":"展示更多","hideSuccess":"灰色屏蔽成功.","showSuccess":"取消灰色屏蔽成功.","pinSuccess":"Comment has been pinned.","unpinSuccess":"Comment has been unpinned.","deleteSuccess":"删除成功","restore":"Restore","restoreSuccess":"成功恢复评论","hidden":"Hidden","report":"举报","pin":"设为精选","pinned":"精选","unpin":"取消精选","hideComment":"灰色屏蔽","showComment":"取消灰色屏蔽","move":"Move to Solution","moveTitle":"Title:","moveTitlePlaceholder":"Enter title here","moveSuccess":"Comment Successfully Moved","postSuccess":"发布成功","genericError":"Something went wrong","signInVoteError":"You must sign in to vote","verifyVoteError":"You must verify your email to vote"},"post-solution":{"meta":{"newTitle":"{{title}} - LeetCode - New Solution","editTitle":"{{title}} - LeetCode - Edit Solution"},"filterTopic":"搜索标签","publishSolution":"写题解","publishSolutionTooltip":"您需要先通过这道题目才能发布题解","restore":"是否清空草稿？","discard":"清空","discardConfirmTitle":"您确定要清空草稿吗？","discardConfirmContent":"如果清空草稿，会删除当前编辑器中的所有内容","discardConfirmOk":"确定","discardConfirmCancel":"取消","guide":"力扣「Markdown 编辑器」使用说明","check":"查看","blockCode":"「代码块」","tag":"标签","related":"与题相关","selectATag":"请为该题解选择至少1个标签","post":"发布题解","publishError":"发布失败","imgUploadSuccuss":"上传成功","imgUploadError":"上传失败，请重试","guideTooltip":"Markdown 指引","saved":"已保存为草稿"},"new-study-plan":{"detail":{"metadata":{"title":"{{plan}} - 学习计划 - 力扣（LeetCode）全球极客挚爱的技术成长平台","description":"学习计划 - 力扣（LeetCode）全球极客挚爱的技术成长平台","notFound":"未找到学习计划"},"weekTextAbbr":{"sun":"周日","mon":"周一","tue":"周二","wed":"周三","thu":"周四","fri":"周五","sat":"周六"},"weekText":{"sun":"周日","mon":"周一","tue":"周二","wed":"周三","thu":"周四","fri":"周五","sat":"周六"},"myPlan":"我的计划","problemLeft":"题待完成","problemsLeft":"题待完成","notification":"注意","setUpSp":"设置学习计划","solvedText":"完成","problem":"题","problems":"题","learnMore":"更多信息","you":"你","weeklyRanking":"周榜","weeklyRankingToolTip":"按本周完成题目数计算排名，每小时更新一次榜单数据（若本周未完成任何计划内题目，不计算排名）","solvePrev":"以下时间每天完成","solveNext":"道题","startTitle":"设置学习计划","confirmStartText":"计划保存后不可修改哦，确定保存吗？","quitTypeTipPrev":"请输入本计划标题：","quitTypeTipNext":" ","subscribeToUnlock":"升级 Plus 会员","subscribeToUnlockContent":"升级到 Plus 会员，可解锁该学习计划","start":"开始","share":"分享","backToExplore":"返回学习计划","goCurrentPage":"重新尝试该计划","premiumTip":"开通会员","copyLink":"复制链接","copiedSuccess":"已复制分享链接","more":"更多","quit":"退出","back":"返回","quitTitle":"关闭学习计划","quitContent":"当关闭此学习计划时，所有已解决问题的都会被重置，且无法恢复进度。你确定你要关闭吗？","showTags":"显示标签","summary":"概述","showMore":"展开","showLess":"收起","award":"勋章","awardCongratulation":"太棒啦！你已经获得此勋章","related":"相关计划","viewMore":"查看更多","todo":"待完成","attempted":"尝试过","solved":"已解答","markAsSolved":"标记为已解决","markAsSolvedTip":"你以前曾解决过这道题目，是否将其 '标记为已解决' ？","difficulty":"难度","congratulation":"🎉 恭喜你！","solvedAllProblemsText":"你已经解决了 {{title}} 中的所有问题！","checkBadge":"前往您的","profilePage":"个人主页","wearGlory":"并佩戴勋章！","checkMyStudyPlan":"回到我的学习计划","joinSuccessfully":"已加入","quitSuccessfully":"已退出","setSuccessfully":"已设置","errorTip":"遇到些问题，请再次尝试","quitTip":"若您退出该学习计划，所有已解决的问题都将被重置，且无法恢复。","pastSolved":"解答过","solution":"题解"},"list":{"metadata":{"title":"学习计划 - 在 LeetCode 上持续练习来获得面试的成功"},"title":"学习计划","ongoing":"进行中","myPlan":"我的学习计划","featured":"推荐","showMore":"展开","revertOldPlan":"查看旧版的学习计划","revertOldPlanTipTitle":"🌟 返回到旧版的学习计划","revertOldPlanTipDesc":"你可以点击该按钮前往旧版的学习计划","cancel":"取消","iSee":"知道了"},"myStudyPlan":{"metadata":{"title":"我的学习计划 - 力扣 (LeetCode) 全球极客挚爱的技术成长平台","desc":"加入到该学习计划可以追踪你的做题进度，有效地获得能力的提升！"},"title":"我的学习计划","ongoing":"进行中","history":"已结束的计划","noOngoingPlan":"暂无进行中的计划","noHistoryPlan":"暂无已结束的计划"},"common":{"studyPlan":"学习计划","tryNow":"立即开启","noTanks":"暂不尝试","newPlan":"✨ 全新的学习计划！","newPlanDesc":"加入一个新的学习计划，最大限度地发挥你的学习潜力。追踪你的进展，专注于每天的问题，以取得持续增长","seeAll":"查看更多","totalProgress":"完成进度","progress":"完成进度","completed":"完成时间","giveUp":"退出时间","ongoing":"进行中","ongoingStudyPlan":"进行中的学习计划","later":"暂不参与","joinInQDTitle":"是否开始该学习计划？","joinInQD":"加入到该学习计划可以追踪你的做题进度，有效地获得能力的提升！","doNotRemind":"今天不再提示","exploreButton":"探索学习计划","notFoundText":"抱歉，无法找到该网页，请检查你的输入内容或重新探索一个新的学习计划"},"survey":{"submit":"提交"}}}},"initialLocale":"en","ns":["common","problems","console","code-editor","description","submissions","feature-guide","feature-guide-dynamic","solutions","comments","post-solution","new-study-plan"],"userConfig":{"i18n":{"defaultLocale":"zh","locales":["en","zh"]},"react":{"useSuspense":false},"reloadOnPrerender":false,"default":{"i18n":{"defaultLocale":"zh","locales":["en","zh"]},"react":{"useSuspense":false},"reloadOnPrerender":false}}},"layoutPreferences":{"solutionSide":"left"}},"__N_SSP":true},"page":"/problems/[slug]/[[...tab]]","query":{"slug":"longest-consecutive-sequence","tab":["solutions","2647870","python-solution"]},"buildId":"fvZQi0tm1CB5vpAkWIcA-","isFallback":false,"gssp":true,"scriptLoader":[]}</script><div id="modal-root"></div><next-route-announcer><p aria-live="assertive" id="__next-route-announcer__" role="alert" style="border: 0px; clip: rect(0px, 0px, 0px, 0px); height: 1px; margin: -1px; overflow: hidden; padding: 0px; position: absolute; width: 1px; white-space: nowrap; overflow-wrap: normal;">LeetCode - The World's Leading Online Programming Learning Platform</p></next-route-announcer><div class="chakra-portal"><ul role="region" aria-live="polite" id="chakra-toast-manager-top" style="position: fixed; z-index: 5500; pointer-events: none; display: flex; flex-direction: column; margin: 0px auto; top: env(safe-area-inset-top, 0px); right: env(safe-area-inset-right, 0px); left: env(safe-area-inset-left, 0px);"></ul><ul role="region" aria-live="polite" id="chakra-toast-manager-top-left" style="position: fixed; z-index: 5500; pointer-events: none; display: flex; flex-direction: column; top: env(safe-area-inset-top, 0px); left: env(safe-area-inset-left, 0px);"></ul><ul role="region" aria-live="polite" id="chakra-toast-manager-top-right" style="position: fixed; z-index: 5500; pointer-events: none; display: flex; flex-direction: column; top: env(safe-area-inset-top, 0px); right: env(safe-area-inset-right, 0px);"></ul><ul role="region" aria-live="polite" id="chakra-toast-manager-bottom-left" style="position: fixed; z-index: 5500; pointer-events: none; display: flex; flex-direction: column; bottom: env(safe-area-inset-bottom, 0px); left: env(safe-area-inset-left, 0px);"></ul><ul role="region" aria-live="polite" id="chakra-toast-manager-bottom" style="position: fixed; z-index: 5500; pointer-events: none; display: flex; flex-direction: column; margin: 0px auto; bottom: env(safe-area-inset-bottom, 0px); right: env(safe-area-inset-right, 0px); left: env(safe-area-inset-left, 0px);"></ul><ul role="region" aria-live="polite" id="chakra-toast-manager-bottom-right" style="position: fixed; z-index: 5500; pointer-events: none; display: flex; flex-direction: column; bottom: env(safe-area-inset-bottom, 0px); right: env(safe-area-inset-right, 0px);"></ul></div><script src="./longest-consecutive-sequence_files/monaco-1609a3107da75f1832dd_0.33.15.js.download" crossorigin="anonymous"></script><div id="headlessui-portal-root"><div data-headlessui-portal=""></div><div data-headlessui-portal=""></div></div><div class="monaco-aria-container"><div class="monaco-alert" role="alert" aria-atomic="true"></div><div class="monaco-alert" role="alert" aria-atomic="true"></div><div class="monaco-status" role="complementary" aria-live="polite" aria-atomic="true"></div><div class="monaco-status" role="complementary" aria-live="polite" aria-atomic="true"></div></div><div class="fixed top-[215px] z-base-2 right-0"><div class="z-base-3 relative"></div></div><div><div class="z-modal-2 fixed left-0 top-0 flex h-full w-[600px] -translate-x-full transform flex-col transition-all duration-500 bg-lc-layer-01 dark:bg-dark-lc-layer-01"><div style="cursor: pointer; position: absolute; right: 26px; top: 22px;"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1k1oopx"><path d="M19 5L5 19M19 19L5 5" stroke="currentColor" stroke-width="2.5" stroke-linecap="round"></path></svg></div><div class="border-b px-6 py-5 font-medium border-lc-fill-01 dark:border-dark-lc-fill-01"><div class="w-[500px]"><div class="inline-flex cursor-pointer items-center"><div class="truncate text-xl text-lc-text-primary dark:text-dark-lc-text-primary"><span>Problem List</span></div><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon ml-2 css-3m1z08"><path fill-rule="evenodd" clip-rule="evenodd" d="M7.91289 19.0711L14.9702 11.993L7.91289 4.92894C7.52237 4.53841 7.52237 3.90525 7.91289 3.51473C8.30342 3.1242 8.93658 3.1242 9.32711 3.51473L17.0915 11.2859C17.482 11.6764 17.482 12.3096 17.0915 12.7001L9.32711 20.4853C8.93658 20.8758 8.30342 20.8758 7.91289 20.4853C7.52237 20.0948 7.52237 19.4616 7.91289 19.0711Z" fill="currentColor"></path></svg></div></div></div><div class="overflow-auto p-5"><div class="relative flex flex-col"><div class="flex items-end justify-between px-1"><div class="mb-[18px] flex items-center gap-3"><div class="flex flex-1 flex-col items-start gap-2 overflow-hidden"><div class="flex w-full items-center gap-1 text-base font-medium text-lc-text-primary dark:text-dark-lc-text-primary">Recommend</div><div class="text-xs leading-[22px] text-lc-text-tertiary dark:text-dark-lc-text-tertiary">Recent hot questions we've picked for you.</div></div></div><div class="css-170a2ks"><div class="group flex cursor-pointer outline-none h-5 items-center" id="headlessui-switch-:r7h:" role="switch" tabindex="0" aria-checked="false" data-headlessui-state=""><span class="mr-2 flex h-4 w-4 items-center justify-center rounded text-paper border border-fill-1 bg-layer-3 group-hover:bg-fill-4 dark:border-fill-1 dark:bg-dark-layer-3 dark:group-hover:bg-dark-fill-4"><svg xmlns="http://www.w3.org/2000/svg" viewBox="0 0 24 24" width="1em" height="1em" fill="currentColor" class="h-3.5 w-3.5 hidden" aria-hidden="true"><path fill-rule="evenodd" d="M9.688 15.898l-3.98-3.98a1 1 0 00-1.415 1.414L8.98 18.02a1 1 0 001.415 0L20.707 7.707a1 1 0 00-1.414-1.414l-9.605 9.605z" clip-rule="evenodd"></path></svg></span><span class="block truncate leading-5 text-label-2 dark:text-dark-label-2 group-hover:text-label-1 dark:group-hover:text-dark-label-1">Show tags</span></div></div></div><div class="flex w-full flex-col gap-4"><div class="w-full overflow-hidden css-yw0m6t"><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Two Sum</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Longest Substring Without Repeating Characters</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Valid Parentheses</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Best Time to Buy and Sell Stock</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Pow(x, n)</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Palindrome Number</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">3Sum</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Contains Duplicate</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Search a 2D Matrix</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Merge Sorted Array</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Valid Palindrome</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Remove Duplicates from Sorted Array</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Valid Anagram</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Longest Common Prefix</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Reverse Integer</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Search in Rotated Sorted Array</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Word Break</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Asteroid Collision</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Remove Element</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Climbing Stairs</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Add Two Numbers</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Course Schedule</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Peak Index in a Mountain Array</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Longest Palindromic Substring</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Majority Element</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Rotate Array</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 cursor-pointer bg-lc-fill-02 dark:bg-dark-lc-fill-02 css-72ev5s" id="activeItem"><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-pacbts"><div class="truncate">Longest Consecutive Sequence</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Maximum Subarray</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Can Place Flowers</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Container With Most Water</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Jump Game</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Find the Index of the First Occurrence in a String</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Linked List Cycle</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Merge Two Sorted Lists</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Minimum Depth of Binary Tree</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Permutations</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Letter Combinations of a Phone Number</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">LRU Cache</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">String to Integer (atoi)</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Minimum Speed to Arrive on Time</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Product of Array Except Self</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Non-overlapping Intervals</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Roman to Integer</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Validate Binary Search Tree</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Move Zeroes</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Search Insert Position</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Sqrt(x)</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Longest Arithmetic Subsequence of Given Difference</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Reverse Linked List</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Plus One</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Combinations</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Is Subsequence</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Group Anagrams</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Median of Two Sorted Arrays</div></div></div><p class="chakra-text css-cza8jh">Hard</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Remove Nth Node From End of List</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Top K Frequent Elements</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Binary Search</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Add Two Numbers II</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">House Robber</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Merge Intervals</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Maximum Depth of Binary Tree</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Find Minimum in Rotated Sorted Array</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Predict the Winner</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Length of Last Word</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Find Eventual Safe States</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">All Nodes Distance K in Binary Tree</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Maximum Product Subarray</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Coin Change</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Maximum Running Time of N Computers</div></div></div><p class="chakra-text css-cza8jh">Hard</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Two Sum II - Input Array Is Sorted</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Number of Longest Increasing Subsequence</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Maximum Number of Jumps to Reach the Last Index</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Jump Game II</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Merge Strings Alternately</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Find First and Last Position of Element in Sorted Array</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Minimum ASCII Delete Sum for Two Strings</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Longest Increasing Subsequence</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Find Peak Element</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Reverse Words in a String</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Same Tree</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Knight Probability in Chessboard</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Missing Number</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Substring With Largest Variance</div></div></div><p class="chakra-text css-cza8jh">Hard</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Big Countries</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Maximum Number of Events That Can Be Attended II</div></div></div><p class="chakra-text css-cza8jh">Hard</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Sort Colors</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-1hwpjif"><path d="M21.6004 12C21.6004 17.302 17.3023 21.6 12.0004 21.6C6.69846 21.6 2.40039 17.302 2.40039 12C2.40039 6.69809 6.69846 2.40002 12.0004 2.40002C13.5066 2.40002 14.9318 2.74689 16.2004 3.3651M19.8004 6.00002L11.4004 14.4L9.00039 12" stroke="currentColor" stroke-width="2.3" stroke-linecap="round" stroke-linejoin="round"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Single Number</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Trapping Rain Water</div></div></div><p class="chakra-text css-cza8jh">Hard</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Soup Servings</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Find the Duplicate Number</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Minimum Size Subarray Sum</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Min Stack</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Number of Islands</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Set Matrix Zeroes</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Fibonacci Number</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Check if Array is Good</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Koko Eating Bananas</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Unique Paths</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Next Permutation</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Balanced Binary Tree</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Longest Common Subsequence</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Best Time to Buy and Sell Stock II</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Smallest Sufficient Team</div></div></div><p class="chakra-text css-cza8jh">Hard</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Check if it is Possible to Split Array</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Divide Two Integers</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Binary Tree Maximum Path Sum</div></div></div><p class="chakra-text css-cza8jh">Hard</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">4Sum</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Valid Sudoku</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Isomorphic Strings</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Number of Music Playlists</div></div></div><p class="chakra-text css-cza8jh">Hard</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Palindrome Linked List</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Remove Duplicates from Sorted Array II</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Invert Binary Tree</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Maximum Beauty of an Array After Applying Operation</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Recyclable and Low Fat Products</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Unique Binary Search Trees II</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Power of Two</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Kth Largest Element in an Array</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Reverse Vowels of a String</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Strange Printer</div></div></div><p class="chakra-text css-cza8jh">Hard</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Longest Non-decreasing Subarray From Two Arrays</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Binary Tree Level Order Traversal</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Subarray Sum Equals K</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Combination Sum</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Word Search</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Find Customer Referee</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Middle of the Linked List</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Longest Alternating Subarray</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Greatest Common Divisor of Strings</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Maximum Average Subarray I</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Diameter of Binary Tree</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Minimum Window Substring</div></div></div><p class="chakra-text css-cza8jh">Hard</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Rotate List</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Insert Interval</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">All Possible Full Binary Trees</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Partition Equal Subset Sum</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Binary Tree Inorder Traversal</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Remove Duplicates from Sorted List</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Ransom Note</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Largest Element in an Array after Merge Operations</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Symmetric Tree</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Account Balance After Rounded Purchase</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Add Binary</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Reverse String</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Binary Tree Right Side View</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Rotate Image</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Spiral Matrix</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Longest Repeating Character Replacement</div></div></div><p class="chakra-text css-1l21w2d">Medium</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Sliding Window Maximum</div></div></div><p class="chakra-text css-cza8jh">Hard</p></div></div></div><div class="flex flex-col last:border-b-0 hover:bg-lc-fill-02 dark:hover:bg-dark-lc-fill-02 cursor-pointer css-72ev5s" id=""><div class="flex h-[52px] w-full items-center space-x-3 px-4"><div><div class="flex items-center"><svg viewBox="0 0 24 24" focusable="false" class="chakra-icon css-5uhenc"><path fill-rule="evenodd" clip-rule="evenodd" d="M12 22C6.47715 22 2 17.5228 2 12C2 6.47715 6.47715 2 12 2C17.5228 2 22 6.47715 22 12C22 17.5228 17.5228 22 12 22ZM12 20C16.4183 20 20 16.4183 20 12C20 7.58172 16.4183 4 12 4C7.58172 4 4 7.58172 4 12C4 16.4183 7.58172 20 12 20Z" fill="currentColor"></path></svg></div></div><div class="relative flex h-full w-full items-center"><div class=" flex w-0 flex-1 items-center space-x-2"><div class="css-rq2fok"><div class="truncate">Rising Temperature</div></div></div><p class="chakra-text css-1tad05g">Easy</p></div></div></div></div></div></div></div></div></div></body><quillbot-extension-portal><template shadowrootmode="open"><div></div></template></quillbot-extension-portal><quillbot-extension-root><template shadowrootmode="open" shadowrootdelegatesfocus><div id="qb-ext-sr"><div style="display: none;"><button class="MuiButton-root MuiButton-primary MuiButton-primaryPrimary MuiButton-sizeSmall MuiButton-primarySizeSmall MuiButtonBase-root extn-css-1mbubfb" tabindex="0" type="button" appearance="brand"><span class="MuiTouchRipple-root extn-css-w0pj6f"></span></button></div><style data-styled="active" data-styled-version="5.3.5">*,::before,::after{box-sizing:border-box;border-width:0;border-style:solid;--tw-border-opacity:1;border-color:rgba(229,231,235,var(--tw-border-opacity));--tw-translate-x:0;--tw-translate-y:0;--tw-rotate:0;--tw-skew-x:0;--tw-skew-y:0;--tw-scale-x:1;--tw-scale-y:1;--tw-transform:translateX(var(--tw-translate-x)) translateY(var(--tw-translate-y)) rotate(var(--tw-rotate)) skewX(var(--tw-skew-x)) skewY(var(--tw-skew-y)) scaleX(var(--tw-scale-x)) scaleY(var(--tw-scale-y));--tw-ring-inset:var(--tw-empty,/*!*/ /*!*/);--tw-ring-offset-width:0px;--tw-ring-offset-color:#fff;--tw-ring-color:rgba(59,130,246,0.5);--tw-ring-offset-shadow:0 0 #0000;--tw-ring-shadow:0 0 #0000;--tw-shadow:0 0 #0000;--tw-blur:var(--tw-empty,/*!*/ /*!*/);--tw-brightness:var(--tw-empty,/*!*/ /*!*/);--tw-contrast:var(--tw-empty,/*!*/ /*!*/);--tw-grayscale:var(--tw-empty,/*!*/ /*!*/);--tw-hue-rotate:var(--tw-empty,/*!*/ /*!*/);--tw-invert:var(--tw-empty,/*!*/ /*!*/);--tw-saturate:var(--tw-empty,/*!*/ /*!*/);--tw-sepia:var(--tw-empty,/*!*/ /*!*/);--tw-drop-shadow:var(--tw-empty,/*!*/ /*!*/);--tw-filter:var(--tw-blur) var(--tw-brightness) var(--tw-contrast) var(--tw-grayscale) var(--tw-hue-rotate) var(--tw-invert) var(--tw-saturate) var(--tw-sepia) var(--tw-drop-shadow);--tw-backdrop-blur:var(--tw-empty,/*!*/ /*!*/);--tw-backdrop-brightness:var(--tw-empty,/*!*/ /*!*/);--tw-backdrop-contrast:var(--tw-empty,/*!*/ /*!*/);--tw-backdrop-grayscale:var(--tw-empty,/*!*/ /*!*/);--tw-backdrop-hue-rotate:var(--tw-empty,/*!*/ /*!*/);--tw-backdrop-invert:var(--tw-empty,/*!*/ /*!*/);--tw-backdrop-opacity:var(--tw-empty,/*!*/ /*!*/);--tw-backdrop-saturate:var(--tw-empty,/*!*/ /*!*/);--tw-backdrop-sepia:var(--tw-empty,/*!*/ /*!*/);--tw-backdrop-filter:var(--tw-backdrop-blur) var(--tw-backdrop-brightness) var(--tw-backdrop-contrast) var(--tw-backdrop-grayscale) var(--tw-backdrop-hue-rotate) var(--tw-backdrop-invert) var(--tw-backdrop-opacity) var(--tw-backdrop-saturate) var(--tw-backdrop-sepia);}html{line-height:1.5;-webkit-text-size-adjust:100%;-moz-tab-size:4;tab-size:4;font-family:ui-sans-serif,system-ui,-apple-system,BlinkMacSystemFont,"Segoe UI",Roboto,"Helvetica Neue",Arial,"Noto Sans",sans-serif,"Apple Color Emoji","Segoe UI Emoji","Segoe UI Symbol","Noto Color Emoji";}body{margin:0;font-family:inherit;line-height:inherit;}hr{height:0;color:inherit;border-top-width:1px;}abbr[title]{-webkit-text-decoration:underline dotted;text-decoration:underline dotted;}b,strong{font-weight:bolder;}code,kbd,samp,pre{font-family:ui-monospace,SFMono-Regular,Consolas,'Liberation Mono',Menlo,monospace;font-size:1em;}small{font-size:80%;}sub,sup{font-size:75%;line-height:0;position:relative;vertical-align:baseline;}sub{bottom:-0.25em;}sup{top:-0.5em;}table{text-indent:0;border-color:inherit;border-collapse:collapse;}button,input,optgroup,select,textarea{font-family:inherit;font-size:100%;line-height:inherit;margin:0;padding:0;color:inherit;}button,select{text-transform:none;}button,[type='button'],[type='reset'],[type='submit']{-webkit-appearance:button;}::-moz-focus-inner{border-style:none;padding:0;}:-moz-focusring{outline:1px dotted ButtonText;}:-moz-ui-invalid{box-shadow:none;}legend{padding:0;}progress{vertical-align:baseline;}::-webkit-inner-spin-button,::-webkit-outer-spin-button{height:auto;}[type='search']{-webkit-appearance:textfield;outline-offset:-2px;}::-webkit-search-decoration{-webkit-appearance:none;}::-webkit-file-upload-button{-webkit-appearance:button;font:inherit;}summary{display:list-item;}blockquote,dl,dd,h1,h2,h3,h4,h5,h6,hr,figure,p,pre{margin:0;}button{background-color:transparent;background-image:none;}fieldset{margin:0;padding:0;}ol,ul{list-style:none;margin:0;padding:0;}img{border-style:solid;}textarea{resize:vertical;}input::-webkit-input-placeholder,textarea::-webkit-input-placeholder{color:#9ca3af;}input::-moz-placeholder,textarea::-moz-placeholder{color:#9ca3af;}input:-ms-input-placeholder,textarea:-ms-input-placeholder{color:#9ca3af;}input::placeholder,textarea::placeholder{color:#9ca3af;}button,[role="button"]{cursor:pointer;}h1,h2,h3,h4,h5,h6{font-size:inherit;font-weight:inherit;}a{color:inherit;-webkit-text-decoration:inherit;text-decoration:inherit;}pre,code,kbd,samp{font-family:ui-monospace,SFMono-Regular,Menlo,Monaco,Consolas,"Liberation Mono","Courier New",monospace;}img,svg,video,canvas,audio,iframe,embed,object{display:block;vertical-align:middle;}img,video{max-width:100%;height:auto;}[hidden]{display:none;}@-webkit-keyframes spin{to{-webkit-transform:rotate(360deg);-ms-transform:rotate(360deg);transform:rotate(360deg);}}@keyframes spin{to{-webkit-transform:rotate(360deg);-ms-transform:rotate(360deg);transform:rotate(360deg);}}@-webkit-keyframes ping{75%,100%{-webkit-transform:scale(2);-ms-transform:scale(2);transform:scale(2);opacity:0;}}@keyframes ping{75%,100%{-webkit-transform:scale(2);-ms-transform:scale(2);transform:scale(2);opacity:0;}}@-webkit-keyframes pulse{50%{opacity:.5;}}@keyframes pulse{50%{opacity:.5;}}@-webkit-keyframes bounce{0%,100%{-webkit-transform:translateY(-25%);-ms-transform:translateY(-25%);transform:translateY(-25%);-webkit-animation-timing-function:cubic-bezier(0.8,0,1,1);animation-timing-function:cubic-bezier(0.8,0,1,1);}50%{-webkit-transform:none;-ms-transform:none;transform:none;-webkit-animation-timing-function:cubic-bezier(0,0,0.2,1);animation-timing-function:cubic-bezier(0,0,0.2,1);}}@keyframes bounce{0%,100%{-webkit-transform:translateY(-25%);-ms-transform:translateY(-25%);transform:translateY(-25%);-webkit-animation-timing-function:cubic-bezier(0.8,0,1,1);animation-timing-function:cubic-bezier(0.8,0,1,1);}50%{-webkit-transform:none;-ms-transform:none;transform:none;-webkit-animation-timing-function:cubic-bezier(0,0,0.2,1);animation-timing-function:cubic-bezier(0,0,0.2,1);}}</style></div><style id="common-css">[contenteditable]:focus {
  outline: 0px solid transparent;
}

:root {
  --new: #499557;
  --new-hover: #41894e;
  --new-secondary: #71b657;
  --new-filter: saturate(150%) hue-rotate(25deg) brightness(92%);
  --new-filter-hover: brightness(90%);
  --new-banner: #6aab76;
  --new-banner-hover: #65986f;

  --traditional-filter: none;
  --traditional-filter-hover: none;
  --traditional-secondary: #8aad67;
  --traditional: #849e63;
  --traditional-hover: #687b50;
  --traditional-banner: #99b576;
  --traditional-banner-hover: #799655;

  --primary: var(--new);
  --secondary: var(--new-secondary);
  --primary-hover: var(--new-hover);
  --image-filter: var(--new-filter);
  --image-filter-hover: var(--new-filter-hover);
  --banner: var(--new-banner);
  --banner-hover: var(--new-banner-hover);

  --default-font: Lato, sans-serif;
}

body {
  background: #fff;
  justify-content: center;
  text-rendering: optimizelegibility;
  margin: 0 !important;
}

.mobile-quill-bottom-controls > div {
  min-width: 48px;
}

textarea {
  resize: none;
}

a {
  text-decoration: none;
  color: white;
}

/* .title {
  width: 500px;
  font-size: 1.5rem;
  display: inline-block;
} */

.btn {
  -moz-user-select: none;
  -khtml-user-select: none;
  -webkit-user-select: none;
  -ms-user-select: none;
  user-select: none;
  transition: all 0.3s;
}

/* hide google re-captcha */

.go-premium-btn {
  width: 150px;
  text-align: center;
  padding: 4px 20px !important;
  margin: auto;
  font-weight: bold !important;
  color: #fff;
  cursor: pointer;
}

.no-box-shadow {
  box-shadow: none !important;
}

.login-offer-text {
  margin: -2px 2px;
}

.green-text {
  transition: all 0.15s;
  color: var(--primary);
  cursor: pointer;
}

.green-text:hover {
  color: var(--primary-hover);
}

.word-prompt-items {
  display: flex;
}

.article-sentence {
  display: inline;
  -webkit-transition: all 0.15s;
  -moz-transition: all 0.15s;
  -o-transition: all 0.15s;
  -ms-transition: all 0.15s;
  transition: all 0.15s;
  /* padding: 4.5px 0px; */
}

.similarity-score {
  color: black;
  font-size: 0.65em;
  margin-left: 5px;
}

.error-message {
  color: #ee1212;
  font-family: Lato, serif;
  font-size: 0.8rem;
  text-align: center;
  line-height: 18px;
  width: 100%;
  display: block;
}

.success-message {
  color: #00ff00;
  font-family: Lato, serif;
  font-size: 0.8rem;
  text-align: center;
  line-height: 18px;
}

.color-scale {
  width: 100%;
  height: 12px;
  display: flex;
  justify-content: space-around;
  padding: 2px;
  margin-top: 6px;
  margin-left: -1px;
}

.color-button {
  width: 12px;
  height: 12px;
  cursor: pointer;
  border-radius: 8px;
  border: 2px solid #737373;
  margin-top: -2px;
  margin: 8px 8px;
  transition: all 0.1s;
}

.color-button-inside {
  width: 8px;
  height: 8px;
  cursor: pointer;
  border-radius: 8px;
  transition: all 0.1s;
  margin-top: -2px;
  margin: 2px 2px;
}

.article-color-button {
  background-color: #f8f8f8;
  width: 10px;
  height: 10px;
  cursor: pointer;
  border-radius: 8px;
  border: 2px solid #737373;
  margin-top: -2px;
  margin: 3px 4px;
  transition: all 0.1s;
}

.article-color-button-inside {
  background-color: #f8f8f8;
  width: 8px;
  height: 8px;
  cursor: pointer;
  border-radius: 8px;
  margin-top: -2px;
  margin: 1px 1px;
  transition: all 0.1s;
}

.recaptcha-container {
  position: absolute;
}

#example1 {
  transition: all 0.1s;
}

.processing-payment {
  position: absolute;
  background-color: #fff;
  width: 100%;
  height: 100%;
  margin: auto;
  margin-top: 0;
  margin-left: 0;
  text-align: center;
  left: 0px;
  top: 0px;
  display: flex;
  justify-content: center;
  align-items: center;
  z-index: 1;
}

.my-tooltip {
  line-height: 20px;
  font-size: 0.9em;
  width: 210px;
  text-align: center;
  transition: all 0s;
  z-index: 9000000;
}

.my-tooltip > h6 {
  line-height: 0px;
  margin-top: 18px;
  font-size: 0.9em;
  margin-bottom: 18px;
  filter: brightness(100);
  text-align: center;
  transition: all 0s;
}

.p-lock {
  margin-left: 1px;
  width: 14px;
  height: 14px;
  opacity: 0.69;
}

.ap-lock {
  width: 12px;
  height: 12px;
  opacity: 0.69;
  margin-top: 3px;
  cursor: pointer;
}

.strength-list {
  display: flex;
  margin-top: 6px;
  flex-direction: column;
  margin-left: 4px;
}

.strength-list-row {
  display: flex;
  cursor: pointer;
}

.strength-tag {
  color: rgb(86, 86, 86);
  font-size: 0.8em;
  line-height: 33px;
  font-weight: bold;
}

.priority-divider {
  border-top: 1px solid rgb(153, 153, 153);
  width: 70%;
  margin-left: 5%;
  margin-top: 7px;
  margin-bottom: 3px;
  margin-left: 12%;
  margin-right: auto;
}

.credit-cards {
  margin-right: 0px;
  cursor: pointer;
}

.credit-cards img {
  padding-right: 5px;
}

.paypal-logo-click {
  cursor: pointer;
}

.article-copy-textarea {
  width: 100%;
  height: 100%;
  padding: 5px;
  font-family: Lato, sans-serif;
  font-size: 1em;
}

/* ::-webkit-scrollbar {
  width: 5px;
  cursor: default;
}
*/
/* Track */
/* ::-webkit-scrollbar-track {
  border-radius: 10px;
} */

/* Handle */
/* ::-webkit-scrollbar-thumb {
  background: gray;
} */

/* Loader css */
#overlay {
  background: #000000;
  /* color: #666666; */
  position: fixed;
  height: 100%;
  width: 100%;
  z-index: 5000;
  top: 0;
  left: 0;
  float: left;
  text-align: center;
  padding-top: 25%;
  opacity: 0.4;
}

.spinner {
  margin: 0 auto;
  height: 64px;
  width: 64px;
  animation: rotate 0.8s infinite linear;
  border: 5px solid;
  border-right-color: transparent;
  border-radius: 50%;
}

.hotkey-command {
  /* color: #8f8f8f !important; */
}

@keyframes rotate {
  0% {
    transform: rotate(0deg);
  }

  100% {
    transform: rotate(360deg);
  }
}

/*================ new css code for new project ====================== */

.container {
  max-width: 1300px;
  margin: auto;
  padding: 0px 12px;
  width: 100%;
}

.extHeader {
  /* background: #f1f7f3; */
  position: sticky;
  top: 0;
  z-index: 1;
}

.maximizeouticon {
  width: 35px;
  background: #828282;
  height: 3px;
  margin: auto;
  border-radius: 5px;
  margin-bottom: 11px;
  display: block;
}

.kebabBtn {
  padding: 6px 0px;
  text-align: right;
}

@media all and (-ms-high-contrast: none), (-ms-high-contrast: active) {
  :root {
    --new: #499557;
    --new-hover: #41894e;
    --new-secondary: #71b657;
    --new-filter: saturate(150%) hue-rotate(25deg) brightness(92%);
    --new-filter-hover: brightness(90%);
    --new-banner: #6aab76;
    --new-banner-hover: #65986f;

    --traditional-filter: none;
    --traditional-filter-hover: none;
    --traditional-secondary: #8aad67;
    --traditional: #849e63;
    --traditional-hover: #687b50;
    --traditional-banner: #99b576;
    --traditional-banner-hover: #799655;

    --primary: var(--new);
    --secondary: #71b657;
    --primary-hover: #41894e;
    --image-filter: var(--new-filter);
    --image-filter-hover: var(--new-filter-hover);
    --banner: var(--new-banner);
    --banner-hover: var(--new-banner-hover);

    --default-font: Lato, sans-serif;
  }

  body {
    text-rendering: optimizelegibility;
    margin: 0 !important;
  }

  .manual-payment-container {
    margin: auto;
    margin-top: auto;
    text-align: center;
    max-width: 400px;
    width: 100%;
    display: block;
    padding: 10px;
    border: 0px solid #499557;
    border-radius: 6px;
    margin-top: 20px;
    min-height: 162px;
  }

  .processing-payment {
    position: absolute;
    background-color: #ccc;
    opacity: 0.4;
    height: 100%;
    margin: auto;
    left: 0px;
    top: 0px;
    width: 100%;
    text-align: center;
  }

  .__react_component_tooltip.show {
    opacity: 1;
    transition: all 0s;
  }

  .green-text {
    transition: all 0.15s;
    color: #499557;
    cursor: pointer;
  }

  .green-text:hover {
    color: #41894e;
  }
}

/* Forcing font everywhere to be open sans. This not working*/
body {
  font-family: 'Open Sans', sans-serif !important;
  font-size: 14px;
  overscroll-behavior-y: contain;
  background: #fff;
}

/*
using in commented code
.nd-input-toast-container {
  bottom: 25px;
  width: calc(100% - 20px);
  background: #2c2d33;
  text-align: center;
  font-family: monospace;
  padding: 5px;
  border-radius: 0px 0px 5px 5px;
  margin: 2px 5px 5px 5px;
  color: white;
}*/

.nd-word {
  transition: all 0.05s;
  position: relative;
}

/* #inputText[placeholder]:empty::before { // check
  content: attr(placeholder);
  color: #8497aa;
} */

#inputText[placeholder]:empty:focus::before {
  content: '';
}

/* #inputBoxSummarizer[placeholder]:empty::before {
  content: attr(placeholder);
  color: #dcdcdc;
} */

#inputBoxSummarizer[placeholder]:empty:focus::before {
  content: '';
}

/* ============= new design 2 css ================= */

/* start of CSS for splitter */
.Resizer {
  background: #000;
  opacity: 0.2;
  z-index: 1;
  -moz-box-sizing: border-box;
  -webkit-box-sizing: border-box;
  box-sizing: border-box;
  -moz-background-clip: padding;
  -webkit-background-clip: padding;
  background-clip: padding-box;
}

.Pane {
  display: flex;
}

/* .Resizer:hover {
  -webkit-transition: all 2s ease;
  transition: all 2s ease;
} */

.extensionMidContainerWithScroll .Pane2 {
  height: 40%;
}

.Resizer.horizontal {
  height: 3px;
  margin: -2.5px 0 -3.5px 0;
  cursor: row-resize;
  width: 100%;
  background-color: #000;
  opacity: 0.2;
  min-height: 3px;
}

.Resizer.horizontal:hover {
  background-color: #5f6368;
}

.Resizer.vertical {
  width: 7px;
  margin-right: -4px;
  border-right: 4px solid rgba(255, 255, 255, 0);
  cursor: col-resize;
  border-bottom: 0px;
}

.Resizer.vertical:hover {
  border-right: 4px solid rgba(0, 0, 0, 1);
  width: 7px;
}
.Resizer.disabled {
  cursor: not-allowed;
}
.Resizer.disabled:hover {
  border-color: transparent;
}

/* =========== new design 3 =============== */

.root-container {
  flex-direction: column;
  flex-wrap: unset !important;
  display: flex;
  min-height: calc(100vh - 280px);
  /* background-color: #fff; */
  padding-top: 25px !important;
  padding-bottom: 30px !important;
}

.auth-root {
  /* background-color: rgba(249, 250, 255); */
  min-height: calc(100vh - 280px);
}

.mid-container {
  max-width: 1300px !important;
  width: 100%;
}

.page-header {
  /* color: #4f4f4f; */
  text-align: center;
}

.page-header:first-child,
.page-header > p:first-child {
  font-size: 28px !important;
  text-align: center;
}

.home-container-gray {
  /* background-color: #f1f1f1; */
  min-height: unset;
  padding-bottom: 40px !important;
}

.nd-mobile-container {
  padding: 0px !important;
  padding-top: 0px !important;
  /* background: #fff; */
}

.nd-mobile-container-focused-content {
  padding-top: 0px !important;
}

.home-container-premium {
  min-height: calc(100vh - 60px);
}

.qbp-d-flex {
  display: flex !important;
}

.qbp-pb50 {
  padding-bottom: 50px !important;
}

.p-0 {
  padding: 0 !important;
}

.pl-0 {
  padding-left: 0 !important;
}

.px-0 {
  padding-left: 0 !important;
  padding-right: 0 !important;
}

.m-0 {
  margin: 0 !important;
}

.b-shadow {
  box-shadow: none !important;
}

.w-100 {
  width: 100% !important;
}
/* == start from here === */
.qbp-pb10 {
  padding-bottom: 10px !important;
}

.qbp-pt20 {
  padding-top: 20px !important;
}

.qbp-pb20 {
  padding-bottom: 20px !important;
}

.qbp-textCenter {
  text-align: center !important;
}

.qbp-mx16 {
  margin: 0 16px !important;
}

.qbp-pb20 {
  padding-bottom: 20px !important;
}

.qbp-py20 {
  padding: 20px 0 !important;
}

.qbp-textYellow {
  color: #ffb800;
}

.qbp-semibold {
  font-weight: 600 !important;
}

.qbp-settings-item {
  display: flex;
  padding: 25px 0 15px !important;
  justify-content: space-between;
  border-bottom: 1px solid #8f8f8f;
  color: #000;
  align-items: center;
}

.card-pad {
  padding: 10px 0 1px 0 !important;
}

.qbp-settings-item:last-child {
  border-bottom: 0;
}

.details-subtitle {
  display: inline-block;
  color: rgba(0, 0, 0, 0.6);
  font-weight: normal;
  font-size: 14px !important;
}

.settting-span {
  display: flex;
  align-items: center;
  justify-content: space-between;
}

.details-subtitle-highlight {
  display: inline-block;
  color: rgba(0, 0, 0, 0.6);
  /* font-weight: bold !important; */
  font-size: 14px !important;
}

.premium-container {
  padding-top: 0 !important;
}

/*************************** Login/Sign up popup css ******************************/

.auth-container {
  max-width: 480px;
  width: 100%;

  /* background-color: white; */
  position: relative;
  margin: auto;
  margin-top: 25px;
  margin-bottom: 100px;
}

@media (max-width: 480px) {
  .auth-root {
    padding: 0px 15px;
  }
}

.auth-container-top-border {
  height: 5px;
  width: 100%;
  background: rgb(33, 150, 83);
  background: linear-gradient(90deg, rgba(33, 150, 83, 1) 11.34%, rgba(41, 113, 254, 1) 100%);
}

.social-auth-btn {
  margin: auto !important;
  position: relative;
}

.social-auth-btn img {
  position: absolute;
  left: 15px;
  height: 16px;
}

.auth-btn {
  line-height: 32px !important;
  font-weight: 600 !important;
  font-size: 16px !important;
  height: 45px;
}

.qbp-useraccount-text {
  color: #8a8a8a;
  padding-bottom: 5px;
  font-size: 12px;
}

.qbp-reg-input {
  border: 1px solid #a6a5a5;
  color: #5b5b5b;
  width: 100%;
  display: block;
  float: unset;
  padding: 10px;
  border-radius: 3px;
  margin-bottom: 14px;
  transition: ease all 0.3s;
  height: 45px;
}

.qbp-reg-input:focus {
  box-shadow: 0px 0 16px 0 rgba(0, 0, 0, 0.4);
  outline: none !important;
}

.qbp-error-message {
  font-size: 11px;
  position: absolute;
  bottom: 9px;
  left: 0;
  color: #ee1212;
}

.qbp-error-message1 {
  font-size: 11px;
  padding-bottom: 10px;
  color: #ee1212;
}

.qbp-success-message {
  color: #27b027;
  font-size: 13px;
  line-height: 18px;
  display: flex;
  justify-content: center;
  padding-bottom: 10px;
}

.qbp-prem-input {
  font-weight: normal;
  font-size: 14px;
  color: #151515 !important;
  background-color: #fff;
  width: 100%;
  font-family: arial;
  border: 1px solid #c4c4c4;
  border-radius: 3px;
  height: 40px;
  padding: 0px 15px;
  outline: 0;
}

.login-drawer {
  display: flex;
  padding-top: 8px;
  padding-bottom: 8px;
  flex-direction: column;
  justify-content: flex-start;
}

.style01 {
  font-size: 1.5em;
  font-weight: 600;
  /* color: #fff; */
}

.linkstyle01 {
  color: #fff;
  padding: 0 5px;
  cursor: pointer;
  text-decoration: underline;
}

.flipperTextContainer {
  padding: 0px 32px 0px 15px;
  /* border-left: 1px solid #e0e0e0;*/
  /* color: rgb(0, 0, 0, 0.75); */
}

.flipperTextContainer:hover {
  /* color: black; */
}

.top-tabs .MuiButtonBase-root {
  /* display: inline-block !important; */
  text-transform: capitalize;
  font-size: 1rem;
}

.payment-status {
  font-weight: 600;
  color: #a1a197;
}

/**************************Survey popup css stuff **********************/
.survey-modal {
  background: rgba(0, 0, 0, 0.7);
  position: fixed;
  top: 0;
  left: 0;
  bottom: 0;
  right: 0;
  overflow: auto;
  display: flex;
  min-width: 100vw;
  justify-content: center;
  min-height: 100vh;
  align-items: center;
  z-index: 1201;
}

.survey-container {
  background-color: white;
  max-width: 650px;
  padding: 10px 15px 15px !important;
  margin: auto !important;
  position: relative !important;
}

@media (max-width: 350px) {
  .survey-container {
    margin: auto 12 !important;
  }
}

@media (max-width: 960px) {
  .survey-container {
    max-width: 350px;
  }
}

.survey-header {
  font-size: 20px !important;
  font-weight: 700 !important;
  color: #000 !important;
}

.survey-close-btn {
  position: absolute !important;
  top: 0;
  right: 0;
}

.survey-question {
  font-size: 13px !important;
  padding-bottom: 10px;
}

.so-checkbox-label {
  font-size: 12px !important;
  display: flex;
  padding-bottom: 8px;
  color: #5f6368;
}

.survey-submit-btn {
  color: #2971fe !important;
  font-size: 14px !important;
  float: right;
  font-weight: 500;
  text-transform: uppercase;
}

.unsubscribe-reason {
  width: 100%;
}

.steps {
  font-weight: bold !important;
}

.feedback-textarea {
  width: 100%;
  height: 91px;
  padding: 5px;
  font-size: 0.87rem;
  font-family: 'Open Sans', sans-serif;
}
/* .prompt-container {
  background-color: #fff;
  position: absolute;
  top: 23px;
  z-index: 1150;
  border: 1px solid #bbb;
  border-radius: 2px;
  padding-bottom: 0;
  transition: all 0.15s;

  box-shadow: 0px 1px 1px #999;
} */

/* ============= do not remove this css =============*/
.grecaptcha-badge {
  visibility: hidden;
}
/* =========== do not remove css inside comment area ========== */

/*================== responsive codes ============== */

@media (max-width: 960px) {
  .terms-main-container ol {
    margin: 10px 0px;
    padding-left: 20px;
    word-break: break-word;
  }

  .terms-main-container ol li {
    margin: 10px 0px;
    padding-left: 20px;
    word-break: break-word;
  }
}

.CardElementHolder {
  border: 1px #c4c4c4 solid;
  border-radius: 3px;
  margin-top: 8px;
  padding: 11px 15px 10px;
}

.CardField-child {
  background: #f00 !important;
}

/* ======= new global css start ============= */
p {
  font-size: 16px;
}
a {
  color: #2971fe;
}

.btn-link {
  /* color: #2971fe !important; */
  cursor: pointer;
}
.btn-link:hover {
  text-decoration: underline;
}

.pageTitle {
  font-size: 30px;
  margin: 30px 15px 15px;
  line-height: 41px;
  font-weight: normal;
  text-align: center;
}

.terms-main-container ol li::marker {
  font-size: 16px;
  font-weight: bold;
}
.terms-main-container ol li p b {
  font-weight: 600;
}

/* .CbHosted--focus {
  border: 1px solid #499557 !important;
} */

.chargebee-overwrites::placeholder {
  color: #a0a0a0 !important;
}

.shadow-container {
  height: 6px;
  width: 100%;
  box-shadow: 0px 4px 7px rgba(0, 0, 0, 0.1);
  z-index: 2;
}

input::-webkit-outer-spin-button,
input::-webkit-inner-spin-button {
  -webkit-appearance: none;
  margin: 0;
}

/* Firefox */
input[type='number'] {
  -moz-appearance: textfield;
}

.fix-error {
  background: rgba(73, 149, 87, 0.2) !important;
}

#RESEARCH_EDITOR:before {
  color: #828282;
  margin-left: 60px;
  margin-right: 60px;
  margin: 0 auto;
}

#RESEARCH_EDITOR * {
  max-width: 672px;
  white-space: pre-wrap !important;
}
/* .grammarbot-popover-root {
  pointer-events: none !important;
} */

.page-wrapper {
  padding: var(--main-editor__mce-content-body--padding-y) var(--main-editor__mce-content-body--padding-x);
}

#grammarbot:before {
  color: #828282;
  /* margin-left: 137px;
  margin-right: 138px; */
}

#wordCounterBot:before {
  color: #828282;
}

#grammarbot a {
  color: inherit; /*To add dark mode compatibility */
}

.grammarbot-correction-card-ignore-button {
  padding-top: 13px;
}
.grammarbot-status-icons {
  font-size: 40px !important;
}

.correction-card-wrapper {
  margin-top: -10px;
  padding-top: 8px;
}

.grammarbot-fix-all {
  position: absolute !important;
  top: -48px !important;
  right: 30% !important;
  z-index: 1 !important;
}

.notepadeditor:before {
  color: #828282;
  margin-left: 0px;
}

.notepadeditor {
  width: 100%;
  font-size: 13px !important;
  margin-top: 12px !important;
}

.notepadeditor > p {
  margin-block-start: 0em !important;
  font-size: 13px !important;
}

#main-editor-parent {
  /* ! THESE VARIABLES ARE BEING USED IN SCRIPTS */
  --main-editor__mce-content-body--padding-x: 90px;
  --main-editor__mce-content-body--padding-y: 90px;
}

#main-editor > .mce-content-body {
  /* padding: var(--main-editor__mce-content-body--padding-y, 36px)
    var(--main-editor__mce-content-body--padding-x, 36px); */
  min-height: calc(100vh - 190px);

  /* color: #252525; */
}

#rough-editor {
  width: 100%;
  overflow: auto;
}

#rough-editor > .mce-content-body {
  height: calc(100vh - 122px);
  width: 100%;
  margin: 14px;
  color: #252525;
  overflow: auto;
}

#main-editor > .mce-content-body {
  word-break: break-word !important;
  white-space: pre-wrap !important;
  word-wrap: break-word !important;
}

#main-editor > .mce-content-body > p,
#main-editor > .mce-content-body > .page-wrapper > p {
  font-size: 14px !important;
  font-family: Arial, Helvetica, sans-serif;
  margin: 0px;
}

sup,
sub {
  white-space: pre-wrap !important;
}

.tox-tinymce {
  border: none !important;
  position: absolute !important;
  visibility: visible !important;
  display: block !important;
}

#main-editor .tox-editor-header {
  border: none !important;
  border-bottom: 1px solid !important;
}

#toolbar-location .tox-editor-header {
  border: none !important;
  top: 20px !important;
  left: 14px !important;
}

#toolbar-location .tox-toolbar {
  background: none !important;
}

.tox .tox-toolbar-overlord {
  background: none !important;
}

.tox-notification {
  display: none !important;
}

.tox .tox-tbtn svg {
  fill: #666666 !important;
}

.tox .tox-tbtn--disabled svg,
.tox .tox-tbtn--disabled:hover svg,
.tox .tox-tbtn:disabled svg,
.tox .tox-tbtn:disabled:hover svg {
  fill: rgba(34, 47, 62, 0.5) !important;
}

.tox .tox-tbtn__select-label {
  color: #666666 !important;
}

.tox .tox-autocompleter {
  max-width: 35em !important;
}

.tox .tox-autocompleter .tox-menu {
  max-width: 35em !important;
}

.tox.tox-tinymce--toolbar-sticky-on .tox-editor-header {
  box-shadow: none !important;
}

.tox-editor-header {
  border-right: none !important;
}

.tox-toolbar__primary {
  background: none !important;
  /* box-shadow: 0px 1px 8px 0px rgba(31, 31, 31, 0.15) !important; */
  /* border-bottom: 1px solid #ccc !important; */
  /* border-top: 1px solid #ccc !important; */
  /* padding-left: 15px !important; */
  width: 100% !important;
}

.tox-toolbar__group {
  border: none !important;
  /* box-shadow: 2px -1px 3px -2px rgba(31, 31, 31, 0.15) !important; */
}

.tox-toolbar__group::after {
  content: url('/images/coWriter/line.svg');
}

.tox-toolbar__group:last-child:after {
  content: '';
}

.tox .tox-menu.tox-collection.tox-collection--list {
  width: max-content;
}

.tox-toolbar__primary > .tox-toolbar__group:last-child {
  box-shadow: none !important;
}

.quillSettingSpace {
  -webkit-transition: all 0.1s ease-in-out !important;
  -moz-transition: all 0.1s ease-in-out !important;
  -o-transition: all 0.1s ease-in-out !important;
  transition: all 0.1s ease-in-out !important;
  margin-top: 26px !important;
}

.tox-tbtn,
.tox-tbtn__select-label {
  cursor: pointer !important;
}

.tox-tbtn--disabled {
  cursor: not-allowed !important;
}

@media (max-width: 600px) {
  body {
    margin: 26px 16px 0px 20px;
  }
}

.showFadeEffect {
  --animation-time: 2s;
  animation: opacity-fade var(--animation-time) !important;
}

.dataRefHidden {
  display: none !important;
}

.pulseLoader {
  content: ' ';
  width: 90px;
  height: 12px;
  display: inline-block;
  background-color: #ccc;
  animation: new-animation 1s infinite;
  vertical-align: text-bottom;
  border-radius: 3px;
  margin-left: -5px;
}

@keyframes new-animation {
  0%,
  100% {
    opacity: 1;
  }
  50% {
    opacity: 0.2;
  }
}

@keyframes opacity-fade {
  0% {
    opacity: 0;
  }
  100% {
    opacity: 1;
  }
}

#doc-title {
  padding: 46px 0px 13px 137px;
  width: 70%;
  font-weight: 600;
  font-size: 20px;
}

.mce-content-body[data-mce-placeholder]:not(.mce-visualblocks)::before {
  content: attr(placeholder);
  pointer-events: none;
  display: block; /* For Firefox */
  color: #828282 !important;
}

[contenteditable='true']:empty:before {
  content: attr(placeholder);
  pointer-events: none;
  display: block; /* For Firefox */
  color: #828282 !important;
}

.red-underline {
  border-bottom: #fb3f4b 2px solid;
  transition: all 0.3s ease-in-out;
}

.red-underline:hover {
  background-color: #fb3f4c14;
  border-radius: 2px;
}

.red-underline.error-hovered {
  background-color: #fb3f4c14;
  border-radius: 2px;
  transition: all 0.3s ease-in-out;
  pointer-events: none;
}

.blue-underline {
  border-bottom: #0067c5 2px solid;
  transition: all 0.3s ease-in-out;
}

.blue-underline:hover {
  background-color: #0067c514;
  border-radius: 2px;
}

.blue-underline.error-hovered {
  background-color: #0067c514;
  border-radius: 2px;
  transition: all 0.3s ease-in-out;
  pointer-events: none;
}

.magenta-underline {
  border-bottom: #8051ff 2px solid;
  transition: all 0.3s ease-in-out;
}

.magenta-underline:hover {
  background-color: #8051ff24;
  border-radius: 2px;
}

.magenta-underline.error-hovered {
  background-color: #8051ff24;
  border-radius: 2px;
  transition: all 0.3s ease-in-out;
  pointer-events: none;
}

#fixed-toolbar-container .tox-tinymce-inline .tox-editor-header {
  border: none !important;
}
/*
  Citation Marker style
*/
#main-editor .CitationMarkerStyle {
  padding: 3px;
}

.CitationMarkerStyle_Burst {
  background-color: #ffefde !important;
  color: orange !important;
}

.reduce-margin-block-end {
  margin-block-end: -1em !important;
}

#grammar-checker pre {
  white-space: pre-wrap;
}

#word-counter pre {
  white-space: pre-wrap;
}

.sound-icon {
  display: flex;
  flex-direction: column;
  align-items: center;
}

.sound-wave {
  width: 400px;
  height: 100px;
  display: flex;
  justify-content: space-around;
  align-items: center;
}

.sound-wave .audioOnWithSpeech {
  display: block;
  width: 5px;
  margin-right: 1px;
  height: 90px;
  background: #499557;
  animation: sound 0ms -800ms linear infinite alternate;
  transition: height 0.8s;
}

.sound-wave .audioOff {
  display: block;
  width: 5px;
  margin-right: 0px;
  height: 12px;
  background: #9f9f9f;
}

.sound-wave .audioOnWithoutSpeech {
  display: block;
  width: 5px;
  margin-right: 0px;
  height: 12px;
  background: #499557;
}

@keyframes sound {
  0% {
    opacity: 0.35;
    height: 6px;
  }
  100% {
    opacity: 1;
    height: 46px;
  }
}

@keyframes sound2 {
  0% {
    opacity: 0.35;
    height: 6px;
  }
  100% {
    opacity: 1;
    height: 120px;
  }
}

.audioOnWithSpeech:nth-child(1) {
  height: 2px;
  animation-duration: 274ms;
}

.audioOnWithSpeech:nth-child(2) {
  height: 10px;
  animation-duration: 233ms;
}

.audioOnWithSpeech:nth-child(3) {
  height: 18px;
  animation-duration: 207ms;
}

.audioOnWithSpeech:nth-child(4) {
  height: 26px;
  animation-duration: 258ms;
}

.audioOnWithSpeech:nth-child(5) {
  height: 30px;
  animation-duration: 200ms;
}

.audioOnWithSpeech:nth-child(6) {
  height: 32px;
  animation-duration: 227ms;
}

.audioOnWithSpeech:nth-child(7) {
  height: 34px;
  animation-duration: 241ms;
}

.audioOnWithSpeech:nth-child(8) {
  height: 36px;
  animation-duration: 219ms;
}

.audioOnWithSpeech:nth-child(9) {
  height: 40px;
  animation-duration: 287ms;
}

.audioOnWithSpeech:nth-child(10) {
  height: 46px;
  animation-duration: 242ms;
}

.audioOnWithSpeech:nth-child(11) {
  height: 2px;
  animation-duration: 274ms;
}

.audioOnWithSpeech:nth-child(12) {
  height: 10px;
  animation-duration: 233ms;
}

.audioOnWithSpeech:nth-child(13) {
  height: 18px;
  animation-duration: 207ms;
}

.audioOnWithSpeech:nth-child(14) {
  height: 26px;
  animation-duration: 258ms;
}

.audioOnWithSpeech:nth-child(15) {
  height: 30px;
  animation-duration: 200ms;
}

.audioOnWithSpeech:nth-child(16) {
  height: 32px;
  animation-duration: 227ms;
}

.audioOnWithSpeech:nth-child(17) {
  height: 34px;
  animation-duration: 241ms;
}

.audioOnWithSpeech:nth-child(18) {
  height: 36px;
  animation-duration: 219ms;
}

.audioOnWithSpeech:nth-child(19) {
  height: 40px;
  animation-duration: 287ms;
}

.audioOnWithSpeech:nth-child(20) {
  height: 46px;
  animation-duration: 242ms;
}

.audioOnWithSpeech:nth-child(21) {
  height: 2px;
  animation-duration: 274ms;
}

.audioOnWithSpeech:nth-child(22) {
  height: 10px;
  animation-duration: 233ms;
}

.audioOnWithSpeech:nth-child(23) {
  height: 18px;
  animation-duration: 207ms;
}

.audioOnWithSpeech:nth-child(24) {
  height: 26px;
  animation-duration: 258ms;
}

.audioOnWithSpeech:nth-child(25) {
  height: 30px;
  animation-duration: 200ms;
}

.audioOnWithSpeech:nth-child(26) {
  height: 32px;
  animation-duration: 227ms;
}

.audioOnWithSpeech:nth-child(27) {
  height: 34px;
  animation-duration: 241ms;
}

.mce-content-body [contentEditable='false'][data-mce-selected] {
  cursor: not-allowed;
  outline: 3px solid #f1f1f1 !important;
}

.display--none {
  display: none;
}

/* [title='Font sizes'] {
  width: 65px !important;
} */

.wave .dot {
  display: inline-block;
  width: 4px;
  height: 4px;
  border-radius: 50%;
  /* margin-right: 1px; */
  background: #499557;
  animation: wave 1s linear infinite;
}
.wave .dot:nth-child(1) {
  animation-delay: -0.9s;
}
.wave .dot:nth-child(2) {
  animation-delay: -0.7s;
}
.wave .dot:nth-child(3) {
  animation-delay: -0.5s;
}

@keyframes wave {
  0%,
  60%,
  100% {
    transform: initial;
  }
  30% {
    transform: translateY(-4px);
  }
}

    button {
      font-size: 12px;
    }
    p { 
      color: black; 
      font-size: 12px; 
    }
    input {
      color: black; 
      font-size: 12px; 
      background: white;
    }
    textarea {
      color: black; 
      font-size: 12px; 
    }
    checkbox {
      background: white;
    }
    </style><style><style data-emotion="extn-css" data-s=""></style></style></template></quillbot-extension-root></html>