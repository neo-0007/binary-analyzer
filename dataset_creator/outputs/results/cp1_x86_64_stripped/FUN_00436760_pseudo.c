
long FUN_00436760(undefined8 *param_1,int param_2,long param_3,char *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
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
  lVar3 = FUN_00417730(*param_1,0xf,&DAT_008eaa30);
  lVar4 = FUN_00418710(*param_1);
  local_78 = 0;
  pcVar7 = "";
  if (param_4 != (char *)0x0) {
    pcVar7 = param_4;
  }
  if ((lVar3 == 0) || (lVar4 == 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/store/store_meth.c",0x120,"inner_loader_fetch");
    FUN_0051f8f0(0x2c,0x80106,0);
    lVar3 = 0;
    goto LAB_004368a0;
  }
  if ((param_3 != 0) && (param_2 != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/store/store_meth.c",0x129,"inner_loader_fetch");
    FUN_0051f8f0(0x2c,0xc0103,0);
    lVar3 = 0;
    goto LAB_004368a0;
  }
  if ((param_2 != 0) || (param_3 == 0)) {
    if (param_2 != 0) goto LAB_004368c8;
LAB_0043680c:
    param_1[2] = param_3;
    local_68 = FUN_004365a0;
    *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
    local_60 = FUN_00436690;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1[3] = pcVar7;
    local_58 = FUN_004365e0;
    local_50 = FUN_00436c40;
    local_48 = thunk_FUN_00436bc0;
    local_70 = 0;
    local_78 = FUN_00417f90(*param_1,0x16,&local_70,0,&local_68,param_1);
    if (local_78 == 0) {
      bVar1 = *(byte *)(param_1 + 5);
      lVar3 = local_78;
      if (param_3 == 0) goto LAB_004368a0;
    }
    else {
      param_2 = FUN_00418920(lVar4,param_3);
      FUN_00425e00(lVar3,local_70,param_2,pcVar7,local_78,thunk_FUN_00436b90,thunk_FUN_00436bc0);
      bVar1 = *(byte *)(param_1 + 5);
      if ((param_2 == 0) && (lVar3 = local_78, param_3 == 0)) goto LAB_004368a0;
joined_r0x00436ab9:
      lVar3 = local_78;
      if (local_78 != 0) goto LAB_004368a0;
    }
LAB_00436ad5:
    if ((~bVar1 & 1) == 0) goto LAB_004368ef;
    uVar6 = 0x8010c;
    pcVar7 = 
    "No store loader found. For standard store loaders you need at least one of the default or base providers available. Did you forget to load them? Info: "
    ;
  }
  else {
    param_2 = FUN_00418920(lVar4,param_3);
    if (param_2 == 0) goto LAB_0043680c;
LAB_004368c8:
    iVar2 = FUN_00425d20(lVar3,0,param_2,pcVar7,&local_78);
    if (iVar2 == 0) {
      *(int *)(param_1 + 1) = param_2;
      local_68 = FUN_004365a0;
      *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfe;
      local_60 = FUN_00436690;
      param_1[2] = param_3;
      param_1[3] = pcVar7;
      local_58 = FUN_004365e0;
      local_50 = FUN_00436c40;
      local_48 = thunk_FUN_00436bc0;
      local_70 = 0;
      local_78 = FUN_00417f90(*param_1,0x16,&local_70,0,&local_68,param_1);
      if (local_78 != 0) {
        FUN_00425e00(lVar3,local_70,param_2,pcVar7,local_78,thunk_FUN_00436b90,thunk_FUN_00436bc0);
        bVar1 = *(byte *)(param_1 + 5);
        goto joined_r0x00436ab9;
      }
      bVar1 = *(byte *)(param_1 + 5);
      goto LAB_00436ad5;
    }
    lVar3 = local_78;
    if (local_78 != 0) goto LAB_004368a0;
LAB_004368ef:
    uVar6 = 0x8010d;
    pcVar7 = "";
  }
  if (param_3 == 0) {
    param_3 = FUN_00418400(lVar4,param_2,0);
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/store/store_meth.c",0x167,"inner_loader_fetch");
  if (param_4 == (char *)0x0) {
    param_4 = "<null>";
  }
  uVar5 = FUN_00417a80(*param_1);
  FUN_0051f8f0(0x2c,uVar6,"%s%s, Scheme (%s : %d), Properties (%s)",pcVar7,uVar5,param_3,param_2,
               param_4);
  lVar3 = local_78;
LAB_004368a0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return lVar3;
}

