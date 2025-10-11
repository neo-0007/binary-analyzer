
void FUN_004c0010(undefined8 param_1,undefined8 param_2,byte *param_3,long *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  long in_FS_OFFSET;
  bool bVar5;
  undefined1 local_508 [8];
  undefined1 local_500 [1024];
  undefined1 local_100 [64];
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = -*param_4;
  local_b8 = ~param_4[1];
  local_b0 = ~param_4[2];
  local_a8 = ~param_4[3];
  local_a0 = ~param_4[4];
  local_98 = ~param_4[5];
  local_90 = ~param_4[6];
  local_88 = ~param_4[7];
  FUN_005c7a50(local_500,&local_c0,0);
  FUN_005c6a00(local_100,param_2,param_6,param_4,param_5);
  FUN_005c7a50(local_500,local_100,1);
  FUN_005c60c0(&local_c0,local_100,param_4,param_5,1);
  FUN_005c7a50(local_500,&local_c0,2);
  iVar2 = 3;
  do {
    iVar3 = iVar2 + 1;
    FUN_005c71a0(&local_c0,local_100,param_4,param_5,local_500,iVar2);
    iVar2 = iVar3;
  } while (iVar3 != 0x10);
  bVar1 = param_3[0x3f];
  FUN_005c7a80(&local_c0,local_500,bVar1 >> 4);
  FUN_005c60c0(&local_c0,&local_c0,param_4,param_5,4);
  FUN_005c6b20(&local_c0,&local_c0,local_500,param_4,param_5,bVar1 & 0xf);
  pbVar4 = param_3 + 0x3e;
  do {
    bVar1 = *pbVar4;
    FUN_005c60c0(&local_c0,&local_c0,param_4,param_5,4);
    FUN_005c6b20(&local_c0,&local_c0,local_500,param_4,param_5,bVar1 >> 4);
    FUN_005c60c0(&local_c0,&local_c0,param_4,param_5,4);
    FUN_005c6b20(&local_c0,&local_c0,local_500,param_4,param_5,bVar1 & 0xf);
    bVar5 = pbVar4 != param_3;
    pbVar4 = pbVar4 + -1;
  } while (bVar5);
  FUN_005c7320(param_1,&local_c0,param_4,param_5);
  FUN_004227b0(local_508,0x4c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

