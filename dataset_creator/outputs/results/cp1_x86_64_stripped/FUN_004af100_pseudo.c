
int FUN_004af100(undefined8 param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  undefined1 auStack_b8 [120];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = FUN_004aff30(param_1,auStack_b8,0);
  if (iVar1 == -1) {
    iVar2 = FUN_004b1020(0xffffffff);
    if (iVar2 == 0) {
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock.c",0x103,"BIO_accept");
      puVar7 = (undefined4 *)FUN_006d2700();
      FUN_0051f8f0(2,*puVar7,"calling accept()");
      FUN_0051f420();
      FUN_0051f540("../crypto/bio/bio_sock.c",0x105,"BIO_accept");
      FUN_0051f8f0(0x20,100,0);
    }
    else {
      iVar1 = -2;
    }
    goto LAB_004af23f;
  }
  if (param_2 == (long *)0x0) goto LAB_004af23f;
  lVar3 = FUN_005bfcb0(auStack_b8,1);
  lVar4 = FUN_005bfc30(auStack_b8,1);
  if ((lVar3 == 0) || (lVar4 == 0)) {
    *param_2 = 0;
LAB_004af182:
    FUN_0051f420();
    FUN_0051f540("../crypto/bio/bio_sock.c",0x112,"BIO_accept");
    FUN_0051f8f0(0x20,0xc0100,0);
    FUN_004b0060(iVar1);
    iVar1 = -1;
  }
  else {
    lVar5 = thunk_FUN_007129d0(lVar3);
    lVar6 = thunk_FUN_007129d0(lVar4);
    lVar5 = FUN_0041aec0(lVar5 + 2 + lVar6,"../crypto/bio/bio_sock.c",0x10d);
    *param_2 = lVar5;
    if (lVar5 == 0) goto LAB_004af182;
    thunk_FUN_00712800(lVar5,lVar3);
    lVar5 = *param_2;
    lVar6 = thunk_FUN_007129d0(lVar5);
    *(undefined2 *)(lVar5 + lVar6) = 0x3a;
    thunk_FUN_00712690(*param_2,lVar4);
  }
  FUN_0041ad60(lVar3,"../crypto/bio/bio_sock.c",0x11a);
  FUN_0041ad60(lVar4,"../crypto/bio/bio_sock.c",0x11b);
LAB_004af23f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

