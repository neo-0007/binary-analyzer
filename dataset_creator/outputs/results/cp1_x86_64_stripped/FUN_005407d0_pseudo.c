
undefined4
FUN_005407d0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
            undefined8 param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  code *local_a0;
  undefined1 local_98 [88];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = FUN_005bb880();
  plVar4 = (long *)FUN_004a12d0(uVar3,param_4);
  if (plVar4 == (long *)0x0) {
    FUN_0051f420();
    lVar5 = 0;
    uVar1 = 0;
    FUN_0051f540("../crypto/evp/p5_crpt2.c",0x7d,"PKCS5_v2_PBE_keyivgen_ex");
    FUN_0051f8f0(6,0x72,0);
  }
  else {
    uVar1 = FUN_00423da0(*(undefined8 *)*plVar4);
    iVar2 = FUN_00539240(2,uVar1,0,0,0,&local_a0);
    if (iVar2 == 0) {
      FUN_0051f420();
      lVar5 = 0;
      FUN_0051f540("../crypto/evp/p5_crpt2.c",0x84,"PKCS5_v2_PBE_keyivgen_ex");
      FUN_0051f8f0(6,0x7c,0);
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_00423e90(local_98,0x50,*(undefined8 *)plVar4[1],0);
      if (iVar2 < 1) {
        FUN_0051f420();
        uVar1 = 0;
        lVar5 = 0;
        FUN_0051f540("../crypto/evp/p5_crpt2.c",0x8c,"PKCS5_v2_PBE_keyivgen_ex");
        FUN_0051f8f0(6,0x6b,0);
      }
      else {
        FUN_0051f000();
        lVar5 = FUN_00537960(param_8,local_98,param_9);
        lVar6 = lVar5;
        if (lVar5 == 0) {
          lVar6 = FUN_0040d740(local_98);
          if (lVar6 == 0) {
            FUN_0051f1a0();
            uVar1 = 0;
            FUN_0051f420();
            FUN_0051f540("../crypto/evp/p5_crpt2.c",0x98,"PKCS5_v2_PBE_keyivgen_ex");
            FUN_0051f8f0(6,0x6b,0);
            goto LAB_005408d8;
          }
        }
        FUN_0051f050();
        iVar2 = FUN_00538a80(param_1,lVar6,0,0,0,param_7);
        if (iVar2 == 0) {
          uVar1 = 0;
        }
        else {
          iVar2 = FUN_0040aa90(param_1,*(undefined8 *)(plVar4[1] + 8));
          if (iVar2 < 0) {
            FUN_0051f420();
            uVar1 = 0;
            FUN_0051f540("../crypto/evp/p5_crpt2.c",0xa1,"PKCS5_v2_PBE_keyivgen_ex");
            FUN_0051f8f0(6,0x7a,0);
          }
          else {
            uVar1 = (*local_a0)(param_1,param_2,param_3,*(undefined8 *)(*plVar4 + 8),0,0,param_7,
                                param_8,param_9);
          }
        }
      }
    }
  }
LAB_005408d8:
  FUN_00537a40(lVar5);
  FUN_005bb910(plVar4);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

