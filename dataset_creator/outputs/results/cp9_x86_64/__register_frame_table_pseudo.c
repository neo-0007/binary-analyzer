
/* WARNING: Removing unreachable block (ram,0x006c5dc0) */

void __register_frame_table(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)malloc(0x30);
  puVar1[3] = param_1;
  *puVar1 = 0xffffffffffffffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0x7fa;
  pthread_mutex_lock((pthread_mutex_t *)object_mutex);
  puVar1[5] = unseen_objects;
  unseen_objects = puVar1;
  if (any_objects_registered == 0) {
    any_objects_registered = 1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
  return;
}

