
ulong FUN_00667db0(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x30))();
  if (cVar1 != '\0') {
    return *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x18) >> 2;
  }
  iVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x38))
                    (*(long **)(param_1 + 200),param_2,*(undefined8 *)(param_1 + 0xd0),
                     *(undefined8 *)(param_1 + 0xe0),
                     *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2);
  return (ulong)(uint)((iVar2 + (int)*(undefined8 *)(param_1 + 0xd0)) - *(int *)(param_1 + 0xe8));
}

