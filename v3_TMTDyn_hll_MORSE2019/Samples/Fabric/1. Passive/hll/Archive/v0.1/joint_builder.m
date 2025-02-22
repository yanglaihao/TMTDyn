classdef joint_builder < handle
    
    properties (GetAccess = public, SetAccess = private)
        the_source;
        name;
        pipe;
        
        rom_val;
        first_body;
        second_body;
        transformations;
        transformation2nd;
        active_direction;
        x_axis;
        the_spring;
        the_damping;
        input_val;
        refbody_val;
        fixed_directions;
        desired_control;
        dof_val;
        
        i_t = 0; % nuimber of transformations
        i_t2nd = 0; % nuimber of transformations w.r.t. 2nd body
        i_q = 0; % number of dof definitions
    end
    
    methods
        function self = joint_builder(source, name)
            self.the_source = source;
            self.name = name;
            self.pipe = [];
        end
        
        function rom = rom(self)
            rom = rom_builder(self) ;
            self.rom_val = rom ;
        end
        
        function self = first(self,first)
            self.first_body = first ;
            self.pipe.first = first;
        end
        
        function self = second(self,second)
            self.second_body = seccond ;
            self.pipe.second = second;
        end
        
        function transformation = tr( self )
            self.i_t = self.i_t + 1;
            transformation = transformation_builder(self, self.i_t);
            self.transformations(self.i_t) = transformation;
        end
        
        function transformation2nd = tr2nd( self )
            self.i_t2nd = self.i_t2nd + 1;
            transformation2nd = transformation_builder(self, self.i_t2nd);
            self.transformation2nd(self.i_t2nd) = transformation2nd;
        end
        
        function dof = dof( self )
            self.i_q = self.i_q + 1;
            dof = dof_builder(self);
            self.dof_val(self.i_q) = dof;
        end
        
        function self = dir(self,direction)
            self.active_direction = direction;
            self.pipe.dir = direction;
        end
        
        function self = xaxis(self,axis)
            self.x_axis = axis;
            self.pipe.xaxis = axis;
        end
        
        function spring = spring( self )
            self.the_spring = spring_builder(self);
            spring = self.the_spring;
        end
        
        function damper = damp( self )
            self.the_damping = damper_builder(self);
            damper = self.the_damping;
        end
        
        function self = input(self,input)
            self.input_val = input ;
            self.pipe.input = input;
        end
        
        function self = refbody(self,refbody)
            self.refbody_val = refbody ;
            self.pipe.refbody = refbody;
        end
        
        function self = fixed(self,fixed_directions)
            self.fixed_directions = fixed_directions;
            self.pipe.fixed = fixed_directions;
        end
        
        function self = control(self,control)
            self.desired_control = control;
            self.pipe.control = control;
        end
        
        function source = end(self)
            source = self.the_source;
            source.pipe.joint(source.i_j) = self.pipe;
        end
        
    end
end
