
long FUN_00428500(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8 [25];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_158 = param_4;
  local_14c = param_3;
  lVar2 = FUN_00417730(param_1,5,&DAT_0091b6a0);
  if (lVar2 == 0) {
    lVar4 = 0;
  }
  else {
    pcVar7 = *(char **)(lVar2 + 0x20);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "CTR-DRBG";
    }
    lVar3 = FUN_00539fd0(param_1,pcVar7,*(undefined8 *)(lVar2 + 0x38));
    if (lVar3 == 0) {
      FUN_0051f420();
      lVar4 = 0;
      FUN_0051f540("../crypto/rand/rand_lib.c",0x23b,"rand_new_drbg");
      FUN_0051f8f0(0x24,0x90,0);
    }
    else {
      lVar4 = FUN_0053a160(lVar3,param_2);
      thunk_FUN_005399a0(lVar3);
      if (lVar4 == 0) {
        FUN_0051f420();
        FUN_0051f540("../crypto/rand/rand_lib.c",0x241,"rand_new_drbg");
        FUN_0051f8f0(0x24,0x8f,0);
      }
      else {
        pcVar7 = *(char **)(lVar2 + 0x28);
        puVar5 = &local_120;
        if (pcVar7 == (char *)0x0) {
          pcVar7 = "AES-256-CTR";
        }
        FUN_0041e290(&local_188,"cipher",pcVar7,0);
        local_148 = local_188;
        uStack_140 = uStack_180;
        local_128 = local_168;
        local_138 = local_178;
        uStack_130 = uStack_170;
        if (*(long *)(lVar2 + 0x30) != 0) {
          FUN_0041e290(&local_188,"digest",*(long *)(lVar2 + 0x30),0);
          puVar5 = local_f8;
          local_100 = local_168;
          local_120 = local_188;
          uStack_118 = uStack_180;
          local_110 = local_178;
          uStack_108 = uStack_170;
        }
        puVar6 = puVar5;
        if (*(long *)(lVar2 + 0x38) != 0) {
          puVar6 = puVar5 + 5;
          FUN_0041e290(&local_188,"properties",*(long *)(lVar2 + 0x38),0);
          *puVar5 = local_188;
          puVar5[1] = uStack_180;
          puVar5[2] = local_178;
          puVar5[3] = uStack_170;
          puVar5[4] = local_168;
        }
        FUN_0041e290(&local_188,"mac",&DAT_007d37c9,0);
        *puVar6 = local_188;
        puVar6[1] = uStack_180;
        puVar6[2] = local_178;
        puVar6[3] = uStack_170;
        puVar6[4] = local_168;
        FUN_0041ced0(&local_188,"reseed_requests",&local_14c);
        puVar6[5] = local_188;
        puVar6[6] = uStack_180;
        puVar6[7] = local_178;
        puVar6[8] = uStack_170;
        puVar6[9] = local_168;
        FUN_0041dbf0(&local_188,"reseed_time_interval",&local_158);
        puVar6[10] = local_188;
        puVar6[0xb] = uStack_180;
        puVar6[0xc] = local_178;
        puVar6[0xd] = uStack_170;
        puVar6[0xe] = local_168;
        FUN_0041e470(&local_188);
        puVar6[0xf] = local_188;
        puVar6[0x10] = uStack_180;
        puVar6[0x11] = local_178;
        puVar6[0x12] = uStack_170;
        puVar6[0x13] = local_168;
        iVar1 = FUN_0053a5d0(lVar4,0,0,0,0,&local_148);
        if (iVar1 == 0) {
          FUN_0051f420();
          FUN_0051f540("../crypto/rand/rand_lib.c",0x259,"rand_new_drbg");
          FUN_0051f8f0(0x24,0x6c,0);
          FUN_0053a0d0(lVar4);
          lVar4 = 0;
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

