
void FUN_004828e0(long param_1)

{
  FUN_0041ad60(*(undefined8 *)(param_1 + 8),"../providers/implementations/storemgmt/file_store.c",
               0x73);
  if (*(int *)(param_1 + 0x10) != 1) {
    FUN_00515c80(*(undefined8 *)(param_1 + 0x20));
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x30),
                 "../providers/implementations/storemgmt/file_store.c",0x76);
    FUN_0041ad60(*(undefined8 *)(param_1 + 0x28),
                 "../providers/implementations/storemgmt/file_store.c",0x77);
  }
  FUN_0041ad60(param_1,"../providers/implementations/storemgmt/file_store.c",0x79);
  return;
}

