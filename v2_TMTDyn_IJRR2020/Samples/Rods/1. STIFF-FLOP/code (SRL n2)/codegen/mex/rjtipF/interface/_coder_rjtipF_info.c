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
  const char * data[31] = {
    "789ced5dcd6fe3c615a793dd4db7405aa369932cdaa6bb69b0699ac4fab465a71fb03e6dd992f5e90f296d658aa224dafc90497dd927012d8a1e7ac8b1871e8a"
    "9c5a208720a71e05f452e4dc344551a039f410f42fc8a18752a2c61619cd8a6b8d28937e032cc6338f9adff0ede37b33ef0d1fa9a5787289a2a8af515ad97c7d",
    "69583f3f6a2f8fea67287d31d29746b5c7d046e52e7547f73b44fffda86624b1c9769b5a83e74476af259459596d88b4c05e0e5391044ea4c566febcc15232ab"
    "487c9bad0c29558e67f39cc026a4b1c636a73684d818e9b231200dfe0ed759e634d71228b9ae5c4d971f6f5063fcf91de6feef98e44f00c39fe5511fa2bf1bfd",
    "79f81dd7bec2ca8a4b513c01efbad7156195d3a6d47079561ee6f2f158eced5822957631528575c9274dae115b112ee7f907cc3cee999ce75730f3bc3faa37c7"
    "3b7ba551736d540746f5ba56f7d35add8b8eea519bca6ca2f91e63e66396afcf61e6bbac52067d72856b731596228577cfd0bec2bb37ecab48ad32cf5ec9cd87",
    "33e2c5b1785a1fa2bf1b4f1c0d45272d4b3599161e0e645c712583f94430e4ca7add9e40d9d59424be2c755dacc0bb78aeec12e8264f975d5243718df8a44a92"
    "56a6f1cbac3c196b54ee5f4a5aefa5af663e095a87a795db82d7c58c6756febe85c143f287e8eb9d4c75ffc8bf16d86ef3d98dc8fa7a42da67c6e6919e82336d",
    "1e14a66dd5f8767f8e1b98f99995bb670c6d54905d58d6f5bebaa9d58f2ff57c0f33be59fe7d0f838ff887e803ab28af70eaa24216697e8553422d8e6fc64575"
    "59c1ca1cb3303bf0e719f18eb0785a1fa23fb5fc0cfebd39e49aeb4dc43697916d2b8285f6e0fbfff927d8839b6a0f5ec4e0213944f454fb2c1cac6eb7d7f319",
    "ff391315446facc86f833db829f6e018333fb272f74362faff21060ff10bd10dfa5f61689eed36c292d0a09b9caa9117a5fffb33e215b0785a1fa293d1ff5f62"
    "db22e4e7e38f5ef83bd88139e1596507ea95865c3cba8832b540241138f7b5e860663d0476e076d981773649c9dd373078885f886eb003eadd6bfd76f503ed62",
    "f1b43e4427a3ff55768d2405f4bd33f0acd2f7b550e8bc12f045a3c5aeb7bdbd9be7220539eba075bf5de200ef61e66156be70fa0df97bdce39d9bd94ded8f0d"
    "adeea1f63ba3fa475add27e7f77f1633bf659532e8533871d85e94beffe38c785b583cad0fd1675917b07cb525ba544e8dc9cd31665e04f5d2db91c7e0dfb1bb",
    "9ea7e9ed50b173bacd1d24c32d3e14122381f45ec4397a1e9e5f7dd1cbdb6bc4fc3a0f3078884f883ec1af43cb2b48cbcfaee78d05371f5448f9f57353f0109d"
    "ccbafe4d8d6f239919bf8f63cc3c09faf53ff8d59f40efdb5defbb57b7d7d6c39d43af3bd4e9f0ee06ef8fd42e1ce4cf01bdaf2f38bd8fdb5f98e5d31b183cc4",
    "274437e87dbad1e0cf734325166b894c9393c4b898e669061d159b16ef363bbfaf4f991fa25747b328d569b1c25f9d33faeb8cf8e529f8884ec62ee0d98a1c86"
    "16ca99afb30a7e20bbdb89c4ce2e53384b6f040b49bfac781b9cb71dd871d0fe009eefc9f7654e1e571cb77fb8ae9f08f60f936b5460ff600d1eec1fc88c0ff1",
    "01ade8e203d48f3787d56646aba99f68750fb57f3aaab396c50718497bd103e203d3f6992aa7203ee0183cabf47c23df3d09a49ae9b5408acee74ef2f2d63923"
    "3a48cfc3f3ab2f37333e80b43cc4079e6e7dafc9ccf87d1c63e649506ede87f5bdfdf5feba9c50e80c932c1c960b47e55068cd5fadb1a0f76f9dde87f8805620",
    "3ea015880fd8030fe20364c687e77bf27d9993c79b121f20b77fb8ae9f08f60f936b5460ff600d1eec1fc88c6f97f800eeffdbac7ce1fcef283ef0f27867ef17"
    "9bda1fa37c42bd12b138c05dcc3c9655caa0af217586d9a6200ef0e4f707877cb2743fd9fbe22f6bb0ceb7bb3e3fac1fb06bb94c6e359bcfb48e22bbc50329b7",
    "1f768e3eb7ebf38bf37f403ea0ebcd07f201e9e709f980ec8107f980c88cff21e6f766f99836b4a9b1eb96c6e884ecc0a32adf1cfe69a9dcf592c4f240bc84c1"
    "43fc42f4897e9d68cdb67920e62627d83c40037659aaefeffff65fa0efedaeefdd7b9d8090e784e22e97ad4477234cae5a3d77901f079ee3c9f3c7e97bdc7ec3",
    "2cbf9e37b4a9b1eb96c6e89c226a4bd4e62053b87df3fda4b0785a1fa25f6b3d50e5ba6ca521a9e2e1d2f1cbdaf3020f620f40cfdb5dcf6ff94ecf7367358e0f"
    "e7c3a7d9b3502d7fba1f75501c17f4fce4f9e3f43c0ecf2cbf70df1f585629833e4ea972ea76a66e57bdbe83c5d3fa107d76bdaef16901f17bd0eb73c4b32a9f",
    "7ffb8c8d36da8cb271d4f149525ac9797c8522e51cbd6e2fffeb955e7f54e564a559e52c95bffe3131bffd2b183cc4374457d950526fbf5495645e921a25a9cd"
    "ca555eea9498c1777b16779ebf7f4d3c34d6b1a16dc443f499ceff6a62f404fe59eacff9e0d3bb10c7bda9f6c0ec3a5fd98d76a3918b8bf44ed7eb4f7adde14c",
    "d0e38e3ac71e7c8ef9bd593efe1a333ee223a2cffbb97ef4e40b4a75966f0c0ebc582baf5bc4f607770c6deaf2ba3b97fb83417bc171064eacb0ddb8d824764e"
    "2036651e884e62df30d83358281faf417cd7fef62177dee084d5b3eca1872b57fcf162269df4b41de40782e7575ff4f2e6768c9f7f9a7d61eaf4e0b828f8f931",
    "352ae00fb2060ffcfc64c687f5bffebec8ca6b9cd8fa7f9abf5ebd7581eedad71ecc353e70f97eb8fa874be394f5f181de6bf7ee833fc8eef6403e73374e38c5"
    "1f14d6d201315d3ef2ed1e280e3adf03f6407f5f64e3c5d6da8341924fb00766ecc1655a4f2bedc1eb600fec6f0f6a742190f21dee9d05cac16678954ef9597f",
    "66cb39f600e2c5936b5474f2f7d93131fdfeb4fefe59f1ac7e7fd7c17e41f0ebcf110ffcfa64c69f757d9636b4a9b1eb962887bcb7455d9deffc0d663cb3fcfa"
    "01060ff10bd127e5750b71222d1bd214918a3b2c3a9f1b3d051fd109e67b9ac4ce057c1fbaf7c9ff20cf83ededc4054b4b4171cf576cd66ade2d773255d93ff4",
    "38c84ef431bf37cbc722667cc44744276527b41d40a9ca4b74b38492dc5016cb61bf08effbce8837b7f5c58d797f04def79d271ebcef4b66fc59fd3f8798f111"
    "1f119d94fe17a5e61ebd9792e3eaa35d5395bfb5fefd4362fe9f69f9db3845a445cabeeff9c6b1785a1fa213f0ef0f38b588f53df881e68867d5fb6067c1564a",
    "f09f1ff9dd59d9db0a7bd88db6b0473947bfc3733c79fef3faae0be46fc3e1697d90bfedba785ab92d7890bf8dccf8b0be9f5ca3825bdff730e399e5dbb73178"
    "886f883e393f7f959724cdb165573bb08fc5d3fa109d6c7efe21df866b080bedc08bf01e80fded40b9be963e12f966252709d196b8ed2b47433b0e3ae77363fd",
    "b537291edcdb23e6d7ff26060ff10bd10dfa9f95654977cef278c6793cedb9ce1bb9fe57d449b21597a6f547badf6802869cb374fd2ff51f437cd7ee7a5fcc17"
    "32b4b7b05df4b5dbade851dbe313763807e5f1b7cb77598e31f320abdfc97d7fe5390cdeb24a19f4c9acaab41aecc2d6efb3dafb5d2c9ed687e8b3fbfd469cb2",
    "fcbb5abdffaefc1bd6ed76d7df71f7c946eb3ce813dd3ef75ea7e989326c977750fe1e788e27cf5f2f776f115bb7bf6c685363d72d8dd10deb7691966b9cc8d4"
    "4f67d5f7c6829b072aa4ce71fd6c0a1ea2135fb75f724e131c0bf5ffb36f65ff06fa7f4e7856e9fff36e27be41c7aab55537938a4ab993582bd07190feef637e",
    "6fd7e7dad2ef2f52af6e6af5e351fd16b1f5ffb4f33bc8836fd7f5bf3571ff6a4b1cf3d90f8a85faeaedc86358ffdb5dffaf9f0552f9333eb27a1aaae7335bb9"
    "e65924c2c49ca3ffe1399e3c7fbddc3d84f33ba3fe1be9bf87f33b97e5b6e0c1f91d32e383fe9f3cff799ddfbc29e7768cc5ac1f08ceed4cae5181733bd6e0c1",
    "b91d32e383fe9f3c7f9cfe7f0f339e597ebd81c143fc42f449791cf42907e2629aa71976743d9a5f63c6f92d3a9f43790a3ea213cce73091ad0bf8fe97afb30a"
    "e77dec6e2f123bbb4ce12cbd112c24fdb2e26d70de7660c741f91ce0f99e7c5fe6e471c571fb8845f991601f312f3caddc163cd84790197fd67dc4ed3847b476",
    "a9ff67cd07f7088387f885e8c67d84a2b072f380e6b94a8ebb6083726d74dda2ec407f46bcb9e5879abc9ef812fb16b08ef8f8a317609f60777b90e4caf1dc4e"
    "b4d8d816b6a21b1ba14cbb73b1e1a0f702fa98dfc373ad2ffaf7073621ce3cea8738f3e41a1588335b8307716632e3cfea37620d6d6aecbaa531fafcecc1234e",
    "19d0d54179ca6279dc2c5876ae747093550ace959ac927a5720af2c2390ccf2a7dbfda4df2b1d376e524be76d4dda9c85ebf985b8373a5b7e8391e14c80b07eb"
    "7dfdbc61bdbf583c58ef9319df21ebfdb2d4122b0a65f57a3f43cc2e7c178387f888e85fb20ba30479615ee50d65df7c4107583cad0fd149d98571b659fcddb0",
    "2feec0f7206d6f176262221d0a1eee5d70423775d2a808a9e6deb983e202601726df9739bbb04fcc0f64e6fbbff03d78f81efc4dd1bf56e3c1f7e0c98c0ffa7e"
    "f27d9992c79eb5fa1ebef70edf7bbf29fad76a3cf8de3b99f141df4fbe2f73ebfb03627e9fef60f0101f11dde8f7112b6c372e36b32c2f3506f445bd67dcbf26",
    "1e1aebd8d036e2213af1bc543a0e5a1a17d8f78b1017b0bb7d482462e1403029ef54138222a4ebf5e091e7c241fb81cf31bf37cbc75f62c6477c44f4793fd78f"
    "b42f0433033f6f8991c426cd894a095d84bce616cbeb672c31fbf1008387f88ce806fb31e44a52ede34774bbc60db2583cad0fd1c9ac43aed8b6807d05bc5f36",
    "473cabec467bdde70fb03bbba96a64a3590cd0d94498131c144ffe07e6f766f9d835b4a9b1eb96c6e873b71b9c5252b89ac856f4c6c252f9ec33e0573289077e"
    "25d2785ab92d78e05722337e1ff37b789f4c5ff472b8057ade241ee879d2785ab92d78a0e7c98cdfc7fc1ef4bcbee8e3c449381764120fce0591c6d3ca6dc183",
    "734164c6ef637e6f968f05ccf8888f884e305fd0a3362d0f3f3a536ac852c5703fc798f99295c32bbf4d0f339e59febd82c143fc4374952525559395aa92cc4b"
    "52a324b559b9ca4b9d1253679953880f3f517eb465c313f867697cf8834fef825db0bb5d5076a3dd68e4e222bdd3f5fa935e773813f4b81df03db2ff03c72b77",
    "94", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 75608U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_rjtipF_info.c) */
