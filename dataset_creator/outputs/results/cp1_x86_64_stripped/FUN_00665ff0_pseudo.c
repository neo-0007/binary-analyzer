
int FUN_00665ff0(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = (**(code **)(**(long **)(param_1 + 200) + 0x30))();
  if (cVar1 != '\0') {
    return (int)*(undefined8 *)(param_1 + 0x10) - *(int *)(param_1 + 0x18);
  }
  iVar2 = (**(code **)(**(long **)(param_1 + 200) + 0x38))
                    (*(long **)(param_1 + 200),param_2,*(undefined8 *)(param_1 + 0xd0),
                     *(undefined8 *)(param_1 + 0xe0),
                     *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8));
  return (iVar2 + (int)*(undefined8 *)(param_1 + 0xd0)) - *(int *)(param_1 + 0xe8);
}

