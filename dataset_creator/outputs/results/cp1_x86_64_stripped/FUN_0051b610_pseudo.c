
undefined8 FUN_0051b610(long param_1)

{
  if (param_1 != 0) {
    LOCK();
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
    UNLOCK();
    return 1;
  }
  FUN_0051f420();
  FUN_0051f540("../crypto/engine/eng_list.c",0x1b7,"ENGINE_up_ref");
  FUN_0051f8f0(0x26,0xc0102,0);
  return 0;
}

