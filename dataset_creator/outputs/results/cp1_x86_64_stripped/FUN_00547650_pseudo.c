
bool FUN_00547650(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  undefined1 auStack_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  bVar4 = false;
  if (*(long *)(param_1 + 0x28) == 0) {
    bVar4 = false;
    goto LAB_005476e0;
  }
  if (param_2 == 0) {
    puVar3 = (undefined8 *)FUN_0041aec0(0x28,"../crypto/packet.c",0x162);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *(undefined8 *)(param_1 + 0x28);
      *(undefined8 **)(param_1 + 0x28) = puVar3;
      puVar3[3] = *(undefined8 *)(param_1 + 0x18);
      puVar3[2] = 0;
      puVar3[1] = 0;
      bVar4 = true;
      goto LAB_005476e0;
    }
  }
  else {
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) goto LAB_005476e0;
    puVar3 = (undefined8 *)FUN_0041aec0(0x28,"../crypto/packet.c",0x162);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = *(undefined8 *)(param_1 + 0x28);
      lVar1 = *(long *)(param_1 + 0x18);
      *(undefined8 **)(param_1 + 0x28) = puVar3;
      puVar3[1] = lVar1;
      puVar3[3] = param_2 + lVar1;
      puVar3[2] = param_2;
      iVar2 = FUN_00547420(param_1,param_2,auStack_28);
      bVar4 = iVar2 != 0;
      goto LAB_005476e0;
    }
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/packet.c",0x163,"WPACKET_start_sub_packet_len__");
  FUN_0051f8f0(0xf,0xc0100,0);
  bVar4 = false;
LAB_005476e0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

