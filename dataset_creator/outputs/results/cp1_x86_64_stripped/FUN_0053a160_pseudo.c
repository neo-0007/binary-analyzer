
undefined8 * FUN_0053a160(undefined8 *param_1,long *param_2)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_rand.c",0x151,"EVP_RAND_CTX_new");
    FUN_0051f8f0(6,0xda,0);
  }
  else {
    puVar3 = (undefined8 *)FUN_0041aec0(0x28,"../crypto/evp/evp_rand.c",0x155);
    if (puVar3 != (undefined8 *)0x0) {
      lVar4 = FUN_00422240();
      puVar3[4] = lVar4;
      if (lVar4 != 0) {
        if (param_2 == (long *)0x0) {
          uVar6 = 0;
          lVar4 = 0;
        }
        else {
          LOCK();
          *(int *)(param_2 + 3) = (int)param_2[3] + 1;
          UNLOCK();
          lVar4 = param_2[1];
          uVar6 = *(undefined8 *)(*param_2 + 0x30);
        }
        pcVar1 = (code *)param_1[7];
        uVar5 = FUN_00420b60(*param_1);
        lVar4 = (*pcVar1)(uVar5,lVar4,uVar6);
        puVar3[1] = lVar4;
        if ((lVar4 != 0) && (iVar2 = FUN_0053a010(param_1), iVar2 != 0)) {
          *puVar3 = param_1;
          puVar3[2] = param_2;
          LOCK();
          *(undefined4 *)(puVar3 + 3) = 1;
          UNLOCK();
          return puVar3;
        }
        FUN_0051f420();
        FUN_0051f540("../crypto/evp/evp_rand.c",0x168,"EVP_RAND_CTX_new");
        FUN_0051f8f0(6,0xc0100,0);
        (*(code *)param_1[8])(puVar3[1]);
        FUN_00422300(puVar3[4]);
        FUN_0041ad60(puVar3,"../crypto/evp/evp_rand.c",0x16b);
        FUN_0053a0d0(param_2);
        return (undefined8 *)0x0;
      }
    }
    FUN_0041ad60(puVar3,"../crypto/evp/evp_rand.c",0x157);
    FUN_0051f420();
    FUN_0051f540("../crypto/evp/evp_rand.c",0x158,"EVP_RAND_CTX_new");
    FUN_0051f8f0(6,0xc0100,0);
  }
  return (undefined8 *)0x0;
}

