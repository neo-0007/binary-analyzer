
long FUN_00517760(undefined8 *param_1,int param_2,long param_3,char *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  bool bVar7;
  long local_78;
  undefined8 local_70;
  code *local_68;
  code *local_60;
  code *local_58;
  code *local_50;
  code *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = FUN_00417730(*param_1,10,&DAT_00904080);
  lVar3 = FUN_00418710(*param_1);
  local_78 = 0;
  pcVar6 = "";
  if (param_4 != (char *)0x0) {
    pcVar6 = param_4;
  }
  bVar7 = lVar2 == 0 || lVar3 == 0;
  if (bVar7) {
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/encoder_meth.c",0x165,"inner_ossl_encoder_fetch");
    FUN_0051f8f0(0x3b,0x80106,0);
    lVar2 = 0;
    goto LAB_00517820;
  }
  if (param_2 == 0) {
LAB_00517848:
    param_2 = FUN_00418920(lVar3,param_3);
    if (param_2 != 0) goto LAB_005177ed;
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
    local_68 = FUN_00517520;
    local_60 = FUN_00517650;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[2] = param_3;
    param_1[3] = pcVar6;
    local_58 = FUN_00517560;
    local_50 = FUN_00517bd0;
    local_48 = thunk_FUN_00517b20;
    local_70 = 0;
    local_78 = FUN_00417f90(*param_1,0x14,&local_70,0,&local_68,param_1);
    if (local_78 != 0) {
      param_2 = FUN_00418920(lVar3,param_3);
      goto LAB_00517a0f;
    }
LAB_005178f3:
    uVar5 = (uint)*(byte *)(param_1 + 5);
    if ((param_3 == 0) && (lVar2 = local_78, !bVar7)) goto LAB_00517820;
LAB_00517905:
    uVar5 = ~uVar5 & 1;
    lVar2 = local_78;
  }
  else {
    if (param_3 != 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/encode_decode/encoder_meth.c",0x16e,"inner_ossl_encoder_fetch");
      FUN_0051f8f0(0x3b,0xc0103,0);
      lVar2 = 0;
      goto LAB_00517820;
    }
    if (param_2 == 0) goto LAB_00517848;
LAB_005177ed:
    iVar1 = FUN_00425d20(lVar2,0,param_2,pcVar6,&local_78);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
      local_68 = FUN_00517520;
      local_60 = FUN_00517650;
      *(int *)(param_1 + 1) = param_2;
      param_1[2] = param_3;
      param_1[3] = pcVar6;
      local_58 = FUN_00517560;
      local_50 = FUN_00517bd0;
      local_48 = thunk_FUN_00517b20;
      local_70 = 0;
      local_78 = FUN_00417f90(*param_1,0x14,&local_70,0,&local_68,param_1);
      if (local_78 != 0) {
LAB_00517a0f:
        FUN_00425e00(lVar2,local_70,param_2,pcVar6,local_78,thunk_FUN_00517500,thunk_FUN_00517b20);
        bVar7 = param_2 != 0;
        goto LAB_005178f3;
      }
      uVar5 = (uint)*(byte *)(param_1 + 5);
      goto LAB_00517905;
    }
    uVar5 = 0;
    lVar2 = local_78;
  }
  local_78 = lVar2;
  if (lVar2 == 0) {
    if (param_3 == 0) {
      param_3 = FUN_00418400(lVar3,param_2,0);
    }
    FUN_0051f420();
    FUN_0051f540("../crypto/encode_decode/encoder_meth.c",0x1a6,"inner_ossl_encoder_fetch");
    if (param_4 == (char *)0x0) {
      param_4 = "<null>";
    }
    uVar4 = FUN_00417a80(*param_1);
    FUN_0051f8f0(0x3b,0x8010d - uVar5,"%s, Name (%s : %d), Properties (%s)",uVar4,param_3,param_2,
                 param_4);
    lVar2 = local_78;
  }
LAB_00517820:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

