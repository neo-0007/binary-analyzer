
void frame_heapsort(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  undefined4 local_40;
  
  uVar3 = *(ulong *)(param_3 + 8);
  iVar2 = (int)(uVar3 >> 1) + -1;
  if (-1 < iVar2) {
    do {
      frame_downheap(param_1,param_2,param_3 + 0x10,iVar2,uVar3 & 0xffffffff);
      bVar5 = iVar2 != 0;
      iVar2 = iVar2 + -1;
    } while (bVar5);
  }
  local_40 = (int)uVar3;
  local_40 = local_40 + -1;
  uVar3 = (ulong)local_40;
  while (0 < local_40) {
    uVar1 = *(undefined8 *)(param_3 + 0x10);
    uVar4 = uVar3 & 0xffffffff;
    *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_3 + 0x10 + uVar3 * 8);
    *(undefined8 *)(param_3 + 0x10 + uVar3 * 8) = uVar1;
    uVar3 = uVar3 - 1;
    frame_downheap(param_1,param_2,param_3 + 0x10,0,uVar4);
    local_40 = (int)uVar3;
  }
  return;
}

