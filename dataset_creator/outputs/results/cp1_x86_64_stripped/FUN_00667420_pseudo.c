
void FUN_00667420(long param_1)

{
  if (*(char *)(param_1 + 0xc0) == '\0') {
    *(undefined1 *)(param_1 + 0xc0) = 1;
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_1 + 0x18);
    *(long *)(param_1 + 8) = param_1 + 0xac;
    *(long *)(param_1 + 0x10) = param_1 + 0xac;
    *(long *)(param_1 + 0x18) = param_1 + 0xb0;
  }
  return;
}

