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
  const char * data[29] = {
    "789ced5dcd6fe3c615a793dd4db640da45d3e6036d533b5d6c9b26b16449b6ec9c2cebc3966d5992257fa6a9444994449b5f262559f6494080a2871e72eca107"
    "1f7bc821c8a94702bd1439374d5114a80f3d04fd0b82a2874ae21b5be26a56cc6a4499d40c60fc34f3c8f90d9f87ef0ddf0c87cc4c3c31c330cc771923e9ff35",
    "f015c83f027c81e94f66f90ce03ba63c4af7997b7de721f91f008bb254e39a352323f012b753170b9cdace48acc8dd545392455e62a55af642e11895d364a1c1"
    "95ba92322f70595ee4b6e59ecc06dfce88b11ed14da623eafc0e57b9e269a62e326a55bb6daed09b617af4f37bccf5dfb3a89f20463f8fa00cc93f8c7e14fec0",
    "b3a771aae6d1b485a06fd9e78970da694d563c0bf3b3996c3c167b3fb69d4c798a7289f3a827355e89cd8b37ed6cde1bdc8e0716dbf931a69d0f01dfe8bbe0f0"
    "6a175aeb80906722900764a2900764629007643600e3809b2047f811946f19a843be0579e6d780db508ef209381ef22dc83339c01d2807d4a1bc9504791e3065",
    "e02a42286fa1bc62601eca75286fa1f3d3701ca08ece873cc302eec27108a1bc05791d90c94039a00ec864e13c401d90d98372c01620b30fe5802d401d951f40"
    "39a00ec81c4239e8eb1aae278fda0ba8a3eb02fd5ca37c01ea477806e743be057885e4450367cb9007cc035e01ea80d780b315381e300f7805a8035e03ce56e1",
    "78c03ce015a00e780d38cbc3f18079c02b401df01a903981eb03cc8b9007bc02bc066424e001cc03b600af00af0119198e07cc03b600af00af011fc1ffc50b98"
    "0254005b809f005e013e82ffd767803ae06a7d15d9a13ce0f3dacb974c79e6e6b897ba656a896ff0258e21c5f7c094bfe57bd02d2bc9f582c0ddfa83cf46e48b",
    "63f98c3224ff30be7dd875092955aea8ac38dbf15d9a2711ca6e87d63cbb3eef42b0e0a9c9b250909b1e4e143c025ff0886c4d600b1e59d13ca0a7b68730d230"
    "7d59f5136644e921f332fc6abdfe9df49721fbf88c342d7c4d4c7d56fbdf0f317ca8ff21f9f279babc7718580a6e3484dd95c8f2f2b6bc57ec69476a08cfb076",
    "3098bc5df53bfd3e5630edb3daef5e30e55142e3bd477da56faf1af8e4c6ceb730f55bd5df4f31fc487f48de19edaaf37cfb61419558619ed7d6eabc508b4bed"
    "c7054ee58b13f3037f1a91ef10cb679421f9b7ee3f9dbf77bb5af3bc8bd4e631ab6d5eb4d11ffcecdfffa0fee0aefa83d7307ca81f2279b271160e95371acbd9",
    "74e0a21815255fec58d8a0fee0aef8833ca67d64fbdd2f89d9ff590c1fd217929becbf566405aea9846551616b7cdb224fcafeeb23f21d61f98c32242763ff9f"
    "52db24facf179fbffa37ea07c6c467971fa89614f5f8f0325aac0423dbc10b7f9d0da597d7a81f982e3ff0c12aa97ef77d0c1fd217929bfc40fbea8d72a7c681",
    "b6b07c46199293b1ff6d75414fa1f6de1d7c76d9fbcadada4529e88f468f9bbec6c656968f1ca9bb2e1af73b657e2f8f6907d1fe45308e7f1fc3f7a82de99429"
    "f27977b67752f6fb8f23f2ad63f98c32241fd5cf77f5646b3f687df3e7256ab79d6eb70faafbdc52269d59dccda6eb8791ade37d39b317768fdd76eafd4be3f6",
    "346e4fe3f683f88c342d7c346e4fa6fe519fc353a63cd373dc4c8f9c901f982b0bb5ee4f5bfb5d2b412c5ef33a860fe90bc907c4ed59355a716cbc666cfd041b"
    "afefa8cb567bfff077ffa4f6dee9f6debb731e14b3bc78bcc5ef96a25b9162a65cbea0f1f929ba8f993e7b8f7bdeb0aaaf574c79a6e7b8991e39af49c610b5d6",
    "59a9efdcb87c12cb679421f9738d07ca7c932b2972bb7b78faf4656f9cefcdd89bd4ce3bddceaffb4f2f3267155e0867c3a7bb676b95ece95e3442edfcb4da79"
    "1c9f557dbd6cca3337c7bddc2de3b532df7e9ca93ad5ae6f62f98c32241fddae1b7a4213f3d4aebb83cfae75f78d332eaa348adacae1b95f96535a66c17f74cc",
    "b8c7ae3b2bfe7a6bd7e7cabcaad5cabcadfd4fcf138bdbbf85e1437a43f2b61a72edcbcf956555906525273738b52cc8e7b962e7bdd9d1c7f5e6846b0f4aa4d6"
    "5be64d79331f928f12e7836ef40cfdd91acff9f4abfb741ef7aefa03abe37c6d2bda8c462e2f539b4d5f20e1f386d3a1056fd43dfee06bccf956f5f81b4cfd48",
    "8f483eeefb7aeed907e4aa9ca07416bcd8db5fd7893d1fdc33e5999be3eedd3c1f74f2139e67e0a512d78c4b3562eb046243da81e4249e1b3acf0c36f68fc774"
    "7ed7f9fe2173a1f0e2e2d9eec1025f2805e2c7e95462a1e1a23810bd7ffb537f7ff3ba26ce3fccbf14ab6c67b9288df36310251a0fb2878fc6f9c9d44fc7fffd",
    "d745b6bfc6898dff87c5ebdb972eb24de7fa83b1ce0fa07e24b47f780c4dd93f3fd07afce0218d0739dd1fa8675ee584d7022171291594528543ffd6bee6a2f5"
    "3dd41ff45f17d9f9627bfd012f517f60cd1ff0d204fcc1cfa93f70be3fa8b047c1a4ff60e72c5808d5c28b6c32c005d2ebeef10774be7830a2d4d7ffaef3c4ec",
    "fbb78df78fca67f7fbbb2e8e0bd2b8fe18f9685c9f4cfda38ecf52a63cd373dc0ce392f7b698dbf59dbfc5d467555fbfc0f0217d21b9693e955514e1628d9758"
    "f522d3f56db1ba54acf1b2446adee17b43da85e465e0cd5559a924dceefffc9711f9d921fc484e667c8055e724f669fef27f749f07c7fb894b8e9543d28effb8",
    "56a9f8d6bd896469ef60c1457e42c79c6f558fc798fa911e919c949f309e00726541666b39b4c90d63733fd48fe9fbbe23f28d6d7c7167de1fa1effb8e938fbe"
    "ef4ba6fe51e33f0798fa911e919c94fd97e4da0ebb9354e3ed5bbbd236fef6c6f70f88c57f86eddfc66b122b31ce7dcfd78e7d5a21bedfd1d424c6f7340e3446",
    "3ebbde073b0bd59362e0e230e0dd557df5f002b7d2107718f7d8777a1f0f6e7f7fbf7b4cec3d30ba7f1b8ecf28a3fbb73d2f9f91a6858feedf46a67e3abe1f8c"
    "28e1c6f72d4c7d56f5f6230c1fd21b920f8cebcc97055936025b4ef5037b583ea30cc9c9f881770dbd79ba7aeb8e216cf403afd1f7009cef070ad5a5d4a124d4",
    "4a19598cd6a50d7f21bab6e9a2753e77365e7b97e6835b3bc4e2fa3fc0f0217d21b9c9fe73aa2af7adb3cc8fd88e6fbbaef34e8effb57623b992c7b0fa60fbcd"
    "2ea0ab395bc7ffb2fe84ceef3addee4bd9a334eb3bda38f6371af5e86163c12f6ef22edac79f7e7f653cdf5f19fa1d75ae6db414e77e477d6cdfcf7a2aee079a",
    "b2fdfb59adffccff8b8edb9d6ebfe3de9395fa45c82f79fdde9df3da42b4c8350517eddf43efe3c1edefef77ef111bb7bf81e143fa4272d3b85d62d50a2f15ab"
    "a7a3da7b73c2b5032552ebb87e35840fc9898fdb6f3467741c1bedff8befedfe95daff31f1d965ff2f9ae7f1153656ae2c7a8bc9a89c3989d583e72eb2ff3ae6",
    "7ca7ded7b87e61b51fbe88b91ef47dae37fa4adf5e35f009e07bc4c6ffc3d6efa008be53c7fff6ccfb97eb524fccbe936cb457ef479ed0f1bfd3edfff2593099"
    "3d13228ba76bd56c7a3d533b8b448a31f7d87f7a1f0f6e7f7fbf9ba5eb77a0fc4ec6efe9fa9d9b342d7c74fd0e99faa9fd1fdcfe71addfbc2beb76ccc96a1c88",
    "aedb198c28d1753bf6f0d1753b64eaa7f67f70fb71f6ff134c7d56f5f50e860fe90bc907ede3d0bfe5405c4a096c9183e351fb9411db37e9fd1c0a43f8919ce0"
    "7e0e03d53a81ef7ff9cf17e97a1fa7fb8bedcdade2d1596a25749408a89a4fe17d8de0a68bf673a0f7f7e0ebb2d61fe75df71c31a938127d8e18179f91a6858f",
    "3e4790a97fd4e788e95847b47463ff47dd0f6e0ec387f485e4e6e7084de3d4da3e2bf0a50c7fc985d40a1c37293fa08fc837b6fda1068f279e52df04c6115f7c"
    "fe2a7d4e70ba3f48f0857866337aac6c88ebd19595b574e3fc72c545ef05e898f3e97ddd9ffadf0f5ba5f3cc504ee79907234a749ed91e3e3acf4ca6fe51e346",
    "9c29cff41c37d3231f9f3f98e3b58ebc5da9c0d8dc1f578f6c5b57dab9c83243d7955ad94faaad29ba2f9ccbf8ecb2f78bcd84103b6d944ee24b87cdcd92ea0b"
    "489925baae748aeee34ea2fbc2d1f17e7fbbe9787fb27c74bc4fa67e978cf70b725d2a698cdde3fd3431bff0130c1fd223923fe5176083bcb0d0d60de3dcfd82",
    "f6b17c46199293f20bbd6ab3f9bb61dfdca3df8374bc5f8849dba9b5d0c1ce252f3693274a494cd6762e5c342f40fdc2e0ebb2e617f688c581ac7cff977e0f9e"
    "7e0ffeaed85fbbf9e8f7e0c9d44fedfde0ebb2d41f5bf6da7bfabd77fabdf7bb627fede6a3df7b27533fb5f783afcbdaf87e9f58dce7c7183ea4472437c77da4",
    "12d78c4bb55d4e90958e7c52ef19ebcfc987eaca9bf2663e2427be2f559f066d9d17d80b48745ec0e9fe617b3b160e8612ea66795bd4c454b51a3a5cb874d1f3"
    "c0d798f3adeaf1634cfd488f483eeefb7acef84270b113e7cd1565a9c6f292964307a1a8b9cdfdf59a23e63fdec4f0213d23b9c97f74b5926897092077eabcc1",
    "2e96cf28437232e3905bb54de0b982be5f36463ebbfc4663d91f08729b5bc97264a5761c6477b7c3bce8a2f9e4bf63ceb7aac7a629cff41c37d3231fbbdfe0b5"
    "9cc65724aed4ef2c6ced9f7a91c6952cf2d1b812693e234d0b1f8d2b91a95fc79c4fdf27eb4ffdfd709dda798b7cd4ce93e633d2b4f0513b4fa67e1d733eb5f3",
    "fda97f9e3841d70559e4a3eb8248f319695af8e8ba2032f5eb98f3adeaf108533fd2239213dc2f68aec1aadd8fcee414552e99ae278f692fd97e781bb76961ea"
    "b3aabfb7307c487f48de5649ae6dc9726559156459c9c90d4e2d0bf279ae58e58aa7747ef899fdc718363c437fb6ce0f7ffad57dea179cee17b4ad68331ab9bc",
    "4c6d367d8184cf1b4e8716bc2ef81ed9ff0190cb3438", "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(data, 64216U, &nameCaptureInfo);
  return nameCaptureInfo;
}

/* End of code generation (_coder_rjtipF_info.c) */
