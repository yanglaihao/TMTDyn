/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rjtipF_info.c
 *
 * Code generation for function '_coder_rjtipF_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rjtipF.h"
#include "_coder_rjtipF_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[4] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 4, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("rjtipF"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.3.0.713579 (R2017b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[28] = {
    "789ced5d4b6fe3d61566e6d5318ab603b44d933ed2381d4c52ccc47ada1a7765590f5bb2f5969f6921531225d1e643222959f6ca4081a28b2eb2eca23fa08b2c"
    "82aeba14d04d914d81a2698aa240b328d0a03fa0c8a28b52a2ae2d7274471cf38a12a9730183be3ee4f92e8fcf3de7dc731fa45e4ba45ea328eaebeacf1df5a7",
    "f7b05fa3a8af515a7934bcdea1f4c5487f6d787d66a8a3729fbaa77b0ed17f33bc56444161ba8a56e1588149b7f93223a91581e6996b36559167055a508a174d"
    "86921859e43a4c7540a9b11c53647966571ca96cb36a858f8f90ae2b7d52fff74883a99c15da3c2535e49be672a3156a443ebfc6bcff3d93f20961e4f368c81f",
    "d13f88fd2cf213cf9ecc48b247967d21ff73bf27cac8678ad8f4f856de2e1413f1f8fbf1dd4cd65311ab8c473a55d8667c85bf6e6717d38e0726db7917d3cea5"
    "e1f50ddd5ffd1bda3530bc0637503b4e303866e5751fd38e472aa5cfbf299e0fb48414de0343fd06efc1807f556c9739e606efb716f1b6b0781a7f44ff20b17b",
    "385089ac24d6259a7fbbafbbb227152eee86373d79bfd7172a7b1451e4ca62d7c3f09c8763cb1e9e5638baec119bb26720a711fd38c1b4cbac7e18afa82c510f"
    "87bf5d7df987b5bf86edc3d3caa2e0e1fab759bd7b1d8387f40ed10f1afbcc5a215758cd1773edc3e8cef1be58d88bdcb4233b0167523b284cdd2efe4eedbf4d",
    "4cbbcceadb1d431d1564df1fe9feface86767d726dd7af30fccdcaed87187c243744ef7b37698555830349a0b91556de6cb39c9210d4f08091d8caccecfeef2d"
    "e21d62f134fe88feca7ad3ff793a909ae729129bc728b615de463ff0a37ffdfd53f00353c2b3cb0f643aad48b8b6dd795ecc052f2a315ef0c78fb96df7f8818f",
    "31cf9b9563d650a746ee1b6d3f213fb05ce394c1afb6eadd556a8394de7d078387e485e806fb2f57688e9662f599d9fdb9d593b1761f89cb567bbff4ab7f80bd"
    "77babdf7a6cf437c91e58f77d87c35b613ad146ab58b4db0f78bd38f299dbdc78d37cccacb98f7a346eebb33426765410b51957e866f76791dabfa91c1e269fc",
    "11fd56f1408ded32d5a6a8aa8747272f5bf33bd49bf137c1ce3bddce6f05ce2e0aad3acb458a91b37c6bb35e3cdb8b45c1ce2faa9dc7e19995d743439dbabeef"
    "e1803f2bd7587538d370aa5d4f62f134fe886eddae6b72524dfaa0805d77079e55bbfe6d0c1ed23f44efb49858b35391d70fcf03a298950bbec0d131e51ebbee",
    "acfceb8d5d5faeb192acd4585bf5af77422c6fff16060fc90dd1553194d4d72fd5448913c56649ec30528d13cf4b95fe7cbbf5b8de5870ed41e57a7dc32df110"
    "ff1343dd8887e856f27c43357a89fc6ccde77cf4d97d98c79d577f6036ce977762dd58f4f2329becfa8329bf37920bfbbc31f7f8832f30cf9b95e32f30fc911c",
    "117ddafd7af9e537941a0cd7ec2f78b1575fb7888d0fee19ead4f57df7aec707fdfa8ce71958a1ca741382426c9d407c423b109dc4b8a13f66b0513f1ec3fcae"
    "f3fd43e1a2c9f2abadfc818f2d578389e35c36e5ebb8280f04fd575ff4fae6754d9e7f927fa934e8fe7251c8f363aea8403ec81e3cc8f393e10ff1bffebdc8ea",
    "6b8258fc3f295fafbe3a4f779deb0fa63a3f80f488537ff16892b27f7ee0eaf18325c80739dd1f482d6ff3949583617e2d1b12b2e5c3c0cebeeca2f53de00ff4"
    "ef4576bed85e7fc00ae00fccf9035698813f7817fc81f3fd419d3e0a650207e956a81c5622ab7426c804735beef107305f3cfe8a8a4eff3e3f2166df5f35df6f",
    "15cfeefdbb2ece0b425e7f8a7890d727c3df6a7c9635d4a991fb2cadef9ca77d5bd4cdface5f62f89995d77b183c242f4437cca7d2cd2677b1c90ab4745118f8"
    "b6785ba828ac28909a77f8c68476217a6d885b6ad04255750408ff8f16f1e909f8884e263ec08a1385ff76c6ff9ffe0fce7970bc9fb86468312ca403c74abdee",
    "dff2a632d5bd039f8bfc440ff3bc59391e63f82339223a293fa18d004a354ea495123ae486b2590f7bc7b0dfd722ded4e28bb9d93f02fb7da78907fb7dc9f0b7"
    "9aff39c0f04772447452f65f1095349dce4809b56bd755e36f6f7eff8058fe67d2f96dac2cd002e5dc7dbe092c9ec61fd109e4f7fb929a457c0f79a029e2d9b5",
    "1fac156e67f8e0c561d09b97fced888f59eff069ca3df61dfaf1f8f6ebf5ee31b17d60707e1b0e6f1af341707e9b5bf1e0fc3632fc21be1f7f450517df5f61f8"
    "9995dbf73078486e883e36afb352e344514b6c39d50fec61f134fe884ec60f3cd5e4e619c86d1043d8e8075e877d00cef703e5c65af650e0946a41e4636d613b",
    "508e6d265db4ce676ef3b5f3341f7c952696d7ff16060fc90bd10df69f912451b7cef2c4623b5e755de75cc6ffb2da48a6ead1acfed0f61b5dc04072b6c6ff62"
    "ef09ccef3addee0bc5a31ced3fda3e0e743aedd861c717e093ac8bcef177ca77594e30ed20ab5f6bb6addf945bd2e0a33d4e5dbfb98dc5d3f823bab5bc5fad2d",
    "78fa92b2f55cbff7a34f205e77badd0e6ec56a0def5ae234130b24946c4e103a91a88bf236d07ff545af6fe4beb7f27d0c1e9213a2bf90af8f8a3ccd0a3163bc"
    "deb4d81eabeb359d95b7d189d1e6bc0db5f4a74d88dfe7d50f989dbfe552a972cc1788ac9eb3954a4c6e761a47f51dca3d7e00faf3f82b2ad38aef279fd72c37",
    "6949669cba3e278dc5d3f823ba95f8a02fa17e84806465ef3eadabafe6ff0b71febcda77b371fe2a97df3e1753cfb7027bdbf550257299cc270a2e5a7f0971be"
    "bee8f5ed3dc8c75bc4837cfcb4f0b4b22878908f27c31fecbdbee8f56d85585ee7bb183c2427441fbffe0665efaddb7d63c1b507155276bf38010fd1c9aebfd1",
    "7466f43d4e30ed24b90ef3cfff86387f5eedbed93ccef3f66ec1bb1fc884a54420261c26f36b427e8d02bbbf6876ff430c3fb372fa31060fc909d1c79dc3a03f"
    "3220216439bac20cef9f97fcbed5f318ca13f0119de0790c63c53a83ef7705ce57617c30af7ec2ecf86037b953396a65d7c347a9a024fb9bacbf134abae83c06",
    "e8dfe3df6b51c70fb79d1f80f1c3f82b2a307eb0070fc60f64f8c33ace51fd0a119be7fd0a06ef914ae9f39718b941379999d9f18f2de2ed60f134fe886e7dff"
    "f6505243c76fa3fdfecfca3fc17ecfabfd361bd727bca7ebed8b7040f006bce973c517ab305dce45df61847e3cbefd7abd7b466cbef70d0c1e9217a21be27781",
    "96eaac50699ccd2aefdfbb251ee2ffd30978884e7cbef75a72b6c7ef779fe5ff02f67f4a7876d9ff8bee79629d8ed7eaabde4a2626164ee3edd0b98bec7f0ff3"
    "bc53fb354e2fcceae15dccfb2c0daf6fe8feface86767d32bc3e2316ff4f3a870d9dc4e0d4f8df9ef39bfaf34637672ff40bece772079e5df6ff792b9429b6b8",
    "e8ead966a398db2a28ad68b412778ffd877e3cbefd7abd7b9b58fe1ece61c3e15958f709e7b05d9745c18373d8c8f007fb3fbefdd33a87735ece5f3316b37920"
    "67edfb83f3d7dc8a07e7af91e10ff67f7cfb71f6ff430c3f58070aebc45ef65e26f40cd6814e110fd68192e10ffd7bfc7b99d34772eb40e7651c31ab3c128c23",
    "a685a79545c183710419fe56c7118bb18ee8e61c20abdff55dc6e0217921ba711c21cb8ca4ecd31c5b2db0974c58aa0fef9b951fe859c49bda773ec7c7132f88"
    "6f0671c427bffb268c139cee0f526c395148c68e9bdbfc566c7d7d33d739bf5c77d179123dccf3d0aff5457fceff06cc335330cf3cda6e13e30398679e221ecc",
    "3393e16f356fc418ead4c87d7746e8d3f307cbacdca7ab4c39ca667ddc38b26d5d69ff256b14ac2b35f35d505552f07d5f97e1d9767e6837c5c5cf3ad5d3c4da"
    "61375995fc41a1b006eb4a17a81ff70b7cdf17e27d7dbb21de9f2d1ec4fb64f8bb24de2f8b6da12a5376c7fb39627ee107183c2447447fc12f0c3f741ce154d9",
    "50e4c603769f33bd8fc5d3f8233a29bf302a367bbf2b407d796f09e6059cee17e2c26e76337c90be64f96ee6b459e5334afac245f302e017c6bf9739bfb0472c"
    "0f34293e5745c0d3ddd9d97dabe3c724164fe38fe804c68f0349d93f5f74f5f801d87bc7db7ba9e56d9eb27230ccaf654342b67c18d8d99737c1de83bd57cb95",
    "bdf69e15c0de9bb3f7ac30037bff2ed87be7dbfb3a7d14ca040ed2ad5039ac4456e94c9009e65cb40e14ecfdf8f73217dfef13cbfbdcf6fbc14295e9260425cf"
    "7062b34f9fd53ee3de2df110ff1343dd8887e8c4cfa5d249d0d67981bda000f3024ef70fbbbbf148289c9292b55d5ee6b38d46f8d077e9a2f1c01798e7cdcaf1",
    "e718fe488e883eed7ebd5ce3445a2955fa79de524514149a15e412ba0965cd6dd6d7cf1962fee34d0c1e9233a21bfcc7402a29f56fdc90eed479833c164fe38f"
    "e864e2901bb1cd605c01fbcba6886797dfe83c0f04434c7227538bae2bc7213abf1b617917cd27ff0df3bc5939760d756ae4bed1ffd3d4fd062b9764b62e3055",
    "bdb3b0553f7b15c82b99c483bc12693cad2c0a1ee495c8f0ef619e87fd64faa2d7c32db0f326f1c0ce93c6d3caa2e0819d27c3bf87791eecbcbee8e78953b02e"
    "c8241eac0b228da79545c183754164f8f730cf9b95e311863f9223a2133c2f68b9434b838fce949a925835bccf09a6bd64f5f0266f7385e167567e6f61f090fc",
    "105d154949b564a59a2871a2d82c891d46aa71e279a9d2602a67303ffc52fdd1c28697c8cfd6f9e18f3ebb0f7ec1e97e41de897563d1cbcb6cb2eb0fa6fcde48"
    "2eecf3bae07b64ff078edbca80", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 67800U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_rjtipF_info.c) */
