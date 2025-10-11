
void FUN_00667470(long param_1)

{
  long lVar1;
  
  if (*(char *)(param_1 + 0xc0) != '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 0;
    lVar1 = *(long *)(param_1 + 0xb0) +
            (ulong)(*(long *)(param_1 + 0x10) != *(long *)(param_1 + 8)) * 4;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 0x98);
    *(long *)(param_1 + 0xb0) = lVar1;
    *(long *)(param_1 + 0x10) = lVar1;
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0xb8);
  }
  return;
}

