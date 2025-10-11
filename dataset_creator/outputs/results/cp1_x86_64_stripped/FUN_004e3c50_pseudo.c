
void FUN_004e3c50(undefined1 (*param_1) [16],byte *param_2)

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 *puVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;
  long lVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  long in_FS_OFFSET;
  undefined1 local_228 [40];
  undefined1 local_200 [40];
  undefined1 local_1d8 [48];
  undefined1 local_1a8 [128];
  undefined1 local_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  byte local_88 [65];
  byte local_47 [7];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pbVar4 = local_88 + 1;
  do {
    bVar5 = *param_2;
    pbVar6 = pbVar4 + 2;
    param_2 = param_2 + 1;
    *pbVar4 = bVar5 >> 4;
    pbVar4[-1] = bVar5 & 0xf;
    pbVar4 = pbVar6;
  } while (pbVar6 != local_47);
  cVar9 = '\0';
  pbVar4 = local_88;
  do {
    cVar8 = cVar9 + *pbVar4;
    pbVar6 = pbVar4 + 1;
    bVar5 = cVar8 + 8;
    cVar9 = (char)bVar5 >> 4;
    *pbVar4 = cVar8 - (bVar5 & 0xf0);
    pbVar4 = pbVar6;
  } while (local_88 + 0x3f != pbVar6);
  puVar1 = param_1[2] + 8;
  local_88[0x3f] = local_88[0x3f] + cVar9;
  pauVar2 = param_1 + 5;
  puVar3 = param_1[7] + 8;
  *(undefined1 (*) [16])(param_1[2] + 8) = (undefined1  [16])0x0;
  param_1[5] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)(param_1[4] + 8) = 0;
  *(undefined4 *)(param_1[2] + 8) = 1;
  *(undefined8 *)param_1[7] = 0;
  *(undefined4 *)param_1[5] = 1;
  *(undefined8 *)(param_1[9] + 8) = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[3] + 8) = (undefined1  [16])0x0;
  param_1[6] = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[7] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[8] + 8) = (undefined1  [16])0x0;
  lVar7 = 1;
  do {
    iVar10 = (int)lVar7;
    pbVar4 = local_88 + lVar7;
    lVar7 = lVar7 + 2;
    FUN_004e1f30(local_1a8,iVar10 >> 1,(int)(char)*pbVar4);
    FUN_004e39a0(local_128,param_1,local_1a8);
    FUN_004e02c0(param_1,local_128,local_b0);
    FUN_004e02c0(puVar1,local_100,local_d8);
    FUN_004e02c0(pauVar2,local_d8,local_b0);
    FUN_004e02c0(puVar3,local_128,local_100);
  } while (lVar7 != 0x41);
  FUN_004e3900(local_128,param_1);
  FUN_004e02c0(local_228,local_128,local_b0);
  FUN_004e02c0(local_200,local_100,local_d8);
  FUN_004e02c0(local_1d8,local_d8,local_b0);
  FUN_004e3300(local_128,local_228);
  FUN_004e02c0(local_228,local_128,local_b0);
  FUN_004e02c0(local_200,local_100,local_d8);
  FUN_004e02c0(local_1d8,local_d8,local_b0);
  FUN_004e3300(local_128,local_228);
  FUN_004e02c0(local_228,local_128,local_b0);
  FUN_004e02c0(local_200,local_100,local_d8);
  FUN_004e02c0(local_1d8,local_d8,local_b0);
  FUN_004e3300(local_128,local_228);
  FUN_004e02c0(param_1,local_128,local_b0);
  FUN_004e02c0(puVar1,local_100,local_d8);
  FUN_004e02c0(pauVar2,local_d8,local_b0);
  FUN_004e02c0(puVar3,local_128,local_100);
  lVar7 = 0;
  do {
    iVar10 = (int)lVar7;
    pbVar4 = local_88 + lVar7;
    lVar7 = lVar7 + 2;
    FUN_004e1f30(local_1a8,iVar10 >> 1,(int)(char)*pbVar4);
    FUN_004e39a0(local_128,param_1,local_1a8);
    FUN_004e02c0(param_1,local_128,local_b0);
    FUN_004e02c0(puVar1,local_100,local_d8);
    FUN_004e02c0(pauVar2,local_d8,local_b0);
    FUN_004e02c0(puVar3,local_128,local_100);
  } while (lVar7 != 0x40);
  FUN_004227b0(local_88,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

