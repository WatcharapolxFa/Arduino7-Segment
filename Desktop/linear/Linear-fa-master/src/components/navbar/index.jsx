import React from 'react'
import { Link } from 'react-router-dom'
import './style.module.css'

const Navbar = () => {
    return (
        <nav>
            <div class="nav-wrapper">
            <Link to="/" class="brand-logo">
            <img 
                width="66px"
                src="https://res.cloudinary.com/teepublic/image/private/s--RisM7w3B--/t_Resized%20Artwork/c_fit,g_north_west,h_954,w_954/co_fac2cd,e_outline:48/co_fac2cd,e_outline:inner_fill:48/co_ffffff,e_outline:48/co_ffffff,e_outline:inner_fill:48/co_bbbbbb,e_outline:3:1000/c_mpad,g_center,h_1260,w_1260/b_rgb:eeeeee/c_limit,f_auto,h_630,q_90,w_630/v1614722040/production/designs/19876903_0.jpg" alt="" />
            </Link>
            <ul class="center brand-logo">
                <li>Hello Linear</li>
            </ul>
            </div>
        </nav>
    )
}

export default Navbar
