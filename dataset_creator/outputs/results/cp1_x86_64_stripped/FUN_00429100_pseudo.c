
long FUN_00429100(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)FUN_00417730(param_1,5,&DAT_0091b6a0);
  if (puVar2 != (undefined8 *)0x0) {
    iVar1 = FUN_004222a0(*puVar2);
    if (iVar1 != 0) {
      lVar5 = puVar2[2];
      FUN_004222e0(*puVar2);
      if (lVar5 != 0) {
        return lVar5;
      }
      iVar1 = FUN_004222c0(*puVar2);
      if (iVar1 != 0) {
        lVar5 = puVar2[2];
        if (puVar2[2] == 0) {
          lVar5 = puVar2[1];
          if (lVar5 == 0) {
            FUN_0051f000();
            lVar5 = FUN_00417730(param_1,5,&DAT_0091b6a0);
            if (lVar5 != 0) {
              pcVar4 = *(char **)(lVar5 + 0x40);
              if (pcVar4 == (char *)0x0) {
                pcVar4 = "SEED-SRC";
              }
              lVar3 = FUN_00539fd0(param_1,pcVar4,*(undefined8 *)(lVar5 + 0x48));
              if (lVar3 == 0) {
                FUN_0051f420();
                lVar5 = 0;
                FUN_0051f540("../crypto/rand/rand_lib.c",0x21a,"rand_new_seed");
                FUN_0051f8f0(0x24,0x90,0);
              }
              else {
                lVar5 = FUN_0053a160(lVar3,0);
                thunk_FUN_005399a0(lVar3);
                if (lVar5 == 0) {
                  FUN_0051f420();
                  FUN_0051f540("../crypto/rand/rand_lib.c",0x220,"rand_new_seed");
                  FUN_0051f8f0(0x24,0x8f,0);
                }
                else {
                  iVar1 = FUN_0053a5d0(lVar5,0,0,0,0,0);
                  if (iVar1 == 0) {
                    FUN_0051f420();
                    FUN_0051f540("../crypto/rand/rand_lib.c",0x224,"rand_new_seed");
                    FUN_0051f8f0(0x24,0x6c,0);
                    FUN_0053a0d0(lVar5);
                    lVar5 = 0;
                  }
                }
              }
            }
            puVar2[1] = lVar5;
            FUN_0051f050();
            lVar5 = puVar2[1];
          }
          lVar3 = FUN_00428500(param_1,lVar5,0x100,0xe10);
          puVar2[2] = lVar3;
          lVar5 = lVar3;
          if (lVar3 != 0) {
            iVar1 = FUN_00539f70(lVar3);
            if (iVar1 == 0) {
              FUN_0051f420();
              FUN_0051f540("../crypto/rand/rand_lib.c",0x28f,"RAND_get0_primary");
              FUN_0051f8f0(6,0xd4,0);
              lVar5 = 0;
              FUN_0053a0d0(lVar3);
              puVar2[2] = 0;
            }
          }
        }
        FUN_004222e0(*puVar2);
        return lVar5;
      }
    }
  }
  return 0;
}

