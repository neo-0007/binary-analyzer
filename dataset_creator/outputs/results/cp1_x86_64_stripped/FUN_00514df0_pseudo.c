
long FUN_00514df0(undefined8 *param_1,int param_2,long param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = FUN_00417730(*param_1,0xb,&DAT_00904060);
  lVar4 = FUN_00418710(*param_1);
  local_78 = 0;
  pcVar8 = "";
  if (param_4 != (char *)0x0) {
    pcVar8 = param_4;
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/decoder_meth.c",0x15b,"inner_ossl_decoder_fetch");
    FUN_0051f8f0(0x3c,0x80106,0);
    lVar5 = 0;
    goto LAB_00514ec5;
  }
  if (param_3 != 0) {
    if (param_2 != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/encode_decode/decoder_meth.c",0x164,"inner_ossl_decoder_fetch");
      FUN_0051f8f0(0x3c,0xc0103,0);
      lVar5 = 0;
      goto LAB_00514ec5;
    }
    if ((param_3 != 0) && (param_2 == 0)) {
      param_2 = FUN_00418920(lVar4,param_3);
    }
  }
  if (param_2 == 0) {
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
    local_68 = FUN_00514bb0;
    local_60 = FUN_00514ce0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = param_3;
    param_1[3] = pcVar8;
    local_58 = FUN_00514bf0;
    local_50 = FUN_005155c0;
    local_48 = thunk_FUN_005151b0;
    local_70 = 0;
    lVar5 = FUN_00417f90(*param_1,0x15,&local_70,0,&local_68,param_1);
    local_78 = lVar5;
    if (lVar5 != 0) {
      if (param_3 == 0) goto LAB_00514ec5;
      param_2 = FUN_00418920(lVar4,param_3);
      if (param_2 != 0) goto LAB_0051503e;
      uVar7 = ~(uint)*(byte *)(param_1 + 5) & 1;
      goto LAB_00514ebc;
    }
    bVar1 = *(byte *)(param_1 + 5);
    if (param_3 == 0) goto LAB_00514ec5;
LAB_00515084:
    uVar7 = ~(uint)bVar1 & 1;
  }
  else {
    iVar2 = FUN_00425d20(lVar3,0,param_2,pcVar8,&local_78);
    if (iVar2 == 0) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
      local_68 = FUN_00514bb0;
      local_60 = FUN_00514ce0;
      *(int *)(param_1 + 1) = param_2;
      param_1[2] = param_3;
      param_1[3] = pcVar8;
      local_58 = FUN_00514bf0;
      local_50 = FUN_005155c0;
      local_48 = thunk_FUN_005151b0;
      local_70 = 0;
      local_78 = FUN_00417f90(*param_1,0x15,&local_70,0,&local_68,param_1);
      if (local_78 == 0) {
        bVar1 = *(byte *)(param_1 + 5);
        goto LAB_00515084;
      }
LAB_0051503e:
      FUN_00425e00(lVar3,local_70,param_2,pcVar8,local_78,thunk_FUN_00514b90,thunk_FUN_005151b0);
      uVar7 = ~(uint)*(byte *)(param_1 + 5) & 1;
    }
    else {
      uVar7 = 0;
    }
LAB_00514ebc:
    lVar5 = local_78;
    if (local_78 != 0) goto LAB_00514ec5;
  }
  if (param_3 == 0) {
    param_3 = FUN_00418400(lVar4,param_2,0);
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/encode_decode/decoder_meth.c",0x19d,"inner_ossl_decoder_fetch");
  if (param_4 == (char *)0x0) {
    param_4 = "<null>";
  }
  uVar6 = FUN_00417a80(*param_1);
  FUN_0051f8f0(0x3c,0x8010d - uVar7,"%s, Name (%s : %d), Properties (%s)",uVar6,param_3,param_2,
               param_4);
  lVar5 = local_78;
LAB_00514ec5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar5;
}

