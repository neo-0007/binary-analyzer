
void FUN_004bf8e0(undefined8 param_1,undefined8 param_2,byte *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  undefined1 local_1648 [8];
  undefined1 local_1640 [320];
  undefined1 local_1500 [320];
  undefined1 local_13c0 [320];
  undefined1 local_1280 [4672];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = local_1640;
  puVar4 = local_13c0;
  puVar5 = local_1500;
  if ((ulong)((uint)local_1640 & 0xfff) + 0x140 >> 0xc != 0) {
    puVar3 = local_13c0;
    puVar4 = local_1500;
    puVar5 = local_1640;
  }
  FUN_004be5a0(puVar3,param_4);
  FUN_004be5a0(puVar4,param_2);
  FUN_004be5a0(local_1280,param_5);
  FUN_004bd9c0(local_1280,local_1280,local_1280,puVar3,param_6);
  FUN_004bd9c0(local_1280,local_1280,&DAT_007e9900,puVar3,param_6);
  FUN_004bd9c0(puVar5,local_1280,&DAT_007e9a40,puVar3,param_6);
  FUN_004bd9c0(puVar4,puVar4,local_1280,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0);
  FUN_004be800(local_1280,puVar4,1);
  FUN_004bce00(puVar5,puVar4,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,2);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,4);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,8);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,0x10);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0x11);
  FUN_004be860(puVar5,local_1280,2);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,3);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,6);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,0xc);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,0x18);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0x19);
  FUN_004be860(puVar5,local_1280,4);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,5);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,10);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,0x14);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0x15);
  FUN_004be860(puVar5,local_1280,6);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,7);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,0xe);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,0x1c);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0x1d);
  FUN_004be860(puVar5,local_1280,8);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,9);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,0x12);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0x13);
  FUN_004be860(puVar5,local_1280,10);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0xb);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,0x16);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0x17);
  FUN_004be860(puVar5,local_1280,0xc);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0xd);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,0x1a);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0x1b);
  FUN_004be860(puVar5,local_1280,0xe);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0xf);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,1);
  FUN_004be800(local_1280,puVar5,0x1e);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004be800(local_1280,puVar5,0x1f);
  FUN_004be860(puVar5,local_1280,param_3[0x7f] >> 3);
  iVar1 = 0x3f6;
  do {
    FUN_004bce00(puVar5,puVar5,puVar3,param_6,5);
    iVar2 = iVar1 + -5;
    FUN_004be860(puVar4,local_1280,
                 (int)(uint)CONCAT11(param_3[(long)(iVar1 >> 3) + 1],param_3[iVar1 >> 3]) >>
                 ((byte)iVar1 & 7) & 0x1f);
    FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
    iVar1 = iVar2;
  } while (iVar2 != -1);
  FUN_004bce00(puVar5,puVar5,puVar3,param_6,4);
  FUN_004be860(puVar4,local_1280,*param_3 & 0xf);
  FUN_004bd9c0(puVar5,puVar5,puVar4,puVar3,param_6);
  FUN_004bd9c0(puVar5,puVar5,&DAT_007e9a40,puVar3,param_6);
  FUN_004be2e0(param_1,puVar5);
  FUN_004227b0(local_1648,0x1600);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

