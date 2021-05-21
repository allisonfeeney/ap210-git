#ifndef ANALYTICAL_MODEL_PORT_ASSIGNMENT_SELECT_H
#define ANALYTICAL_MODEL_PORT_ASSIGNMENT_SELECT_H

// Enumerations
union analytical_model_port_assignment_select {
   class datum_difference_analytical_model_port_assignment *ST_datum_difference_analytical_model_port_assignment;
   class analytical_model_port_assignment *ST_analytical_model_port_assignment;
   class connection_zone_model_port_assignment *ST_connection_zone_model_port_assignment;
   class part_feature_model_port_assignment *ST_part_feature_model_port_assignment;
   class part_device_terminal_model_port_assignment *ST_part_device_terminal_model_port_assignment;
   };

#endif
