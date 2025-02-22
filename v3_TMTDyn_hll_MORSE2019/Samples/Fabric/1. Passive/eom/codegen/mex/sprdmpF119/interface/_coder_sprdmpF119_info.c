/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_sprdmpF119_info.c
 *
 * Code generation for function '_coder_sprdmpF119_info'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sprdmpF119.h"
#include "_coder_sprdmpF119_info.h"

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
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("sprdmpF119"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(3.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (8.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v2.0 HLL/Fabric/eom/sprdmpF119.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (737612.2967013889));
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
    "789ced5d4b6ce3c619e6a6bbc12e8ab402dae6d1b4e96e5a2c5224b0645996eda001f4b6645b96646925d979d8a44449b4f99048ea61a5487cec2187f452f4d0"
    "438e49d014692f593441c1de7a6c81a687f612b4087ae9a197163d561249ef0e57b3e29a142d4aff0f2cc6d44fce37fcf79f6f66fe7990b8924a5f2108e26b83",
    "7f1fbd4d102f34865704f104a18a474b1f235031eaaf68e98f0cd7ba5c23ae22cf5dd1f07ea15d57045ea67bb27ac1323cbddbe6285a1c5cf024479f67531538"
    "862779b970daa409919604b64357479a1ac3d20586a37784fb2e92cce0824bdca73abf18aa867f471b74e524dfe608b121dd2b2e7bff05a1d967280ae6fdaf9a",
    "b4cf3ec63e1e83fed5f8ebde86c0d1de065965bc79b2467bd3f1cdb074ca57bcc9e14f85742176ca7ba34295d6ff8ed032e9edf8977c37933b3bde0449894cc5"
    "4b0b9c576a8a55ae99585ede58e20ceff33f4c791f37f93edfc0bccf0d2dfd39f2ebdba15172f32d350d95d494886b69424dff28ab6953bbef4cd39f1d68694c",
    "bbbfac5debf9d06aaa68d747bca6dfd6f07a6aea11d534fb6648b7c391965ef4fff59ae19a38bf4fd53485eec89bedc27bdc707d0f4fd5548536c5d2f7f0deb7"
    "8817c6e2a1fa57533be581ebb625d1cb0a1592f5a6c3859d70c4bbe7f72daf535e5910584ae879698ef5b20ce5e548992529afd094bc230b3de09f47987299f5",
    "4f63aacb0de2baf6d7d93b9f07ff12760e4f9545c1eb61f233eb774f62f03c067da951a483f95c7e75af906b9763db0745217f277aaf1cd9093893ca4160ae9d"
    "cadfadf5b7892997597f7bcc70ad8bdebe78905f6f87d4f4f9735e3fc3e46fd66edfc3e07b0cfacaa01d169798412746e449768991226d869553fca01b430f9a",
    "e14be3fdbb16f1f6b078a8fe11fc66f8efc591bdbc2fea06f31a0da63b9283edc027fff9ebe7d00e4c09cfa97620d36945c3b56467bd900b9c56e21cef4f1cb0"
    "c9f969073ec63c6fd68e5b98fc3d06bde576e0568d95f54e2fe1b0df9da54376f9dd53183c8f416fe07f696032528cd72f8df767d04fc6f2be6ea84be0fb5fdd",
    "7e03fafd6ee77bdf5e7db9236f6d0862bd21e513643d92487562c0f78b538f0984ef71e30db3f67ac2704d18eed3f58cc4ab1d55791889bcbcb88e55ff4861f1"
    "50fd23f6076a4c8fae3685817b78114b5d427c87f8a8f40cf4ebddcef39b2b27a7f9569d61a385e8c95e2b522f9cdc8903cf2f2ccfe3f0ccdaebbae19a38bf4f",
    "d530528d190c6a1a6e8dd7c7b078a8de0aafab16523d01f87c3ef0acf2f9b730781e83bed3a2e3cd4e45da28775704212be59757f60f88f9e173b7c45deff1f9"
    "ad1a234a728d41dfe308534e5bfd4f39b22d5eff1c06cf63d00f8c713830c2614d105941681e0a1d5aacb142f7b0325c0f60bd3f6f145c7974b16b7dc1c1043c",
    "5d7fb1f89ee6460fb19cf3fd02e5b32faf411c6756db03b3fd7b693bde8bc7fafdec56cf1f48fb7dd15c78d9179f9ff6e00bccf366ed7886c9df63d04faf5edf"
    "7af80d870d9a6dd2a2b37eba69db78e0aae19a38bf4fd50c7bbbc3f492e71518be4af752bc7c5e8ef72c962334a11cbadeda38618973d02feec23caefbdb83fc",
    "6993e1565b7ba56586aa065207b96c7a799ee2faef619e5fe07a3b10dfdcc4f127b5279506399a198738fef8541788fb388307717c7bf2ff02f33cf4f3c7bfaf"
    "393f4dd9d6cf9f14871fbc3847f62eaf1d98d1b8bfee3fece00faf6a23a7e3fecadda76e409cc7edfc2fb67ccd63460a84b960768dcf52e595eda21401fe07fe",
    "47059df77596ff191ef87f12ff33bce3fcff29f0bffbf9bf4eeeaf65564abbad352a2c4757c94c800ee436e787ff61de777caa0be27f5f1cd9c6eb8f1abfb78a"
    "f7a8eb79deb38817c2e2a17a17c5fb204e3f453c88d3db93bf0bf9bc4f8b82d4e6d0f7c0c5d3a7b20f57792d344a43af3bc6efb536cb0e5358af39aedf2e3549",
    "b1d6e6bd432b39dd6f3ffb35c4edddcff372d0cfedc54a9b8d8315a1df91d35c22bd2ccf11cf7f8c791ef6d5deef77f7d6dfff04939f597bbd80c1f318f486f5"
    "2f64b3c99e46189e144ff3a3162fd1e62b3223f076cd1b7f7d42b9747d4dc33d6c907c75d010d8b57ef3d509f8bade6a7f016b486d66d7c1f6e1371f8810d771",
    "7bfb90cb45e593ecb16f8d3ad8dddea50ae47a262d25e6a77d5030cf43bd4605f5c335dbda8bef63f03c06bdb1bde8084c352c8ae46982256599e619be3ebaef"
    "b2d6f75b1d4f1627e0e97acb7e34c670431772d07fcefe4b41bbe0f676a1bf955c89de6996b91c95a986cbb564bac765e6e83c1eabf5b980c9df63d05b1f37a8",
    "11a2c31a2b90f2e1f908c2d97d5e07702e8f45bcf9dfe70de7f24c130fcee5b1277fabbc9fc3e4ef31e8adf33e2fc8bbe46e464c0daa765d0f1b397c6e43c9b6"
    "798049e72c33124ff2847be701a2583c546f69fdced046cec77960be778a784e9ddbd00ab7335ce0b41cf0ed89fe767499dee870bbc4fcf03ad45f54507ffb81",
    "6de734c0b9ca383c540fe72a3f2a9e2a8b8207e72adb933ff4e7c7a7bae0faf36798fcccdaed590c9ec7a01f1bc759aab182a05ac0adf19c0c160fd55b6d075e"
    "542de61d596cd00838c8ff1fc2fa1ff7f33fd50866cb3c2b57f302176ff3c9152a1ed99aa375fb3318979dbdf53f67bbb6c5efbf89c1f318f406dea745513035",
    "6f31adfd5933d6ef9706c5a3ab5e95ed35ce3752ffc86697d0efffddf63ec4f1ddcefb3d3ed7eda79b5c64b3154b48ebd1ad5647f0cd511c5fc13c6fd68eb3f6"
    "3d479c5f98f5c3af60de475fe7ff34f2abf63d47624b4dcfca8eadf7975ae2e863a16e8df347b078a8fea271c2e16affa18d9ce7fdd0efefdc86febedb793fb0",
    "19af357cc1d47126be9292b3399eef44637314ef81fa8b0aea6fb76d8bef7c0783e731e81f88f3c7048e64f8b8b1bfdfb4581eabebfbdd12ef410ce86cbce7b7"
    "ff82759baee77f36cd55b913914e37a325795d68576bfb6d668ecee9817a3cbefca8df056debcf4ffedeca708faa44bbb53f9fc4e2a17a6bfb77752b39794e43",
    "e8fa2bb01ed3f57cde2da5a4047b524cf86b629eed1c67b6f87e2e0a7cbe587cfe0aecc7d204f663a1e536e13fb01f6b8a78b01fcb9efc21ae830aea6f2fc0fc"
    "ad453c98bf9d169e2a8b8207f3b7f6e40f7c8f0aea6f4bb6c5f1bf8dc1f318f4e3d769eab3b597d7cfb73a3edc9d80a7ebed5aa7a9fb8c73fea27cf28f7fc2bc",
    "edacf2bdd9fd59ebed9dbcafb892098ba995385fdeda0bf27b4102f87ed1f8fe5d4c7e66edf4430c9ec7a01f773e1b7af0508acfb26485d6ee9f95795cc522fe"
    "6b13f075bd2de7398d35a8e3e7ef535f3d86f1c0acb60f66c70302b9734c91e466b4bab27e2c95fd74faa0793a47e30105f33cd46b54503f7c09e6794de2c13c",
    "af5d78aa2c0a1eccf3da93bf82791ef81d95798f035d94ff210e34befc100772060fe240f6e4af609e77ebbead234c79ed3d7fb3665b3f1fb74fcca3692a8234"
    "4adddacf0f63f150bd9538e1c04697e107b03f6b8a784ef5f39b85def15a46ce06d73264217f5c10374f2bfc1cadcf87fa8bcab4ce617b0683e731e8c7f7e775",
    "9677efbc6e7a029eaeb7ab3faffb8c83719de0cf3e00be773bdfaf8b3b1299aba4f74bd47e998a4482815a9d06be5f38be7f17931fccebaaa258c45fbcf820cc"
    "eb4e130fe675edc95fc13c0ff51a9569c5fd67659c70d178108c13c6971fc609cee0c138c19efc15ccf310f74705f5c3ba63717f89e14729c4fd1fb23e98e12f",
    "c10fe05cb669e239c5ef24998c1c744f924c311d6db391081f5bcbeece513f1fea2f2ab319f7d7591ee2fea6d7f1683ee3605c2704fd79f7f3bd6f35195c8f76"
    "4b7e5fa4db657d4d3610abf7e7a83f0f7c8f0ac4fdc7970fe2feaa40dcdf1d7810f7b7277f05f33cd46b546633ee6fdf38e1a2f12018278c2f3f8c139cc18371",
    "823df92b98e7dd1af7c7f5e7cdfa218e07f5efb4f890977c2b344a436faaa9afa7a68aaca63779352544c7e609480af6074c1a770e6c7409e34e45817902f7b7"
    "072d8aaad6024d2a53c8e6c59cb0bcb9c9ee04e6a83d80fa8b0aea6f376debffc377da7178a81ebed3fea878aa2c0a1e7ca7dd9efc81f75141fdcd3723711fbd",
    "770ff3c366e33ebacf38d8cfffe9df5e06be773bdf1faf6ee6ead55c31b591d85dde2852b9d57a2d3b47e7fd00dfa382e37babdf73791e83e731e827cf0fabf7"
    "cdcabcb0d5feff9d09f8ba7e0af3474eb7077f87ef36babf3dd82e2e9f08817e8dac76bba53d7f20bd91b8b31f9f9ff600eaf3f85417d4ff566d6b1fe07b5faa",
    "c0f7bea686379245c183ef7dd9933fb407e3535d50ff4bce5d7ce8a2f302101f1a5f7e880f398307f1217bf25730cfbb755d10ce2fccfa216edd8dbe2ee8e9fb"
    "7ffcf7dba151eafbb19a1ebd6d5bfb7013530e8f416f681f445a6a904d3acff4e96883ae9c486e1d27e427e0e97aabedc30306d33ccac179e33ffdf27d1827b8",
    "bd9d086efad8b5ec5a2e5b4c16a5622958dfde6bc973b48f00eaf3f85417dcfa21abfef7b4e19a30dca7eb0ded004f8a7586af344edccaff36c789cc7c27f8dc"
    "66cec689cebef1f2de9f81ffa784e714ff9ff6baa90d3251abaffa2a99b8903f4eb4d7ba306f3073f5d9d1f101f152484d9fd7d2dbb6ed0fb886298747d3d458",
    "61f4a178b7ee0f8862f150bd957507231b39df3f807384a688e7d83971adb54ca1c5c6564f228d426e332fb762b14a627ef81eea2f2ab03f00f6073cec3d4cf4"
    "f3617fc014f1607f803df903efa332adf3e39ec5e0790cfaf1f3bf7aefdebdfb033213f074bd5df3bfbacf38c8f71f969e01be773bdf538d60b6ccb372352f70",
    "f1369f5ca1e291ad4de0fb45e3fb7731f9c1f971aa2816f117ef9c29383f6e9a78707e9c3df92b98e7a15ea332adf3e366659c70d1f8108c13c6971fc609cee0"
    "c138c19efc61fdcff8549769ed2bbe85c1f318f4c6718324d1a25c2459a63a344558ac6bf7b9759ea080c543f596fb110f18cef171c163d12e8c0bdcde1ef8fd",
    "27fd8d582292aaeff4f207fd2495dcd893613dd002d6e7819c856c5bf773dd704d9cdfa76a18496a92a244bb75dd4f128b87ea2f164f1cda661851d4adb4c439"
    "e707a1ebafbc01bcee765eef965252823d2926fc3531cf768e335b7c3f3747fbc180d7c7a7baa0bc1e867540daefb00e687caa0bac0372060fd601d993bf8279",
    "deac1d0f31f97b0cfa69b403b71869a8af8b24ebac1f2afb8eadef1fbe628d80f5fdb87503833fbc231b39bf9ff72ef0bbfbf97db5976613279dea712a58ee6d"
    "55457f80cf07617dff02d4dfa1d8b7ce13faf5383c540ffdfa47c5536551f0a05f6f4ffe0ae679d7f4eb29a1cd572587fbf539dbda83ef62f03c06fd03ed416a",
    "38a2a1c5283bb00c615fbfffaae1fa5e79544da5418e1610d9b59e276bb8260cf7e97aebedc1fd067334ceffce933720ceeff67620c1ef6423e1d26e9fe17a99"
    "e36695cbc8bba77314e75730cf433b800ada0edcb12dbe33a91f3e300047f62e8fe7ad8e0f63583c546f697c38b291e3eb73ee3e05fcee7a7e175bbee6312305",
    "c25c30bbc667a9f2ca76519aa3ef3b2a98e781df5141fdb0e828bf0f3fee0efcfe707ed73ee7ee24bf7f0afcee7e7eaf93fb6b9995d26e6b8d0acbd1553213a0"
    "0339588f7f9edf42add3b9efdc7e1c1ef0ba2ac0eb76e1a9b22878c0ebf6e40fbc3e3ed5055d7fb90bf1189378108fb10b4f9545c183788c3df9ff01f3bc593b",
    "9298fc3d06fd14f6cfdeea90e2e828e5c3a628540def758429b7bd3c5fb16dfef5390c9ec7a01f18e7706094c39a20b282d03c143ab4586385ee61656895cb3b"
    "774db9209e9effc1043c5d7fc1764075ab8758cef97539ca675f5e83f6c1eded83b41defc563fd7e76abe70fa4fdbe682ebcec9b83fdb4ff07d903f995",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 92224U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_sprdmpF119_info.c) */
