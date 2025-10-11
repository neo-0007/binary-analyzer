
char * FUN_00417a80(undefined8 param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00417700();
  if (iVar1 != 0) {
    return "Global default library context";
  }
  iVar1 = FUN_00417590(param_1);
  pcVar2 = "Non-default library context";
  if (iVar1 != 0) {
    pcVar2 = "Thread-local default library context";
  }
  return pcVar2;
}

