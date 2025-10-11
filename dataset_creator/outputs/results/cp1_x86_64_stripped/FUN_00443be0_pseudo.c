
undefined8 FUN_00443be0(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  
  uVar3 = DAT_0094b59c;
  iVar2 = *(int *)(param_1 + 2);
  puVar1 = param_1 + 0x18;
  param_3 = param_3 * 8;
  param_1[0x16] = puVar1;
  uVar3 = uVar3 & 0x200;
  if (iVar2 - 1U < 2) {
    if ((*(byte *)((long)param_1 + 0x3c) & 2) != 0) {
      if (uVar3 == 0) goto LAB_00443c64;
      goto LAB_00443c27;
    }
    if (uVar3 == 0) {
      iVar4 = FUN_0048a8b0(param_2,param_3,puVar1);
      iVar2 = *(int *)(param_1 + 2);
      *param_1 = FUN_0048a530;
      goto joined_r0x00443cd3;
    }
    if (iVar2 == 2) {
      iVar4 = FUN_0048a8b0(param_2,param_3,puVar1);
      *param_1 = FUN_0048a530;
      param_1[1] = FUN_0049a5a0;
      goto LAB_00443c45;
    }
    iVar4 = FUN_0049c660();
    *param_1 = FUN_0049c6c0;
    if (*(int *)(param_1 + 2) != 2) goto LAB_00443c3f;
LAB_00443cb3:
    pcVar5 = FUN_0049c6e0;
  }
  else {
    if (uVar3 == 0) {
LAB_00443c64:
      iVar4 = FUN_0048a5f0(param_2,param_3,puVar1);
      iVar2 = *(int *)(param_1 + 2);
      *param_1 = FUN_00489fa0;
joined_r0x00443cd3:
      if (iVar2 == 2) {
        pcVar5 = FUN_0048aae0;
        goto LAB_00443c41;
      }
    }
    else {
      if (iVar2 == 5) {
        iVar4 = FUN_0048a5f0(param_2,param_3,puVar1);
        *param_1 = FUN_00489fa0;
        param_1[1] = FUN_0049aa50;
        goto LAB_00443c45;
      }
LAB_00443c27:
      iVar4 = FUN_0049c630(param_2,param_3,puVar1);
      *param_1 = FUN_0049c6a0;
      if (*(int *)(param_1 + 2) == 2) goto LAB_00443cb3;
    }
LAB_00443c3f:
    pcVar5 = (code *)0x0;
  }
LAB_00443c41:
  param_1[1] = pcVar5;
LAB_00443c45:
  if (-1 < iVar4) {
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../providers/implementations/ciphers/cipher_aes_hw.c",0x75,"cipher_hw_aes_initkey");
  FUN_0051f8f0(0x39,0x65,0);
  return 0;
}

