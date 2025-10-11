
void FUN_00595890(int *param_1)

{
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_0041ad60(*(undefined8 *)(param_1 + 2),"../crypto/ui/ui_lib.c",0x37);
    if (*param_1 == 3) {
      FUN_0041ad60(*(undefined8 *)(param_1 + 10),"../crypto/ui/ui_lib.c",0x3a);
      FUN_0041ad60(*(undefined8 *)(param_1 + 0xc),"../crypto/ui/ui_lib.c",0x3b);
      FUN_0041ad60(*(undefined8 *)(param_1 + 0xe),"../crypto/ui/ui_lib.c",0x3c);
    }
  }
  FUN_0041ad60(param_1,"../crypto/ui/ui_lib.c",0x46);
  return;
}

