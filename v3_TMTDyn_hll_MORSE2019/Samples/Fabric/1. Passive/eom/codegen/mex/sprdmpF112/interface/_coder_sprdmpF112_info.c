/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_sprdmpF112_info.c
 *
 * Code generation for function '_coder_sprdmpF112_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sprdmpF112.h"
#include "_coder_sprdmpF112_info.h"

/* Function Definitions */
mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xResult;
  mxArray *xEntryPoints;
  const char * fldNames[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  mxArray *xInputs;
  const char * b_fldNames[4] = { "Version", "ResolvedFunctions", "EntryPoints",
    "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, fldNames);
  xInputs = emlrtCreateLogicalMatrix(1, 3);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("sprdmpF112"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (8.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF112.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737612.28361111111));
  xResult = emlrtCreateStructMatrix(1, 1, 4, b_fldNames);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.5.0.944444 (R2018b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char * data[34] = {
    "789ced5d4b6ce3c619e6a6d96017455a016df368da349b168b14092c5996653b6800bd2dd9d6cbd24ab6f3b049899268f32191d4c34ad1f8d8430ee9a5a71ef6"
    "98044d91f692451314eaadc716687a682f8b16412fbdb6e74a22e9f570352bad39a245e9ff81c578f493f30dfffdf9cdcc3f0f52d712c96b14457da3ffef93f7",
    "28ca531be428ea694a13979e3e41a162d65fd3d39f98f2865ca79e44eebba6e3fd4acf972451653baa96e139914d35058695fb199116d8f362ca92c089b4a8e6"
    "4feb2c25b38ac4b7d8f25053e17836cf09ec8e742113e7fa19217641759e19a8067f876b6ce924d71428b9a63ca82e7f3143e9f619480ff3fc4f4e689f7d8c7d",
    "5c26fd9bd1b7dd354960dd35baccb97374857527a39b41e5542cb9e3839ff2c97ce4547487a5326bfc1d6255daddf22e795e8aefecb86334237325372b096ea5"
    "2e97857a6c79d9bb24989ec7a888b9be4f4df83cdfc63ccf4d3dbd8b3ce4cf02c334f0ae9652db7a1ad3d2bb352d3d8beaa99ebf2fea79fdfa8cace7937abea3",
    "97b3a35fafe35087fa75faef945e6e2fa7ff1ed152573360d8e3484f2ffbff7bdd94a7ceafd33475a93df46a52784f99f20ff0344d596a323cfb00ef438b7841"
    "2c1eaa7f33b1b3d777e1a622bb79a944f3ee6430bf130cb977bd9ee575c6ad4a12cf481d372bf06e9e63dc02adf234e396ea8a7b68a187fcf40853af49fdd49c",
    "1a7293baa1ff75f6fe97febf05edc3d36451f03a98f226f5bb6730782e93be582bb0fe5c36b7ba9bcf36f722db0705297727fca01e993138e3ea4161f27695ef"
    "d4f7b78ea9d7a4fef684296f88d1ceb8905f6f07b4f4e5735e3fc3943fa9dd7e80c17799f4a57e7b2c2f71fdce8c2cd2fc12a7849a1caf26c47e7786ed37c757",
    "c6fbf72ce2ed62f150fd63f8cde0dfab437bb95f350ce6361bcc70241bdb81cffefbf72fa11d98129e5ded40bad508072bf1d67a3eeb3b2d4505d11b3be0e3f3"
    "d30e7c8ab97f523b6e61ca7799f496db815b155e353abd94cd7ed71f1f90f2bb6731782e93dec4ff4adf64b41cad5e19efcfa09f8ce47dc35057c0f7bfb9fd0e",
    "f4fb9dcef79eddea724bddda90e46a4dc9c5e86a2896684580ef17e73da610bec78d3726b5d7d3a63c65baced0738aa87554d54144f2eae23a56fd2381c543f5"
    "8fd91fa8701db65c97faeee1462c7505f11dea93e2f3d0af773acf6fae9c9ce61a558e0fe7c327bb8d50357f72270a3cbfb03c8fc39bd45e374c79eafc3a4dc3",
    "2915ae3fa8a939355e1fc1e2a17a2bbcae5948f304e0f3f9c0b3cae7dfc1e0b94cfa56838dd65b256563afbd22491925b7bcb27f40cd0f9f3b25eefa80cf6f55"
    "3859512b1cfa1c47987a12f5bfde11b178fd8b183c9749df37c661df08871549e625a97e28b558b9c24bedc3d2605d80f5febc5970f53184d43a8383317886fe",
    "72f13ddd8d1e6139fbfb05bd2fbeba0e719c596d0f26eddf2bdbd14e34d2ed66b63a5e5fd2eb096783cb9ee8fcb407f731f74f6ac7334cf92e937e7aeff5ad47"
    "5f705863f93a2bdbeba79bc4c6034f9af2d4f9759a66d0db1da4573cafc08965b69310d5f37adcb5588fc0987a187a6be38425c146bfb807f3b8ce6f0f72a775",
    "4e586dec169739a6ec4b1c6433c9e5798aebdfc5dcbfc0ef6d5f3c7313c71fd79e946af470661ce2f8a3534320ee630f1ec4f1c9947f1f733ff4f3473fef647e"
    "9a20d6cf1f1787ef3fb84077aeae1d98d1b8bfe13f7cff0fb76623bbe3febd7bcfde84388fd3f95f6e78eac79ce20b0afecc9a9861f656b60b4a08f81ff81f15",
    "74ded75efee744e0ff71fccf89b6f3ffe7c0ffcee7ff2abdbf965e29a61a6b4c500dafd2691febcb6ece0fffc3bcefe8d410c4ffee1f11e3f5c78ddf5bc57bdc"
    "f53c772de205b078a8de41f13e88d34f110fe2f464ca77209f775959529a02fa1cb878fa54f6e1f6de0a0cd3c0dbb6f17ba5c9f38314d66b8eeab72b755aae34",
    "45f7c04a76f7dbcf7e0b717be7f3bceaf70abb91e266ed6045eab6d4a4104b2eab73c4f39f62ee877db517fdeec1fafb9f63ca9bd45eaf60f05c26bd69fd0b5d"
    "aff3a7214ea4e5d3dcb0c58b35c592ca4922a979e36f8ea997a1afe8b887355a2cf71b0252eb37df1c836fe8adf617b086d467766d6c1f7ef7910c711da7b70f",
    "d96c583dc91c7bd69883d4768ac9d3ebe9a4129b9ff6a187b91fde6b54503f5c23d65efc1083e732e9cded454be2ca4159a64f633cadaaacc889d5e17557b5be"
    "dfea78b23006cfd05bf6a311861bb8908dfe73f63f06da05a7b70bddadf84af84e7d4fc832e97270af124f7684f41c9dc763f57dce63ca7799f4d6c70d5a84e8",
    "b0c24bb47a783e82b0779fd7019ccb63116ffef779c3b93cd3c4837379c8946f95f7b398f25d26bd75de17253545a7d272a2ff6a578db091cde7361489cd038c"
    "3b679953445aa49c3b0f10c6e2a17a4beb770636b23fce03f3bd53c4b3ebdc8646b099167ca77b3ecfaeec6d8697d98d9690a2e687d7e1fd4505f5b71f113ba7",
    "01ce55c6e1a17a3857f971f13459143c3857994cf9d09f1f9d1a82ebcf9f61ca9bd46e2f60f05c26fdc838ce52859724cd024e8de7a4b178a8de6a3bf0aa6631"
    "f7d062fd46c046feff18d6ff389fff999a3fb327f26a392709d1a6185f61a2a1ad395ab73f8371d9d95bff73962216bfc77d3fcc65d29b789f956569a2798b69",
    "edcf9ab17ebfd2af1e5b766b6caf73be99fa8736bb827eff1fb6f7218eef74deef88d976375917429b8d484c590f6f355a92678ee2f83dccfd93da71d6beeb88"
    "f38b49fdf06b98e731d6f93f77f1c7f3ef2da6b4f442fb7084c121c5cb4a431e7e34d4a971fe10160fd55f364e3858ed3fb091fdbc1ff8e39ddbd0df773aeffb",
    "36a3959ac79f384e4757126a262b8aad70648ee23df0fea282fadb6d62f19def61f05c26fd4371fe8824d09c1835f7f7eb16eb63757dbf53e23d8801ed8df7fc"
    "fe3fb06ed3f1fccf2785b27022b3c97ab8a8ae4bcd7265bfc9cdd1393df01e8fae3fea777e62fdf9f1df5b19ec515558a7f6e7e3583c546f6dffae61253bcf69",
    "08dc7803d6633a9ecfdbc58412e34f0a316f45cef1ade3f496d8cd8681cf178bcfdf80fd58bac07e2cb4de13f80fecc79a221eecc722533ec4755041fded1598"
    "bfb58807f3b7d3c2d36451f060fe964cf9c0f7a8a0feb6442c8eff5d0c9ecba41fbd4ed398adbdba7ebed5f1616a0c9ea127b54ed3f019fbfca5f7d9bffe0df3",
    "b6b3caf793eecf5a6feee43c859574504eac44c5bdad5dbfb8eba780ef178def3fc09437a99d7e8cc17399f4a3ce67430f1e4a88199e2eb1faf5b3328fdbb388"
    "ffd6187c434fe43ca79106b5fdfc7de6ebc7301e98d5f661d2f18044ef1c3334bd192eafac1f2b7b5e3679503f9da3f1400f733fbcd7a8a07ef81accf34e8807",
    "f3bca4f03459143c98e725537e0f733ff03b2af31e07ba2cff431c6874fd210e640f1ec481c894dfc3dcefd47d5b4798fa92ddbf5b25d6cfc7ed1373e99a92a4"
    "0c53a7f6f383583c546f254ed8b7d155f801eccf9a229e5dfdfc7abe73bc965633feb5349dcf1de7e5cdd3923847ebf3e1fd45655ae7b03d8fc17399f4a3fbf3",
    "06cb3b775e373906cfd093eacf1b3e63635cc7ffcb8f80ef9dcef7ebf28e42674bc9fd22b3bfc784427e5fa5ca02df2f1cdf7f80290fe67535e959c45fbcf820"
    "cceb4e130fe675c994dfc3dc0fef352ad38afbcfca38e1b2f12018278cae3f8c13ecc183710299f27b98fb21ee8f0ae28777ed8bfb2b9c384c21eeff88f5c19c",
    "78057e00e7b24d13cf2e7ea7e978e8a07d12e70ac970930f85c4c85a263547fd7c787f5199cdb8bfc1f210f79f781d8fee3336c67502d09f773edf7b56e3fef5"
    "70bbe8f584da6dde53e77d916a778efaf3c0f7a840dc7f74fd20eeaf09c4fd9d8107717f32e5f730f7c37b8dca6cc6fdc98d132e1b0f8271c2e8fac338c11e3c",
    "18279029bf87b9dfa9717f5c7f7e523fc4f1a0f19d160ff2abfe9d16cfbb5a1ae86829d5d4d2bba2febb6cdb3c01cdc0fe8071e3cebe8dae60dcd9ebc13c81f3"
    "db8306c3942bbe3a93ce677272565adedce4777c73d41ec0fb8b0aea6f2f11ebffc377da7178a81ebed3feb8789a2c0a1e7ca79d4cf9c0fba8a0fee69991b88f",
    "d1bb87f9e149e33e86cfd8d8cfffc53f5e07be773adf1faf6e66abe56c21b1114b2d6f1498ec6ab59299a3f37e80ef51c1f1bdd5efb9bc8cc17399f4e3e787b5"
    "eb66655ed86affffce187c433f85f923bbdb837fc2771b9ddf1e6c17964f245fb74297dbede2aed797dc88ddd98fce4f7b00eff3e8d410d4ff5689b50ff0bd2f",
    "4de07b5f53c31bcaa2e0c1f7bec8940fedc1e8d410d4ffe273171fbaecbc00c48746d71fe243f6e0417c884cf93dccfd4e5d1784f38b49fd10b7eec65817f4dc"
    "c51ffffc5e6098067eaaa5f5f788b50f2f61eae132e94ded83cc2a35bacee6b82e1baeb1a513c5a9e384dc183c436fb57d78c860ba47d9386ffc975f7f08e304",
    "a7b713fe4d0fbf9659cb660af1825228faabdbbb0d758ef611c0fb3c3a3504b77ec8aaff3d67ca53a6eb0cbda91d1069b9ca89a5da8953f99f709c6892ef049f"
    "dbccde38d1d9b75edffd2bf0ff94f0ece2ffd34e3bb141c72ad5554f291d9572c7b1e65a1be60d66ee7db6757c40bd16d0d297f5f436b1fd01d731f570e99a0a",
    "2f0d3f14efd4fd01612c1eaab7b2ee606823fbfb07708ed014f16c3b27aeb196ce37f8c8ea49a896cf6ee6d44624528acd0fdfc3fb8b0aec0f80fd018f7a8e09"
    "faf9b03f608a78b03f804cf9c0fba84cebfcb81730782e937ef4fcafd1bb77eefe80f4183c434f6afed7f0191bf9fee3e2f3c0f74ee77ba6e6cfec89bc5ace49",
    "42b429c6579868686b13f87ed1f8fe034c79707e9c263d8bf88b77ce149c1f374d3c383f8e4cf93dccfdf05ea332adf3e366659c70d9f8108c1346d71fc609f6"
    "e0c138814cf9b0fe67746ac8b4f615dfc2e0b94c7af3b8415158592dd03c571e98222857f5eb9c3a4f90c7e2a17acbfd88870c67fbb8e089701bc6054e6f0fbc",
    "de93ee4624164a54773ab9836e9c896fecaab01e6801dfe7be9c0588adfbb961ca53e7d7691a4e51eab4acb04e5df713c7e2a1facbc51307b61944140d2b2d09"
    "f6f941e0c61bef00af3b9dd7dbc58412e34f0a316f45cef1ade3f496d8cdced17e30e0f5d1a92128af07611d90fe3bac031a9d1a02eb80ecc183754064caef61",
    "ee9fd48e8798f25d26fd34da815b9c32d057659ab7d70f7bfbb6adef1f3c628582f5fdb87503fd3fdc431bd9bf9ff71ef0bbf3f97db593e46327adf271c2bfd7"
    "d92acb5e9f98f3c3fafe05787f07426e9d27f4eb7178a81efaf58f8ba7c9a2e041bf9e4cf93dccfd8ee9d73352532c2b36f7ebb3c4da83ef63f05c26fd43ed41",
    "6230a261e530dfb70c45aedfffa429ffa03e9aa654a3870b8848ade7c998f294e93a436fbd3db868305be3fcef3f7313e2fc4e6f0762e24e26142ca6ba9cd049"
    "1fd7cb425a4d9dce519cbf87b91fda0154d076e00eb1f8ceb87e78df0002ddb93a9eb73a3e8c60f150bda5f1e1d046b6afcfb9f72cf0bbe3f95d6e78eac79ce2",
    "0b0afecc9a9861f656b60bca1c7ddfb187b91ff81d15d40f0bb6f2fbe0e3eec0ef8fe677fd73ee76f2fbe7c0efcee7f72abdbf965e29a61a6b4c500dafd2691f"
    "ebcbc27afcf3f2166a9dce8573fb7178c0eb9a00af93c2d36451f080d7c9940fbc3e3a35045d7f998278cc8478108f2185a7c9a2e0413c864cf97fc2dc3fa91d",
    "694cf92e937e0afb676fb568797894f2615d96caa6e73ac2d49b2ccf9788cdbfbe88c17399f47de31cf68d725891645e92ea87528b952bbcd43e2c0dac7275e7"
    "aef52e8967947f3006cfd05fb21dd0dcea1196b37f5d4eef8bafae43fbe0f4f641d98e76a2916e37b3d5f1fa925e4f381b5cf6ccc17edaff03526afb48",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 92232U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_sprdmpF112_info.c) */
