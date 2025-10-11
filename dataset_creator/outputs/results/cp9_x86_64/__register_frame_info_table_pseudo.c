
/* WARNING: Removing unreachable block (ram,0x006c5d10) */

void __register_frame_info_table(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_2[3] = param_1;
  *param_2 = 0xffffffffffffffff;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[4] = 0x7fa;
  pthread_mutex_lock((pthread_mutex_t *)object_mutex);
  puVar1 = param_2;
  param_2[5] = unseen_objects;
  unseen_objects = puVar1;
  if (any_objects_registered == 0) {
    any_objects_registered = 1;
  }
  pthread_mutex_unlock((pthread_mutex_t *)object_mutex);
  return;
}

