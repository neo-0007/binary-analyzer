
int FUN_00621330(long *param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined1 local_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  uint7 uStack_49;
  ushort local_42;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = FUN_00620910(param_2);
  if ((((iVar2 == 0) || (*param_1 == 0)) || (param_2[0x16] == -1)) ||
     ((param_2[0x16] == 1 && (param_1[3] == 0)))) {
    FUN_0051f420();
    iVar2 = 0;
    FUN_0051f540("../crypto/ct/ct_vfy.c",0x68,"SCT_CTX_verify");
    FUN_0051f8f0(0x32,0x6a,0);
    goto LAB_00621453;
  }
  if (*param_2 != 0) {
    FUN_0051f420();
    iVar2 = 0;
    FUN_0051f540("../crypto/ct/ct_vfy.c",0x6c,"SCT_CTX_verify");
    FUN_0051f8f0(0x32,0x73,0);
    goto LAB_00621453;
  }
  iVar2 = 0;
  if ((*(long *)(param_2 + 8) != param_1[2]) ||
     (iVar3 = thunk_FUN_00713570(*(undefined8 *)(param_2 + 6),param_1[1]), iVar3 != 0)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_vfy.c",0x71,"SCT_CTX_verify");
    FUN_0051f8f0(0x32,0x72,0);
    goto LAB_00621453;
  }
  if ((ulong)param_1[9] < *(ulong *)(param_2 + 10)) {
    FUN_0051f420();
    FUN_0051f540("../crypto/ct/ct_vfy.c",0x75,"SCT_CTX_verify");
    FUN_0051f8f0(0x32,0x74,0);
    goto LAB_00621453;
  }
  lVar4 = FUN_00405f40();
  if ((lVar4 == 0) ||
     (iVar2 = FUN_0040cae0(lVar4,0,"SHA2-256",param_1[10],param_1[0xb],*param_1), iVar2 == 0)) {
LAB_006213ff:
    iVar2 = 0;
  }
  else {
    if ((param_2[0x16] == -1) || ((param_2[0x16] == 1 && (param_1[3] == 0)))) goto LAB_006213ff;
    uStack_4b = 0;
    local_4c = (undefined1)*param_2;
    uVar1 = *(ulong *)(param_2 + 10);
    uStack_49 = (uint7)((ushort)(uVar1 >> 0x30) & 0xff) | (uint7)((uint)(uVar1 >> 0x20) & 0xff00) |
                ((uint7)(uVar1 >> 8) & 0xff000000) >> 8 | (uint7)uVar1 & 0xff000000 |
                (uint7)(((uVar1 & 0xff0000) << 0x18) >> 8) |
                (uint7)(((uVar1 & 0xff00) << 0x28) >> 8) | (uint7)((uVar1 << 0x38) >> 8);
    uStack_4a = (undefined1)(uVar1 >> 0x38);
    local_42 = *(ushort *)(param_2 + 0x16) << 8 | *(ushort *)(param_2 + 0x16) >> 8;
    iVar2 = FUN_00405f60(lVar4,&local_4c,0xc,0x6213ca);
    if (iVar2 == 0) goto LAB_006213ff;
    if (param_2[0x16] == 0) {
      lVar5 = param_1[5];
      lVar6 = param_1[6];
    }
    else {
      iVar2 = FUN_00405f60(lVar4,param_1[3],param_1[4]);
      if (iVar2 == 0) goto LAB_006213ff;
      lVar5 = param_1[7];
      lVar6 = param_1[8];
    }
    if (lVar5 == 0) goto LAB_006213ff;
    local_4c = (undefined1)((ulong)lVar6 >> 0x10);
    uStack_4b = (undefined1)((ulong)lVar6 >> 8);
    uStack_4a = (undefined1)lVar6;
    iVar2 = FUN_00405f60(lVar4,&local_4c,3);
    if ((iVar2 == 0) || (iVar2 = FUN_00405f60(lVar4,lVar5,lVar6), iVar2 == 0)) goto LAB_006213ff;
    local_4c = (undefined1)((ushort)(short)param_2[0xe] >> 8);
    uStack_4b = (undefined1)(short)param_2[0xe];
    iVar2 = FUN_00405f60(lVar4,&local_4c,2);
    if ((iVar2 == 0) ||
       ((*(long *)(param_2 + 0xe) != 0 &&
        (iVar2 = FUN_00405f60(lVar4,*(undefined8 *)(param_2 + 0xc)), iVar2 == 0))))
    goto LAB_006213ff;
    iVar2 = FUN_0040d1b0(lVar4,*(undefined8 *)(param_2 + 0x12),*(undefined8 *)(param_2 + 0x14));
    if (iVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/ct/ct_vfy.c",0x88,"SCT_CTX_verify");
      FUN_0051f8f0(0x32,0x6b,0);
    }
  }
  FUN_00406b90(lVar4);
LAB_00621453:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    FUN_00771f60();
  }
  return iVar2;
}

