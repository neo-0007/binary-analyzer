
void FUN_005fb7d0(code *param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  char *pcVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  byte bVar9;
  undefined4 local_1070;
  byte local_106c [4];
  undefined8 local_1068;
  undefined8 local_1060;
  undefined1 *local_1058;
  undefined8 local_1050;
  undefined1 local_1048 [16];
  undefined8 local_1038 [511];
  long local_40;
  
  bVar9 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1068 = thunk_FUN_0070b640();
  do {
    lVar5 = FUN_0051e8c0(&local_1060,&local_1070,&local_1050,&local_1058,local_106c);
    if (lVar5 == 0) break;
    puVar8 = local_1038;
    for (lVar6 = 0x1fe; lVar6 != 0; lVar6 = lVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
    }
    local_1048 = (undefined1  [16])0x0;
    if ((local_106c[0] & 2) == 0) {
      local_1058 = &DAT_0083e5c2;
    }
    pcVar3 = (char *)FUN_0041c890(&local_1068,8,0);
    pcVar7 = "<null>";
    if (pcVar3 != (char *)0x0) {
      pcVar7 = pcVar3;
    }
    FUN_004aeb30(local_1048,0x1000,"%s:",pcVar7);
    lVar6 = thunk_FUN_007129d0(local_1048);
    puVar1 = local_1048 + lVar6;
    FUN_0051e110(lVar5,local_1050,puVar1,0x1000 - lVar6);
    iVar2 = thunk_FUN_007129d0(puVar1);
    lVar5 = (long)(iVar2 + (int)lVar6);
    FUN_004aeb30(local_1048 + lVar5,0x1000 - lVar5,":%s:%d:%s\n",local_1060,local_1070,local_1058);
    FUN_0041ad60(pcVar3,"../crypto/err/err_prn.c",0x2b);
    uVar4 = thunk_FUN_007129d0(local_1048);
    iVar2 = (*param_1)(local_1048,uVar4,param_2);
  } while (0 < iVar2);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

