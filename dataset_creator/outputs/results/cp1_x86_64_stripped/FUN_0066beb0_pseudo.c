
long FUN_0066beb0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  cVar3 = FUN_006c3d30(param_1 + 0x68);
  if (cVar3 != '\0') {
                    /* try { // try from 0066beea to 0066beee has its CatchHandler @ 0066bf89 */
    cVar3 = FUN_00667e30(param_1);
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0xc0) = 0;
    FUN_00667b50(param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    *(undefined2 *)(param_1 + 0xa9) = 0;
    *(undefined8 *)(param_1 + 8) = uVar2;
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined8 *)(param_1 + 0x84) = *(undefined8 *)(param_1 + 0x7c);
    *(undefined8 *)(param_1 + 0x8c) = *(undefined8 *)(param_1 + 0x7c);
    lVar4 = FUN_006c3ec0(param_1 + 0x68);
    if ((lVar4 != 0) && (cVar3 == '\x01')) goto LAB_0066bf64;
  }
  param_1 = 0;
LAB_0066bf64:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00771f60();
}

